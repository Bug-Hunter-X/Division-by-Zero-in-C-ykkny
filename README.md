# Division by Zero Bug in C

This repository demonstrates a common error in C programming: division by zero. The `bug.c` file contains the erroneous code.  The `bugSolution.c` file provides a corrected version that includes robust error handling.

**Bug:** The original code attempts to divide an integer by zero, which leads to undefined behavior and likely a program crash.

**Solution:** The solution involves checking the divisor before performing the division.  If the divisor is zero, an appropriate error message is displayed, and the program avoids the division operation, preventing the crash. 