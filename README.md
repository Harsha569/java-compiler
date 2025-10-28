# Java Compiler - Lexer and Parser

A Lex/Yacc (Flex/Bison) based compiler frontend for parsing Java programs with OOP features.

## Features

The parser supports:

- ✅ Classes and interfaces
- ✅ Class inheritance (`extends`)
- ✅ Interface implementation (`implements`)
- ✅ Constructors with visibility modifiers (public/private/protected)
- ✅ Fields and methods with modifiers
- ✅ Control flow: if/else, while, do-while, for, switch
- ✅ Expressions: arithmetic, logical, bitwise, relational
- ✅ Arrays and array access
- ✅ Object creation (`new`)
- ✅ Method invocation
- ✅ `this` and `super` keywords
- ✅ System.out.println/print

## Quick Start

### Using PowerShell Script (Easiest)

```powershell
cd C:\Users\admin\OneDrive\Desktop\Java-compiler

# Test all files
.\run.ps1

# Test specific file
.\run.ps1 test testcase_2.java

# Rebuild parser
.\run.ps1 rebuild

# Rebuild and test
.\run.ps1 rebuild-test
```

See `COMMANDS.md` for all available commands and manual options.

## Files

### Source Files

- `java.l` - Flex lexer specification (tokenizer)
- `java.y` - Bison parser specification (grammar)

### Generated Files (by Flex/Bison)

- `lex.yy.c` - Generated lexer C code
- `java.tab.c` - Generated parser C code
- `java.tab.h` - Generated parser header

### Test Files

- `testcase_1.java` - Basic class with main method
- `testcase_2.java` - OOP features (interface, inheritance, constructors)
- `SimpleTest.java` - Class with fields, constructors, loops, conditionals

### Build Scripts

- `build_wsl.sh` - Automated build script for WSL
- `rebuild.sh` - Quick rebuild script
- `WSL_BUILD_GUIDE.md` - Detailed WSL build instructions

## Building

### Prerequisites (WSL/Linux)

```bash
sudo apt update
sudo apt install -y build-essential bison flex libfl-dev dos2unix
```

### Quick Build

```bash
chmod +x build_wsl.sh
./build_wsl.sh --test
```

### Manual Build

```bash
# Generate parser and lexer
bison -d -o java.tab.c java.y
flex -o lex.yy.c java.l

# Compile
gcc -o java_parser java.tab.c lex.yy.c -lfl -w

# Test
./java_parser testcase_1.java
./java_parser testcase_2.java
./java_parser SimpleTest.java
```

## Usage

```bash
./java_parser <filename.java>
```

### Example Output

```
========================================
  Java Compiler - Parsing: testcase_2.java
========================================

  - Method signature: void print()
✓ Interface 'Printable' parsed
  - Field: int p
  - Constructor: Parent(...)
  - Method: int getP()
✓ Class 'Parent' parsed
  - Field: int c
  - Constructor: Child(...)
  - Method: void print()
  - Method: int sum()
  - Method: void main(...)
✓ Class 'Child' parsed

✓ Java program parsed successfully!

========================================
  ✓ COMPILATION SUCCESSFUL
========================================
```

## Grammar Notes

- 9 shift/reduce conflicts (acceptable - resolved by default shift action)
- Constructors require explicit visibility modifiers (public/private/protected)
- Package-private constructors not supported due to grammar ambiguity

## Development

To modify the grammar:

1. Edit `java.y` or `java.l`
2. Run `./rebuild.sh` or manually regenerate with bison/flex
3. Test with all test cases

## License

Educational project - free to use and modify.
