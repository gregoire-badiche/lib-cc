# Build
## On Linux
```sh
gcc * -o a.out
./a.out
```
or
```sh
cmake CMakeLists.txt
make
./a
```

## On Windows
```sh
gcc * -o a
.\a.exe
```
```sh
cmake CMakeLists.txt -G "MinGW Makefiles"
make
.\a.exe
```