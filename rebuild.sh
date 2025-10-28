#!/usr/bin/env bash
# Quick rebuild script - run this in WSL after grammar changes

cd ~/java-compiler || cd /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler

echo "Regenerating parser..."
bison -d -o java.tab.c java.y
flex -o lex.yy.c java.l

echo "Compiling..."
gcc -o java_parser java.tab.c lex.yy.c -lfl -w

echo ""
echo "Testing testcase_2.java..."
./java_parser testcase_2.java
