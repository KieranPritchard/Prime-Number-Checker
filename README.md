# Prime Number Checker

<div align="center">

<img alt="GitHub Created At" src="https://img.shields.io/github/created-at/KieranPritchard/Prime-Number-Checker">

<img alt="GitHub License" src="https://img.shields.io/github/license/KieranPritchard/Prime-Number-Checker">

<img alt="GitHub commit activity" src="https://img.shields.io/github/commit-activity/t/KieranPritchard/Prime-Number-Checker">

<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/KieranPritchard/Prime-Number-Checker">

<img alt="GitHub language count" src="https://img.shields.io/github/languages/count/KieranPritchard/Prime-Number-Checker">

<img alt="GitHub Repo stars" src="https://img.shields.io/github/stars/KieranPritchard/Prime-Number-Checker">

</div>

## Project Description

### Objective

To create a prime number program using C++ that can check for prime numbers and generate all prime numbers up to a specified range, as a way to practise C++ fundamentals.

### Technology and Tools
- **Language:** C++  
- **Tools:** Git, VS Code  
- **Support:** ChatGPT (debugging assistance)  

### Challenges Faced

While trying to get the `make_range_of_primes()` function to work, it would only output the input number instead of the prime sequence. The fix was to switch the output to the iterator variable.  
Another issue was creating rows of `=` as dividers for the UI, which required researching and finding a proper method that works.

### Outcome

The project successfully runs as an interactive console program. Users can:
- Check if a single number is prime  
- Generate a list of all prime numbers up to a chosen maximum  
- Quit at any time via the menu  

This project helped reinforce understanding of loops, conditionals, functions, and input/output in C++.  


## How to Use the Project

### 1. Clone the repository
```
git clone <REPO_URL>
cd <PROJECT_FOLDER>
```
### 2. Make the compile script executable
```
chmod +x compile.sh
```
### 3. Compile the program
* Use the provided script to compile the code:
```
./build.sh main.cpp
```
* This will generate an executable named main.exe.
* (If you prefer manual compilation:)
```
g++ main.cpp -o prime_checker
```
### 4. Run the program
```
./main.exe
```
### 5. Choose an option from the menu
* (1) Check if a number is prime
* (2) Generate all prime numbers up to a given number
* (3) Quit the program

## Licenses
License can be found in the root of the repository.
