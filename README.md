# GrepUtility

GrepUtility is a simple command-line utility written in C, that searches files for lines matching a regular expression pattern and prints them to the console.

## Build

To build the GrepUtility, please make sure you have the following dependencies installed:

- CMake 3.10 or higher
- GCC or Clang compiler
- PCRE or Regex libraries

### Makefile Targets

- `all`: build the program
- `build`: build the program
- `rebuild`: clean and rebuild the program
- `install`: install the program
- `unistall`: remove the installed program
- `clean`: remove build and library files
- `cppcheck`: run cppcheck on the source code
- `clang-format`: format the source code using clang-format

Makefile goals description:

- `all`: it's the default target, which builds the program.
- `build`: it's a target that builds the program.
- `rebuild`: it's a target that cleans the previous build, builds and installs the program.
- `install`: it's a target that installs the program in the system.
- `unistall`: it's a target that uninstalls the program from the system.
- `clean`: it's a target that removes all the build

To build the utility, run the following commands:

```sh
make all
cd build
```

## Usage

To use GrepUtility, run the following command:

```sh
GrepUtility [options] pattern [file_name]
```

Here are the available options:

- `-e pattern`: Use `pattern` as the search pattern.
- `-i`: Ignore case distinctions in both the pattern and the input files.
- `-v`: Invert the sense of matching, to select non-matching lines.
- `-c`: Only output the count of matching lines.
- `-l`: Only output the names of files containing at least one matching line.
- `-n`: Prefix each line of output with its 1-based line number within its input file.
- `-h`: Never print filename headers (i.e. file names) with output lines.
- `-s`: Suppress error messages about nonexistent or unreadable files.
- `-f file`: Obtain patterns from file, one per line.

## Dependencies

- CMake 3.10 or higher
- GCC or Clang compiler
- PCRE or Regex libraries

## Development

The source code, header files, and build files are located in the `model/` directory. The code follows the principles of structured programming and avoids code duplication.

Integration tests cover all flag variants and input values, based on a comparison with the behavior of real Bash utilities.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details. 