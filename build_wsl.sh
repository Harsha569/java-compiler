#!/usr/bin/env bash
# WSL Build Script for Java Parser
# Run this script in WSL to install dependencies, regenerate parser, and build

set -e  # Exit on any error

echo "========================================"
echo "Java Parser - WSL Build Script"
echo "========================================"
echo ""

# Step 1: Install dependencies
echo "[1/6] Installing dependencies (bison, flex, gcc, dos2unix)..."
sudo apt update
sudo apt install -y build-essential bison flex libfl-dev dos2unix

echo ""
echo "[2/6] Checking installed versions..."
bison --version | head -n1
flex --version | head -n1
gcc --version | head -n1

# Step 3: Navigate to project directory
echo ""
echo "[3/6] Setting up project directory..."
PROJECT_DIR="$HOME/java-compiler"

# If running from Windows mount, copy to WSL home for better performance
if [[ "$PWD" == /mnt/* ]]; then
    echo "Detected Windows mount. Copying project to WSL home: $PROJECT_DIR"
    mkdir -p "$PROJECT_DIR"
    rsync -av --exclude='*.exe' --exclude='*.class' --exclude='.git' "$PWD/" "$PROJECT_DIR/"
    cd "$PROJECT_DIR"
else
    PROJECT_DIR="$PWD"
    echo "Already in WSL filesystem: $PROJECT_DIR"
fi

# Step 4: Normalize line endings
echo ""
echo "[4/6] Normalizing line endings (CRLF -> LF)..."
dos2unix *.y *.l *.java 2>/dev/null || true

# Step 5: Regenerate parser and scanner
echo ""
echo "[5/6] Regenerating parser and scanner from grammar..."
echo "  - Running bison on java.y..."
bison -d -o java.tab.c java.y

echo "  - Running flex on java.l..."
flex -o lex.yy.c java.l

# Step 6: Compile the parser
echo ""
echo "[6/6] Compiling parser executable..."
gcc -o java_parser java.tab.c lex.yy.c -lfl -w

echo ""
echo "========================================"
echo "✓ Build Complete!"
echo "========================================"
echo ""
echo "Parser executable: ./java_parser"
echo ""
echo "Run tests with:"
echo "  ./java_parser testcase_1.java"
echo "  ./java_parser testcase_2.java"
echo "  ./java_parser SimpleTest.java"
echo ""

# Optional: Run tests automatically
if [ "$1" == "--test" ] || [ "$1" == "-t" ]; then
    echo "Running tests..."
    echo ""
    
    for testfile in testcase_1.java testcase_2.java SimpleTest.java; do
        if [ -f "$testfile" ]; then
            echo "========================================"
            echo "Testing: $testfile"
            echo "========================================"
            ./java_parser "$testfile"
            echo ""
        fi
    done
fi
