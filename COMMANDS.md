# Quick Command Reference (PowerShell)

All commands are ready to run from PowerShell in the project directory:

```powershell
cd C:\Users\admin\OneDrive\Desktop\Java-compiler
```

## 🚀 Easy Way - Using the PowerShell Script

### Test All Files

```powershell
.\run.ps1
# or
.\run.ps1 test-all
```

### Test Specific File

```powershell
.\run.ps1 test testcase_2.java
```

### Rebuild Parser

```powershell
.\run.ps1 rebuild
```

### Rebuild and Test Everything

```powershell
.\run.ps1 rebuild-test
```

### Show Help

```powershell
.\run.ps1 help
```

---

## 📝 Manual Commands (If you prefer typing them out)

## Running the Parser

### Test Individual Files

```powershell
# Test case 1 - Basic Java class
wsl bash -c "cd ~/java-compiler && ./java_parser testcase_1.java"

# Test case 2 - OOP features (interface, extends, implements)
wsl bash -c "cd ~/java-compiler && ./java_parser testcase_2.java"

# Simple test - Class with constructors and loops
wsl bash -c "cd ~/java-compiler && ./java_parser SimpleTest.java"
```

### Test All Files at Once

```powershell
wsl bash -c "cd ~/java-compiler && for file in testcase_1.java testcase_2.java SimpleTest.java; do echo '========================================' && echo 'Testing:' \$file && echo '========================================' && ./java_parser \$file && echo ''; done"
```

### Test Your Own Java File

```powershell
# Copy your file to WSL and test
wsl bash -c "cp /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/yourfile.java ~/java-compiler/ && cd ~/java-compiler && ./java_parser yourfile.java"
```

## Building/Rebuilding the Parser

### Full Build (First Time Setup)

```powershell
# Run the automated build script
wsl bash -c "cd /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler && chmod +x build_wsl.sh && ./build_wsl.sh --test"
```

### Quick Rebuild (After Editing java.y or java.l)

```powershell
# Copy updated files and rebuild
wsl bash -c "cd ~/java-compiler && cp /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/java.y . && cp /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/java.l . && bison -d -o java.tab.c java.y && flex -o lex.yy.c java.l && gcc -o java_parser java.tab.c lex.yy.c -lfl -w"
```

### Using the Rebuild Script

```powershell
wsl bash -c "cd ~/java-compiler && cp /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/*.y . && cp /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/*.l . && chmod +x rebuild.sh && ./rebuild.sh"
```

## Creating and Testing New Java Files

### Create a New Test File

```powershell
# Create using PowerShell
@"
class MyTest {
    public static void main(String[] args) {
        System.out.println("Hello");
    }
}
"@ | Out-File -FilePath "mytest.java" -Encoding UTF8
```

### Test Your New File

```powershell
# Copy to WSL and test
wsl bash -c "cp /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/mytest.java ~/java-compiler/ && cd ~/java-compiler && ./java_parser mytest.java"
```

## Checking Parser Output

### Check if File Parses Successfully

```powershell
wsl bash -c "cd ~/java-compiler && ./java_parser testcase_1.java"
# Look for "✓ COMPILATION SUCCESSFUL" at the end
```

### Save Output to File

```powershell
wsl bash -c "cd ~/java-compiler && ./java_parser testcase_1.java" > output.txt 2>&1
Get-Content output.txt
```

### Check Multiple Files and Save Results

```powershell
wsl bash -c "cd ~/java-compiler && for file in *.java; do echo '=== Testing' \$file '===' && ./java_parser \$file; done" > all_results.txt 2>&1
Get-Content all_results.txt
```

## Common Issues & Solutions

### Parser Not Found

```powershell
# Rebuild the parser
wsl bash -c "cd ~/java-compiler && gcc -o java_parser java.tab.c lex.yy.c -lfl -w"
```

### Grammar Changed But Behavior Didn't Change

```powershell
# Must regenerate from .y/.l files and recompile
wsl bash -c "cd ~/java-compiler && cp /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/java.y . && bison -d -o java.tab.c java.y && gcc -o java_parser java.tab.c lex.yy.c -lfl -w"
```

### Check Bison Warnings/Conflicts

```powershell
wsl bash -c "cd ~/java-compiler && cp /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/java.y . && bison -d -o java.tab.c java.y 2>&1 | head -20"
```

### View Parser Executable Info

```powershell
wsl bash -c "cd ~/java-compiler && ls -lh java_parser && file java_parser"
```

## Quick Development Workflow (PowerShell)

### 1. Edit Grammar Files (Use Any Editor)

```powershell
# Edit in VS Code, Notepad++, or any editor
code java.y
# Or
notepad java.y
```

### 2. Rebuild Parser

```powershell
# Quick rebuild command
wsl bash -c "cd ~/java-compiler && cp /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/java.y . && cp /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/java.l . && bison -d -o java.tab.c java.y && flex -o lex.yy.c java.l && gcc -o java_parser java.tab.c lex.yy.c -lfl -w"
```

### 3. Test Changes

```powershell
# Test a specific file
wsl bash -c "cd ~/java-compiler && ./java_parser testcase_2.java"

# Or test all
wsl bash -c "cd ~/java-compiler && for file in *.java; do echo '--- Testing' \$file '---' && ./java_parser \$file; done"
```

### 4. Repeat Until Working!

## One-Command Full Rebuild and Test

```powershell
# Edit-Rebuild-Test in one command
wsl bash -c "cd ~/java-compiler && cp /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/*.y . && cp /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/*.l . && bison -d -o java.tab.c java.y && flex -o lex.yy.c java.l && gcc -o java_parser java.tab.c lex.yy.c -lfl -w && echo '' && echo '=== Testing testcase_2.java ===' && ./java_parser testcase_2.java"
```
