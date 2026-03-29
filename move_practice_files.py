import os, subprocess
repo = 'c:/Users/makal/OneDrive/Dokumen/Practice/COMP - PRO'
os.chdir(repo)
for n in range(41, 53):
    src = os.path.join(repo, '00 - PRACTICE', '01 - kattis', f'practice{n}-kattis.cpp')
    dst = os.path.join(repo, f'practice{n}-kattis.cpp')
    if os.path.exists(src):
        subprocess.run(['git', 'mv', src, dst], check=True)
        subprocess.run(['git', 'commit', '-m', f'Move practice{n}-kattis.cpp to root'], check=True)
print('--- status ---')
print(subprocess.run(['git', 'status', '--short'], capture_output=True, text=True).stdout)
print('--- log ---')
print(subprocess.run(['git', 'log', '--oneline', '-n', '20'], capture_output=True, text=True).stdout)
