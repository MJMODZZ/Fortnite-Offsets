static std::string ReadFNamePool(int key)
{
	uint32_t ChunkOffset = (uint32_t)((int)(key) >> 16);
	uint16_t NameOffset = (uint16_t)key;

	uint64_t NamePoolChunk = driver.read<uint64_t>(base_address + 0xCE9BD80 + (8 * ChunkOffset) + 16) + (unsigned int)(4 * NameOffset);
	uint16_t nameEntry = driver.read<uint16_t>(NamePoolChunk);

	int nameLength = nameEntry >> 6;
	char buff[1024];
	if ((uint32_t)nameLength)
	{
		for (int x = 0; x < nameLength; ++x)
		{
			buff[x] = driver.read<char>(NamePoolChunk + 4 + x);
		}

		char* v2 = buff; // rdi
		signed int v4 = nameLength; // ebx
		unsigned int v5; // er9
		unsigned int v6; // er8
		__int64 result; // rax
		unsigned int v8; // er9
		int v9; // ecx

		v5 = driver.read<uint64_t>(base_address + 0xCD51BF8); // 0xCD51BF8
		v6 = v5 ^ 0x9C677CC5;
		result = 1041204193 * v5;
		v8 = v5 % 0x21;
		v9 = 0;
		if (v4)
		{
			do
			{
				result = v9 + v8;
				++v9;
				v6 += result;
				*v2++ ^= v6;
			} while (v9 < v4);
		}
		buff[nameLength] = '\0';
		return std::string(buff);
	}
	else {
		return "";
	}
}

static std::string GetNameFromFName(int key)
{
	uint64_t NamePoolChunk = driver.read<uint64_t>(base_address + 0xCE9BD80 + (8 * (uint32_t)((int)(key) >> 16)) + 16) + (unsigned int)(4 * (uint16_t)key);

	if (driver.read<uint16_t>(NamePoolChunk) < 64)
	{
		auto a1 = driver.read<DWORD>( NamePoolChunk + 4);
		return ReadFNamePool(a1);
	}

	else
	{
		return ReadFNamePool(key);
	}
}
