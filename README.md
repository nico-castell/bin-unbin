<h1 align="center">
	<br>
		<img src="assets/logo.png" width="322" height="220">
	<br><br>
	<i>bin-unbin</i>
</h1>
<p align="center">A project to convert binaries to text, and text to binary</p>
<p align="center">
	<a href="https://github.com/nico-castell/bin-unbin/commits"><img alt="Commits since latest release" src="https://img.shields.io/github/commits-since/nico-castell/bin-unbin/latest?label=Commits%20since%20last%20release&color=informational&logo=git&logoColor=white&style=flat-square"></a>
	<a href="https://github.com/nico-castell/bin-unbin/releases"><img alt="Release" src="https://img.shields.io/github/v/release/nico-castell/bin-unbin?color=informational&label=Release&logo=GitHub&logoColor=white&style=flat-square"></a>
	<a href="LICENSE"><img alt="Licene" src="https://img.shields.io/github/license/nico-castell/bin-unbin?color=informational&label=License&logo=Open%20Source%20Initiative&logoColor=white&style=flat-square"></a>
	<a href="https://github.com/nico-castell/bin-unbin"><img alt="Lines of code" src="https://img.shields.io/tokei/lines/github/nico-castell/bin-unbin?label=Lines%20of%20code&color=informational&logo=C%2B%2B&logoColor=white&style=flat-square"></a>
	<a href="https://gihtub.com/nico-castell/bin-unbin/actions/workflows/codeql-analyze.yml"><img alt="CodeQL" src="https://img.shields.io/github/workflow/status/nico-castell/bin-unbin/CodeQL?label=CodeQL&logo=GitHub%20Actions&logoColor=white&style=flat-square"></a>
</p>

## Binme
Usage:

```bash
$ ./binme 'Some phrase'
01010011 01101111 01101101 01100101 00100000 01110000 01101000 01110010 01100001 01110011 01100101
```

## Unbinme
Usage:

```bash
$ ./unbinme 01010011 01101111 01101101 01100101 00100000 01110000 01101000 01110010 01100001 01110011 01100101
Some phrase
```

## How to build and install the project

**Prerequisites:** CMake, and a compiler for C/C++, ideally also an IDE.

This project uses *CMake* to configure the build environment, to install the binaries you should do
the following:

- If you're on Linux 🐧 you should execute the following commands:
	```
	$ cd /path/to/cloned_repo
	$ cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
	$ sudo cmake --build build --target install
	```

- If you're on Windows 🏁 you should execute the following commands **as administrator**:
	```
	> cd \path\to\cloned_repo
	> cmake -S . -B build
	> cmake --build build --target INSTALL --config Release
	```

You can also check the latest [release](https://github.com/nico-castell/bin-unbin/releases/latest)
for binaries in compressed archives, if you don't want to (or can't) compile the programs yourself.

## How to package the project

This project uses [*CPack*](https://cmake.org/cmake/help/latest/module/CPack.html) to create
packages and installers. This might be useful if you're on Linux and you want to install the project
using your package manager.

- If you're on a debian-based Linux distro, execute these commands:
	```
	$ cd /path/to/cloned_repo
	$ cmake -S . -B build -DCMAKE_BUILD_TYPE=Release -DCPACK_BINARY_DEB=ON
	$ cmake --build build --target package
	$ sudo apt install ./build/*.deb
	```

- If you're on a RHEL-based Linux distro, execute these commands:
	```
	$ cd /path/to/cloned_repo
	$ cmake -S . -B build -DCMAKE_BUILD_TYPE=Release -DCPACK_BINARY_RPM=ON
	$ cmake --build build --target package
	$ sudo dnf install ./build/*.rpm
	```

- If you're on Windows and you want a GUI installer, you'll also need
	[WiX Tools](https://wixtoolset.org/releases/) installed, and then you execute these PowerShell
	commands:
	```
	> cd \path\to\cloned_repo
	> cmake -S . -B build -DCPACK_GENERATOR=WIX
	> cmake --build build --target PACKAGE --config Release
	> .\build\*.msi
	```

## License

This repository is available under the [MIT License](LICENSE).

> 01100110 01101001 01101110 01100100 00100000 01100001 00100000 01101000 01101111 01100010 01100010
> 01111001 00100000 01100110 01101111 01110010 00100000 01100111 01101111 01100100 00100111 01110011
> 00100000 01110011 01100001 01101011 01100101<br>
> Some meme
