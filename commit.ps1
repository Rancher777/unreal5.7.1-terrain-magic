# Git Commit Script for TerrainMagic Updates
# Run this script from PowerShell in the repository directory

Write-Host "TerrainMagic Git Commit Script"
Write-Host "================================"
Write-Host ""

# Check if we're in the right directory
if (-not (Test-Path ".git")) {
    Write-Host "[ERROR] Not in a git repository directory!"
    Write-Host "Please run this script from: D:\unreal\Road2Salvation\Tools\unreal5.7.1-terrain-magic"
    exit 1
}

# Try to find git
$gitExe = $null
$possiblePaths = @(
    "C:\Program Files\Git\cmd\git.exe",
    "C:\Program Files (x86)\Git\cmd\git.exe",
    "git"  # Try direct if in PATH
)

foreach ($path in $possiblePaths) {
    if ($path -eq "git") {
        try {
            $null = Get-Command git -ErrorAction Stop
            $gitExe = "git"
            break
        } catch {
            continue
        }
    } else {
        if (Test-Path $path) {
            $gitExe = $path
            break
        }
    }
}

if (-not $gitExe) {
    Write-Host "[ERROR] Git not found!"
    Write-Host ""
    Write-Host "Please either:"
    Write-Host "1. Install Git for Windows: https://git-scm.com/download/win"
    Write-Host "2. Use GitHub Desktop or VS Code to commit"
    Write-Host "3. See COMMIT_INSTRUCTIONS.md for manual steps"
    exit 1
}

Write-Host "[OK] Using Git: $gitExe"
Write-Host ""

# Check status
Write-Host "Checking git status..."
& $gitExe status --short
Write-Host ""

# Ask for confirmation
$response = Read-Host "Do you want to add all changes and commit? (Y/N)"
if ($response -ne "Y" -and $response -ne "y") {
    Write-Host "Cancelled."
    exit 0
}

# Add all changes
Write-Host ""
Write-Host "Adding all changes..."
& $gitExe add -A

# Commit with message
$commitMessage = "Update TerrainMagic for UE 5.7: World Partition support, local map selector, grayscale view, and Match Landscape Size fix"
Write-Host ""
Write-Host "Committing with message:"
Write-Host "  $commitMessage"
& $gitExe commit -m $commitMessage

if ($LASTEXITCODE -eq 0) {
    Write-Host ""
    Write-Host "[SUCCESS] Changes committed!"
    Write-Host ""
    $pushResponse = Read-Host "Do you want to push to remote? (Y/N)"
    if ($pushResponse -eq "Y" -or $pushResponse -eq "y") {
        Write-Host "Pushing to remote..."
        & $gitExe push
    }
} else {
    Write-Host ""
    Write-Host "[ERROR] Commit failed. Check the error messages above."
}

