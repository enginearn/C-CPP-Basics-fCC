# C++

## Compiler Settings in VSCode

### C++ Compiler

<details>
<summary>Install gcc</summary>

- [gcc.gnu.org](https://gcc.gnu.org/install/binaries.html)

  - [x86_64-12.2.0-release-posix-seh-rt_v10-rev0.7z](https://github.com/niXman/mingw-builds-binaries/releases)

  - [LLVM Project page - LLVM-15.0.3-win64.exe](https://github.com/llvm/llvm-project)

</details>

<details>
<summary>VS Code -> Terminal -> create task</summary>

``` tasks.json
{
	"version": "2.0.0",
	"tasks": [
		{
			"type": "cppbuild",
			"label": "g++ 12.2.0 build active file",
			"command": "C:\\mingw64\\bin\\g++.exe",
			"args": [
				"-fdiagnostics-color=always",
				"-g",
				"-std=c++20",
				"${file}",
				"-o",
				"${fileDirname}\\${fileBasenameNoExtension}.exe"
			],
			"options": {
				"cwd": "${fileDirname}"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": "build",
			"detail": "コンパイラ: C:\\mingw64\\bin\\g++.exe"
		},
		{
			"type": "cppbuild",
			"label": "clang++ 14.0.6 build active file",
			"command": "C:\\Users\\path\\to\\AppData\\Local\\LLVM\\bin\\clang++.exe",
			"args": [
				"-fcolor-diagnostics",
				"-fansi-escape-codes",
				"-g",
				"-std=c++20",
				"${file}",
				"-o",
				"${fileDirname}\\${fileBasenameNoExtension}.exe"
			],
			"options": {
				"cwd": "${fileDirname}"
			},
			"problemMatcher": [
				"$gcc"
			],
			"group": "build",
			"detail": "コンパイラ: C:\\Users\\path\\to\\AppData\\Local\\LLVM\\bin\\clang++.exe"
		}
	]
}
```

</details>

---

## References

[How to use C++ 20 in g++ - Stack Overflow](https://stackoverflow.com/questions/66975491/how-to-use-c-20-in-g)

[一貫比較 - cpprefjp C++日本語リファレンス](https://cpprefjp.github.io/lang/cpp20/consistent_comparison.html)

[constinit, consteval, constexpr, const の違い - gununuの日記](https://gununu.hatenadiary.jp/entry/2019/10/15/020903)

[GCC, the GNU Compiler Collection - GNU Project](https://gcc.gnu.org/)

[C++11 乱数 std::random 入門](http://vivi.dyndns.org/tech/cpp/random.html)

[mt19937 - cpprefjp C++日本語リファレンス](https://cpprefjp.github.io/reference/random/mt19937.html)

[C/C++で日本語を扱いたい - Qiita](https://qiita.com/Kogia_sima/items/80598029683175755efd)
