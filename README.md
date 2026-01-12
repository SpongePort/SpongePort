# SpongePort
*Based on [previous attempts](https://github.com/AbsurdBartholomew/supersponge-pc) by Absurd Bartholomew*

A work-in-progress port of the PS1 source code of SpongeBob SquarePants: SuperSponge to PC

This repository attempts to reduce failure points by recreating the Make environment from scratch.

## Building

### Windows

Install MSYS2 and make sure to clone the repository recursively (``git clone --recursive``).

Open mingw64 and run this command to install dependencies:

```
pacman -Syu mingw-w64-x86_64-gcc mingw-w64-x86_64-cmake mingw-w64-x86_64-SDL2 mingw-w64-x86_64-openal
```

Simply run ``make`` to build everything.

### Linux
Currently a work-in-progress due to the fact PsyCross doesn't compile on Ubuntu just yet - working on it!