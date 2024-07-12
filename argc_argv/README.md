# holbertonschool-low_level_programming

## argc_argv

### 0. It ain't what they call you, it's what you answer to

This project includes a program that prints its name, followed by a new line. If the program is renamed, it will print the new name without needing recompilation.

#### Files
- **0-whatsmyname.c**: Contains the main function that prints the program's name.
- **main.h**: Header file with function prototypes.
- **README.md**: Project documentation.

### 1. Silence is argument carried out by other means

This program prints the number of arguments passed into it.

#### Files
- **1-args.c**: Contains the main function that prints the number of arguments.

### 2. The best argument against democracy is a five-minute conversation with the average voter

This program prints all arguments it receives.

#### Files
- **2-args.c**: Contains the main function that prints all arguments.

### 3. Neither irony nor sarcasm is argument

This program multiplies two numbers.

#### Files
- **3-mul.c**: Contains the main function that multiplies two numbers.

### 4. To infinity and beyond

This program adds positive numbers.

#### Files
- **4-add.c**: Contains the main function that adds positive numbers.

### Compilation and Execution
To compile and run the programs, use the following commands:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
./mynameis
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
./nargs
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
./args
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
./mul
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
./add
