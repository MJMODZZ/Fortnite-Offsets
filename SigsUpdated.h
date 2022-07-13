// Some Sigs shit made by MJMODZZ#4133, should be updated and work.
// DISCORD!!!!!! https://dsc.gg/mjmodzz

/*
LICENSE
MIT License

Copyright(c) 2022 MJMODZZ, https://github.com/mjmodzz, MJMODZZ#4133

Permission is hereby granted, free of charge, to any person obtaining a copy
of this softwareand associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and /or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright noticeand this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

UWorld: 48 89 05 ? ? ? ? 48 8B 4B 78 (RVA 7)
FreeFn: 48 85 C9 0F 84 ? ? ? ? 53 48 83 EC 20 48 89 7C 24 30 48 8B D9 48 8B 3D ? ? ? ? 48 85 FF 0F 84 ? ? ? ? 48 8B 07 4C 8B 40 30 48 8D 05 ? ? ? ? 4C 3B C0
LineOfSight: 48 89 5C 24 ? 48 89 74 24 ? 55 57 41 56 48 8B EC 48 83 EC 60 33 FF 4D 8B F0 48 89 7D 28
ProjectWorldToScreen: E8 ? ? ? ? 4C 8D 5C 24 ? 41 88 06 49 8B 5B 20 49 8B 73 30 49 8B 7B 38 (RVA 5)
GetNameByIndex: 48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 56 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 84 24 ? ? ? ? 8B 01 4C 8B F2
BoneMatrix: E8 ? ? ? ? 0F 10 40 68 (RVA 5)
SpreadCaller: E8 ? ? ? ? 48 8D 4B 28 E8 ? ? ? ? 48 8B C8 (RVA 5)
CalculateShot: 48 8B C4 48 89 58 08 48 89 70 10 48 89 78 18 55 41 56 41 57 48 8D A8 ? ? ? ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 ? ? ? ? 33 FF 89 7C 24 30 48 39 3D ? ? ? ? 0F 85 ? ? ? ? 48 8B 05 ? ? ? ? 48 8B 1D ? ? ? ? 48 85 C0 0F 84 ? ? ? ? FF D0 4C 8B F8
FindObject: E8 ? ? ? ? 40 80 EF 03
GEngine: 48 8B 05 ? ? ? ? 44 8B CB 44 8B C7 (rva 7) (0xCBE4180)
GWorld: 48 89 05 ? ? ? ? 48 8B 4B 78 (rva 7) (0xCE49278)
GObjects: 48 8B 05 ? ? ? ? 48 8B 0C C8 4C 8D 14 D1 EB ? 45 33 D2 EB ? 8B C8 0B CE F0 41 0F B1 4A 08 0F 84 (rva 7) (0xCC97018)
FNameToString/GetNameByIndex: E8 ? ? ? ? 8B 7D F8 48 8B 5D F0 48 8D 45 F0 (rva 5) (0xD97720)
GetBoneMatrix: E8 ? ? ? ? F2 0F 10 57 48 48 8D 54 24 30 (rva 5) (0x13C250C)
StaticFindObject: E8 ? ? ? ? 48 3B C6 0F 84 ? ? ? ? 48 85 C0 (rva 5) (0xD9E5C8)
FreeInternal: 48 85 C9 0F 84 ? ? ? ? 53 48 83 EC ? 48 89 7C 24 30 (0xEFD0C0)
GetPlayerViewPoint: 48 8B C4 48 89 58 20 55 56 57 41 54 41 55 41 56 41 57 48 8D 68 A1 48 81 EC ? ? ? ? 44 0F 29 40 B8 (0x10E63D0)
