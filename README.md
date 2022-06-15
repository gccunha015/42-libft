[42SP]: https://www.42sp.org.br/
[documentation]: https://github.com/gccunha015/42-libft/wiki
[valgrind]: https://valgrind.org/
[lldb]: https://lldb.llvm.org/
[gnl]: https://github.com/gccunha015/42-get_next_line
[ft_printf]: https://github.com/gccunha015/42-ft_printf

# Libft
## About
This project is a library of functions to be used in future projects of [42SP].

## Why
This project is part of the [42SP] curriculum required to become a Software Engineer. 

## What it contais
The implemented functions are described in the [documentation].

## How to install
### Prerequisites
The prerequisites are as follows with the respective versions used.

#### Operating System
- Ubuntu (20.04.4 LTS)

#### Tools
- git (2.25.1)
- clang (10.0.0-4ubuntu1)
- GNU Make (4.2.1)

### Installation
In your terminal, clone the repository.
```bash
git clone git@github.com:gccunha015/42-libft.git libft
```
Enter the directory cloned.
```bash
cd libft
```
There are some ways to build this project:
- Create basic static library:
```bash
make
```
- Include bonus functions
```bash
make bonus
```
- Include [gnl] function
```bash
make gnl
```
- Include [ft_printf] function
```bash
make printf
```

## How to use
Install it on your project folder, then create your project object files:
```bash
COMPILER COMPILER_FLAGS -Ilibft/include SOURCE_FILES
```
After creating the object files, link them into your project executable:
```bash
COMPILER COMPILER_FLAGS -o EXECUTABLE_NAME OBJECT_FILES -Llibft -lft
```

## Support tools
- [valgrind]
- [lldb]
