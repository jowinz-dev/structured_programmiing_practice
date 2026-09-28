# Structured Programming Practice Assignment
 ## Category 1 - Basic Output
* **Textbook Reference:** Deitel & Deitel, *C How to Program (9th Edition)*, Chapter 2, Section 2.2
* **Objective:** To master the fundamental use of the standard input/output library and display structured text on the console.
* **Concepts Used:**
  * "#include <stdio.h>" : The standard header file needed for input/output operations.
  * "main()" function: The starting execution point of every C program.
  * "printf()": The standard output function used to send character streams to the screen.
  * Escape Sequences: "\n" to move the cursor to a new line.
* **How it works:** The program executes chronologically from top to bottom inside the main function. It calls a series of "printf()" functions to print string literals, creating a clean, structured visual dashboard displaying student details on the terminal screen.
Use code with caution.

## Category 2 - Input - Process - Output
* **Textbook Reference:** Deitel & Deitel, *C How to Program (9th Edition)*, Chapter 2,exercise 2.16.
* **Objective:** To master capturing user keyboard inputs, performing fundamental arithmetic operations, and displaying the processed results on the console.
 * **Concepts Used:** Concepts Used in the CodeData Types: The code uses int for whole numbers and float for fractional decimal numbers.Standard Input/Output: It uses printf() to output text to the screen and scanf() to capture user keyboard input.Format Specifiers: It utilizes %d to handle integer values and %.2f to format decimals to two decimal places.Arithmetic Operators: It implements addition (+), subtraction (-), integer division (/), and the modulus/remainder operator (%).Sequence Control Structure: The program executes line-by-line in a strict top-to-bottom order without loops or branches.Inline Comments: It uses // to document and explain the purpose of individual lines of code
* **How it works:** The program runs through a clear four-step pipeline:[1. Declare Variables] ──> [2. Read User Input] ──> [3. Process Math] ──> [4. Print Results]
  
 * ## Category 3 - Decisions
 * **Textbook Reference:** Deitel & Deitel, *C How to Program (9th Edition)*,Chapter 2,exercise 2.29.
 * **Objective:** To master using conditional statements to control code execution flow based on true or false conditions.
 * **Concepts Used:** if statement,executes a block of code only if a specified condition evaluates to true.if...else statement,chooses between two different code execution paths based on a condition.Relational Operators: Symbols (>, <, ==, !=) used to compare values or variables.Logical Operators: Symbols (&& for AND, || for OR) used to combine multiple conditions.
 * **How it works:** The program evaluates an expression inside a decision structure. If the condition is true, the program branches off to run one specific set of code instructions; if it is false, it skips that code or jumps straight to an alternative path.
 
 * ## Category 4 - Basic_loops.
 * **Textbook Reference:** Deitel & Deitel, *C How to Program (9th Edition)*,Chapter 4,exercise 4.11.
  * **Objective:** To calculate all the multiples of 7 between 1 and 100 in c.
  * **How it works:**  The Loop,Iterates through numbers from 7 to 100, incrementing by 7 each step (num += 7) to isolate only valid multiples. Accumulation: Adds each valid multiple directly to a running sum variable during execution. Result Output then Prints the final aggregated total directly to the console. 
 
 ## Category 5 - Loops_with_calcculations.
* **Textbook Reference:** Deitel & Deitel, *C How to Program (9th Edition)*,Chapter 4,exercise 4.14.
 * **Objective:** To display the factorials of integers from 1 to 5  using the nested loop structure.
 * **How it works:** Outer Loop, Iterates through the numbers 1 to 5, tracking the current integer (i) whose factorial needs to be calculated. Inner Loop, Resets the factorial accumulator to 1 for each new number, then multiplies all integers from 1 up to i to compute the factorial value, Output Display: Prints the results in a clean, tab-separated table structure using formatted console output (printf).

   
 ## Category 6 - Loops _with_user_input.
 * **Textbook Reference:** Deitel & Deitel, *C How to Program (9th Edition)*,Chapter 3,exercise 3.18.
* **Objective:** To perform basic arithmetic operations on the integers input by the user find the sum, difference, quotient and the remainder in C
* **How it works:** User Input, Prompts the user to enter two integers (num1 and num2) via the console using scanf. Arithmetic Processing, Computes four distinct mathematical operations,[Sum] Adds the two numbers together,[Difference] Subtracts the second number from the first,[Quotient] Divides the first number by the second (stored as a float),[Remainder] Calculates the modulus (remainder) of the division, there after our Output Display, Formats and prints each calculated result to the console with descriptive labels.

   ## Category 7 - Loops_with_decisions
 * **Textbook Reference:** Deitel & Deitel, *C How to Program (9th Edition)*,Chapter 3,exercise 3.22.
* **Objective:** To track and summarize exams either a student passed or failed  for a class of 10 students.
 * **How it works:** Data Collection: Loops 10 times to collect individual student results (1 for pass, 2 for fail) using scanf.Conditional Evaluation: Increments either the passes or failures counter using an if-else statement based on the input code.Summary Output: Displays the final total counts of passing and failing students after the loop finishes.

    ## Category 8 - Iteration
 * **Textbook Reference:** Deitel & Deitel, *C How to Program (9th Edition)*,Chapter 3,exercise 3.16.
 * * **Objective:** To separate the pure sales revenue from the sales tax collected out of a store's total monthly intake, calculating and displaying individual figures for both state and county sales taxes.
 * **How it works:** Sentinel-Controlled Loop program, sets up a while loop controlled by total_collect. It repeatedly processes the monthly calculations until the user enters -1 to terminate the program. Since the total collected amount includes both a 4% state tax and a 5% county tax which is now (9% total tax), it extracts the original sales amount using: Sales=Total Collections/(1.00+0.04+0.05). Now Once the pure product sales value has been found, it now calculates the county tax of (5%) and state tax of (4%) individually by multiplying them by their respective rates. There after It formats and prints the results using printf rounded to two decimal places (%.2f) to represent dollar amounts cleanly without missing out any value.

   
[working link]:https://github.com/jowinz-dev/structured_programmiing_practice
