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
Output:
1.Square Pattern
![Screenshot 2024-09-05 154243](https://github.com/user-attachments/assets/8cc112c9-fbd5-4674-b3ae-47d81f1462b4)

2.Print hello world
![Screenshot 2024-09-05 154250](https://github.com/user-attachments/assets/680a29d2-e8ec-4848-8827-5fb8da36d0dd)

3.Multiplication table
![Screenshot 2024-09-05 154256](https://github.com/user-attachments/assets/d2d43f05-70a2-4874-99cc-ee7119c5a55c)

4.Pattern
![Screenshot 2024-09-05 154303](https://github.com/user-attachments/assets/e83c4602-d363-49f9-86b6-54740018b2ef)

5.Pyramid pattern
![Screenshot 2024-09-05 154310](https://github.com/user-attachments/assets/3b7906af-7bb7-4e86-9cb9-b966c9cd56f0)

6.Numbers Printing
![Screenshot 2024-09-05 154317](https://github.com/user-attachments/assets/171d2360-85a9-415c-8288-5d1a746ae3c3)

7.Sum of digits
![Screenshot 2024-09-05 154325](https://github.com/user-attachments/assets/df376504-8ae0-44b0-aab2-9c4365e600bd)

8.Sum of elements of matrix
![Screenshot 2024-09-05 154333](https://github.com/user-attachments/assets/b79a04c7-6f5f-44d6-8198-23b8d523e12f)

Conclusion:
Loops in C++ are essential for executing repetitive tasks efficiently. The for, while, and do-while loops each offer unique advantages depending on the scenario. By understanding and using these loops, programmers can create more flexible and powerful code. The examples effectively illustrate how different loops can be applied to achieve similar results in various ways.
