<h1 align="center">
  <br>
    <img src="assets/logo.png" width="322" height="220">
  <br><br>
  <i>bin-unbin me</i>
</h1>
<p align="center">A project to convert binaries to text, and text to binary</p>
<!-- #region Shields -->
<p align="center">
    <a href="https://github.com/nico-castell/bin-unbin/commits"><img alt="Commits since latest release" src="https://img.shields.io/github/commits-since/nico-castell/bin-unbin/latest?label=Commits%20since%20last%20release&color=informational&logo=git&logoColor=white&style=flat-square"></a>
    <a href="https://github.com/nico-castell/bin-unbin/releases"><img alt="Release" src="https://img.shields.io/github/v/release/nico-castell/bin-unbin?color=informational&label=Release&logo=GitHub&logoColor=white&style=flat-square"></a>
    <a href="LICENSE"><img alt="Licene" src="https://img.shields.io/github/license/nico-castell/bin-unbin?color=informational&label=License&logo=Open%20Source%20Initiative&logoColor=white&style=flat-square"></a>
    <a href="https://github.com/nico-castell/bin-unbin"><img alt="Lines of code" src="https://img.shields.io/tokei/lines/github/nico-castell/bin-unbin?label=Lines%20of%20code&color=informational&logo=C%2B%2B&logoColor=white&style=flat-square"></a>
</p>
<!-- #endregion -->

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

This project uses *CMake* to configure the build environment, to install the binaries you should do the following:

- If you're on Linux 🐧 you should execute the following commands:
  ```
  $ cd /path/to/cloned_repo
  $ cmake -S . -B build -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr
  $ sudo cmake --build build --target install
  ```

- If you're on Windows 🏁 you should execute the following commands **as administrator**:
  ```
  > cd \path\to\cloned_repo
  > cmake -S . -B build
  > cmake --build build --target INSTALL --config Release
  ```

You can also check the latest [release](https://github.com/nico-castell/bin-unbin/releases) for binaries in compressed archives, if you don't want to (or can't) compile the programs yourself.

## License

This repository is available under the [MIT License](LICENSE).

> 01100110 01101001 01101110 01100100 00100000 01100001 00100000 01101000 01101111 01100010 01100010 01111001 00100000 01100110 01101111 01110010 00100000 01100111 01101111 01100100 00100111 01110011 00100000 01110011 01100001 01101011 01100101  
> Some meme
