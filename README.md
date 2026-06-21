## C Programs

Collection of small, focused C programs written for practicing core C syntax and problem‑solving. Each file demonstrates a single concept such as conditionals, loops, input validation, and basic arithmetic.

### Project Structure

```
c-programs/
├── src/                    # All C source files
│   ├── largest-of-three.c
│   ├── leap-year-check.c
│   ├── sum-of-digits.c
│   ├── student-marks-calculator.c
│   ├── snake-water-gun-game.c
│   ├── reverse-number.c
│   └── prime-number-check.c
├── README.md
├── LICENSE
├── .gitignore
└── .gitattributes
```

### Programs Included

All source files are located in the `src/` directory:

- **`src/largest-of-three.c`**: Reads three integers and prints the largest number.
- **`src/leap-year-check.c`**: Checks whether a given year is a leap year using the standard leap year rules.
- **`src/sum-of-digits.c`**: Calculates the sum of the digits of an integer.
- **`src/student-marks-calculator.c`**: Accepts roll number and marks for three subjects, validates input, calculates total and percentage, and prints pass/fail status.
- **`src/snake-water-gun-game.c`**: Simple console game (similar to rock–paper–scissors) implemented using conditions and random choices.
- **`src/reverse-number.c`**: Reverses the digits of an integer.
- **`src/prime-number-check.c`**: Determines whether a given integer is prime.

### Getting Started

- **Prerequisites**
  - A C compiler (for example `gcc` from MinGW, WSL, or any standard toolchain).
  - A terminal or command prompt.

- **Cloning the repository**

```bash
git clone https://github.com/yasirrajput4/c-programs.git
cd c-programs
```

### Building and Running

Compile any program using your C compiler. For example, with `gcc`:

```bash
gcc src/sum-of-digits.c -o sum-of-digits
./sum-of-digits        # on Linux/macOS
./sum-of-digits.exe      # on Windows
```

Replace `src/sum-of-digits.c` and the output name with any of the other files listed above (for example `src/prime-number-check.c`, `src/largest-of-three.c`, etc.).

Most programs are interactive and will prompt you for input in the terminal (such as numbers, year, or game choices). Follow the on‑screen instructions and review the output to understand how each program behaves.

### Purpose of This Repository

- **Practice**: Strengthen understanding of basic C constructs.
- **Reference**: Keep a clean, minimal set of sample programs to revisit later.
- **Experimentation**: Safely modify and extend each program to explore new ideas (for example, adding more validation, menus, or additional features).

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---
