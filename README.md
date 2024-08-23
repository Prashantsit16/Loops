# Loops
Aim:
To understand and demonstrate the use of loop constructs in C++, including for, while, and do-while loops. This involves writing code to execute repetitive tasks efficiently and observing how each loop type operates under various conditions.

Theory:
Loops are fundamental control structures in programming that allow code to be executed repeatedly based on certain conditions:

for loop: Best for iterating a known number of times. It includes initialization, condition-checking, and iteration expressions.
while loop: Executes a block of code as long as a specified condition remains true. It is used when the number of iterations is not known in advance.
do-while loop: Similar to while, but guarantees that the code block executes at least once before checking the condition.
These loops are crucial for performing repetitive tasks and managing control flow in programs.

Procedure:
Include Required Headers:

#include <iostream>
using namespace std;
Define Main Function:

syntax
int main() {
    // For loop
    cout << "For loop: Counting from 1 to 5:" << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // While loop
    int count = 1;
    cout << "While loop: Counting from 1 to 5:" << endl;
    while (count <= 5) {
        cout << count << " ";
        ++count;
    }
    cout << endl;

    // Do-while loop
    count = 1;
    cout << "Do-while loop: Counting from 1 to 5:" << endl;
    do {
        cout << count << " ";
        ++count;
    } while (count <= 5);
    cout << endl;

    return 0;
}
Compile and Run:
Compile the code using a C++ compiler and run the program. Observe the output for each loop type to see how they handle the repetition of tasks.

Conclusion:
Loops in C++ are essential for executing repetitive tasks efficiently. The for, while, and do-while loops each offer unique advantages depending on the scenario. By understanding and using these loops, programmers can create more flexible and powerful code. The examples effectively illustrate how different loops can be applied to achieve similar results in various ways.
