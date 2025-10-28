# Java Parser - PowerShell Helper Script
# Usage: .\run.ps1 [command] [file]

param(
    [string]$Command = "test-all",
    [string]$File = ""
)

$ProjectDir = "C:\Users\admin\OneDrive\Desktop\Java-compiler"
$WSLProjectDir = "~/java-compiler"

function Test-Parser {
    param([string]$JavaFile)
    Write-Host "`n========================================" -ForegroundColor Cyan
    Write-Host "Testing: $JavaFile" -ForegroundColor Cyan
    Write-Host "========================================`n" -ForegroundColor Cyan
    wsl bash -c "cd $WSLProjectDir && ./java_parser $JavaFile"
}

function Rebuild-Parser {
    Write-Host "`nRebuilding parser..." -ForegroundColor Yellow
    wsl bash -c "cd $WSLProjectDir && cp /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/java.y . && cp /mnt/c/Users/admin/OneDrive/Desktop/Java-compiler/java.l . && bison -d -o java.tab.c java.y && flex -o lex.yy.c java.l && gcc -o java_parser java.tab.c lex.yy.c -lfl -w"
    if ($LASTEXITCODE -eq 0) {
        Write-Host "`n✓ Build successful!" -ForegroundColor Green
    } else {
        Write-Host "`n✗ Build failed!" -ForegroundColor Red
    }
}

function Test-AllFiles {
    $files = @("testcase_1.java", "testcase_2.java", "SimpleTest.java")
    foreach ($file in $files) {
        Test-Parser $file
    }
}

# Main command routing
switch ($Command) {
    "test" {
        if ($File -eq "") {
            Write-Host "Error: Please specify a Java file" -ForegroundColor Red
            Write-Host "Usage: .\run.ps1 test yourfile.java"
            exit 1
        }
        Test-Parser $File
    }
    "test-all" {
        Test-AllFiles
    }
    "rebuild" {
        Rebuild-Parser
    }
    "rebuild-test" {
        Rebuild-Parser
        if ($LASTEXITCODE -eq 0) {
            Test-AllFiles
        }
    }
    "help" {
        Write-Host "`nJava Parser Commands:" -ForegroundColor Cyan
        Write-Host "  .\run.ps1 test <file>     - Test a specific Java file"
        Write-Host "  .\run.ps1 test-all        - Test all example files (default)"
        Write-Host "  .\run.ps1 rebuild         - Rebuild the parser"
        Write-Host "  .\run.ps1 rebuild-test    - Rebuild and test all files"
        Write-Host "  .\run.ps1 help            - Show this help"
        Write-Host "`nExamples:"
        Write-Host "  .\run.ps1"
        Write-Host "  .\run.ps1 test testcase_2.java"
        Write-Host "  .\run.ps1 rebuild-test`n"
    }
    default {
        Write-Host "Unknown command: $Command" -ForegroundColor Red
        Write-Host "Run '.\run.ps1 help' for available commands"
        exit 1
    }
}
