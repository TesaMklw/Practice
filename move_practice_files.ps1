$repo = 'C:\Users\makal\OneDrive\Dokumen\Practice\COMP - PRO'
Set-Location $repo
$files = 41..52
foreach ($n in $files) {
    $src = Join-Path $repo "00 - PRACTICE\01 - kattis\practice$n-kattis.cpp"
    $dst = Join-Path $repo "practice$n-kattis.cpp"
    if (Test-Path $src) {
        git mv -f "$src" "$dst"
        git commit -m "Move practice$n-kattis.cpp to root"
    }
}
git status --short
git log --oneline -n 15
