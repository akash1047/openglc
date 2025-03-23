# opengl-c

## Requirements
- git (optional to clone the source code or you can download the zip)
- cmake (>= 3.20)
- clang (Or any c compiler)
- Ninja (Because I am using ninja as generator)

## Steps to build and run

### Get the source code 

1. Download the zip from github and then unzip it.

OR

2. Use git to clone the repository

```pwsh
git clone https://github.com/akash1047/openglc.git
```

### Use cmake to generate build files 

First go inside project directory.

```pwsh
cd ./openglc
```

Create a directory called 'build'. (all the build artifacts will be saved here)
```pwsh
mkdir build
```

Do the cmake setup
```pwsh
cmake -S . -B build -G Ninja
```

Build the project
```pwsh
cmake --build build
```

Run the executable
```pwsh
./build/openglc
```
