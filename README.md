# gpa-calculation: 
_Easy way to calulate your GPA for school_

<p align="center">
  <a href="#installation">Installation</a> •
  <a href="#usage">Usage</a> •
  <a href="#features">Features</a> •
  <a href="#customization">Customization</a> •
  <a href="#license">License</a>
</p> 

## Description
> gpa-calculation can be used to easliy calulate your GPA.

> No pencil required!

# Installation

1. Clone the repository:
```console
git clone https://github.com/Joint55internal/gpa-calculation.git
```
2. Navigate to gpa-calculation:
```console
cd gpa-calculation
```
<details id=0>
<summary><h3>Install gcc if you don't have yet</h3></summary>

# _Mac OS_
Install homebrew
```
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```
Install gcc
```
brew install gcc
```
# _Windows_
Download & Run setup-x86_64.exe from https://www.cygwin.com/install.html
```
jj
```

# _Linux_

Arch
```
sudo pacman -Syu
```
```
sudo pacman -S gcc
```
Debian
```
sudo apt update && upgrade
```
```
sudo apt install gcc
```
etc...

</details>

3. Compile the source code:

```console
gcc gpa.c -o gpa
```

# Usage
To calculate your GPA, execute the following command:
```console
./gpa
```
Example 
```
Enter your name: GPA
Hello, GPA
Enter Student ID: 123
Number of A+ grades: 5
Number of A grades: 5
Number of B grades: 0
Number of C grades: 0
Number of F grades: 0
=========================
Student Name: GPA
Student ID: 123
Number of courses: 10
Number of courses you've received Credit: 10
Your GPA (5): 4.50
Your GPA (4): 4.00
=========================
```
# Features

- It can claculate GPA
- Might need edit based on your school's policy/ rules. 

# Customization
- You can customize based on your needs

# License

- This project is licensed under the GPL Licence - See [LICENSE](/LICENSE) file for details.
- Copyright © 2023 Toshiki
