# WSL Build Instructions for Java Parser

## Quick Start

### Step 1: Copy the build script to WSL

From PowerShell, run:

```powershell
wsl dos2unix /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/build_wsl.sh
```

### Step 2: Run the build script

Open WSL (Ubuntu) and run:

```bash
cd /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler
chmod +x build_wsl.sh
./build_wsl.sh
```

Or run with automatic testing:

```bash
./build_wsl.sh --test
```

---

## Manual Step-by-Step Instructions

If you prefer to run commands manually, follow these steps in WSL:

### 1. Install Dependencies

```bash
sudo apt update
sudo apt install -y build-essential bison flex libfl-dev dos2unix
```

Verify installation:

```bash
bison --version
flex --version
gcc --version
```

### 2. Navigate to Project

```bash
cd /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler
```

**Optional but recommended** - Copy to WSL home for better performance:

```bash
mkdir -p ~/java-compiler
rsync -av --exclude='*.exe' --exclude='*.class' /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/ ~/java-compiler/
cd ~/java-compiler
```

### 3. Fix Line Endings

```bash
dos2unix *.y *.l *.java
```

### 4. Regenerate Parser from Grammar

```bash
# Generate parser C code from java.y
bison -d -o java.tab.c java.y

# Generate scanner C code from java.l
flex -o lex.yy.c java.l
```

### 5. Compile Parser Executable

```bash
gcc -o java_parser java.tab.c lex.yy.c -lfl -w
```

If you get linking errors with `-lfl`, try without it:

```bash
gcc -o java_parser java.tab.c lex.yy.c -w
```

### 6. Test the Parser

```bash
./java_parser testcase_1.java
./java_parser testcase_2.java
./java_parser SimpleTest.java
```

---

## Expected Output for testcase_2.java

After successful rebuild, you should see:

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

---

## Troubleshooting

### "dos2unix: command not found"

Install it:

```bash
sudo apt install dos2unix
```

### "bison: command not found" or "flex: command not found"

Run the installation command again:

```bash
sudo apt update
sudo apt install -y build-essential bison flex libfl-dev
```

### Linking error with `-lfl`

The flex library might not be needed. Recompile without it:

```bash
gcc -o java_parser java.tab.c lex.yy.c -w
```

### Permission denied when running script

Make it executable:

```bash
chmod +x build_wsl.sh
```

### Slow performance when running from /mnt/c/

WSL file access to Windows drives is slower. Copy to WSL home:

```bash
mkdir -p ~/java-compiler
cp -r /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/* ~/java-compiler/
cd ~/java-compiler
```

---

## Copy Files Back to Windows (Optional)

After building in WSL, if you want to copy the built parser back to Windows:

```bash
# Copy the executable back
cp java_parser /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/

# Copy updated C files (if you want to keep them in sync)
cp java.tab.c java.tab.h lex.yy.c /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/
```

Then from PowerShell, you can run:

```powershell
wsl ./java_parser testcase_2.java
```

---

## Quick Reference Commands

| Task             | Command                                                             |
| ---------------- | ------------------------------------------------------------------- |
| Install tools    | `sudo apt install -y build-essential bison flex libfl-dev dos2unix` |
| Fix line endings | `dos2unix *.y *.l *.java`                                           |
| Generate parser  | `bison -d -o java.tab.c java.y`                                     |
| Generate scanner | `flex -o lex.yy.c java.l`                                           |
| Compile          | `gcc -o java_parser java.tab.c lex.yy.c -lfl -w`                    |
| Test             | `./java_parser testcase_2.java`                                     |
| Run from Windows | `wsl ./java_parser testcase_2.java`                                 |
