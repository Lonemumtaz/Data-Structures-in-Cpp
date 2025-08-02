#include <iostream>
#include <vector>
using namespace std;

// Method 1: Iterative approach
long long factorialIterative(int n)
{
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers!" << endl;
        return -1;
    }

    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

// Method 2: Recursive approach
long long factorialRecursive(int n)
{
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers!" << endl;
        return -1;
    }

    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorialRecursive(n - 1);
}

// Method 3: Using arrays to store large factorials (for display purposes)
void factorialWithSteps(int n)
{
    cout << "\n=== Factorial Calculation with Steps ===" << endl;

    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers!" << endl;
        return;
    }

    if (n == 0)
    {
        cout << "0! = 1 (by definition)" << endl;
        return;
    }

    long long result = 1;
    cout << n << "! = ";

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << i;
        }
        else
        {
            cout << " × " << i;
        }
        result *= i;
    }

    cout << " = " << result << endl;
}

// Method 4: Factorial using while loop
long long factorialWhileLoop(int n)
{
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers!" << endl;
        return -1;
    }

    long long result = 1;
    int i = 1;

    while (i <= n)
    {
        result *= i;
        i++;
    }

    return result;
}

// Method 5: Check if a number is factorial of some integer
bool isFactorial(long long num)
{
    if (num <= 0)
        return false;
    if (num == 1)
        return true; // 0! = 1! = 1

    long long factorial = 1;
    int i = 1;

    while (factorial < num)
    {
        factorial *= i;
        i++;
    }

    return factorial == num;
}

// Method 6: Find which number's factorial is the given number
int findFactorialBase(long long num)
{
    if (num <= 0)
        return -1;
    if (num == 1)
        return 0; // Could be 0! or 1!, returning 0

    long long factorial = 1;
    int i = 1;

    while (factorial < num)
    {
        factorial *= i;
        i++;
    }

    if (factorial == num)
    {
        return i - 1;
    }
    return -1; // Not a factorial
}

// Method 7: Calculate factorial table up to n
void factorialTable(int n)
{
    cout << "\n=== Factorial Table ===" << endl;
    cout << "n\tn!" << endl;
    cout << "---------------------" << endl;

    for (int i = 0; i <= n; i++)
    {
        cout << i << "\t" << factorialIterative(i) << endl;
    }
}

// Method 8: Recursive factorial with trace
long long factorialRecursiveTrace(int n, int depth = 0)
{
    // Print indentation based on recursion depth
    for (int i = 0; i < depth; i++)
    {
        cout << "  ";
    }

    cout << "factorial(" << n << ")";

    if (n == 0 || n == 1)
    {
        cout << " = 1 (base case)" << endl;
        return 1;
    }

    cout << " = " << n << " × factorial(" << (n - 1) << ")" << endl;

    long long result = n * factorialRecursiveTrace(n - 1, depth + 1);

    // Print result on return
    for (int i = 0; i < depth; i++)
    {
        cout << "  ";
    }
    cout << "factorial(" << n << ") returns " << result << endl;

    return result;
}

int main()
{
    int choice, n;
    long long number;

    cout << "=== FACTORIAL PROGRAM ===" << endl;
    cout << "1. Calculate Factorial (Iterative)" << endl;
    cout << "2. Calculate Factorial (Recursive)" << endl;
    cout << "3. Calculate Factorial (While Loop)" << endl;
    cout << "4. Factorial with Step-by-Step Calculation" << endl;
    cout << "5. Factorial with Recursive Trace" << endl;
    cout << "6. Generate Factorial Table" << endl;
    cout << "7. Check if a number is a factorial" << endl;
    cout << "8. Find factorial base of a number" << endl;
    cout << "9. Compare All Methods" << endl;
    cout << "Enter your choice (1-9): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter a number: ";
        cin >> n;
        cout << n << "! = " << factorialIterative(n) << endl;
        break;

    case 2:
        cout << "Enter a number: ";
        cin >> n;
        cout << n << "! = " << factorialRecursive(n) << endl;
        break;

    case 3:
        cout << "Enter a number: ";
        cin >> n;
        cout << n << "! = " << factorialWhileLoop(n) << endl;
        break;

    case 4:
        cout << "Enter a number: ";
        cin >> n;
        factorialWithSteps(n);
        break;

    case 5:
        cout << "Enter a number: ";
        cin >> n;
        cout << "\n=== Recursive Factorial Trace ===" << endl;
        long long result = factorialRecursiveTrace(n);
        cout << "\nFinal result: " << n << "! = " << result << endl;
        break;

    case 6:
        cout << "Enter maximum number for factorial table: ";
        cin >> n;
        if (n > 20)
        {
            cout << "Note: Large factorials may overflow. Consider n <= 20" << endl;
        }
        factorialTable(n);
        break;

    case 7:
        cout << "Enter a number to check: ";
        cin >> number;
        if (isFactorial(number))
        {
            int base = findFactorialBase(number);
            cout << number << " is a factorial! (" << base << "! = " << number << ")" << endl;
        }
        else
        {
            cout << number << " is not a factorial of any integer." << endl;
        }
        break;

    case 8:
        cout << "Enter a number: ";
        cin >> number;
        int base = findFactorialBase(number);
        if (base != -1)
        {
            cout << number << " = " << base << "!" << endl;
        }
        else
        {
            cout << number << " is not a factorial of any integer." << endl;
        }
        break;

    case 9:
        cout << "Enter a number: ";
        cin >> n;

        cout << "\n=== COMPARISON OF ALL METHODS ===" << endl;

        // Iterative
        cout << "\n1. Iterative Method:" << endl;
        cout << n << "! = " << factorialIterative(n) << endl;

        // Recursive
        cout << "\n2. Recursive Method:" << endl;
        cout << n << "! = " << factorialRecursive(n) << endl;

        // While loop
        cout << "\n3. While Loop Method:" << endl;
        cout << n << "! = " << factorialWhileLoop(n) << endl;

        // Step by step
        cout << "\n4. Step-by-Step Calculation:" << endl;
        factorialWithSteps(n);

        // Table for small numbers
        if (n <= 10)
        {
            factorialTable(n);
        }

        // Special properties
        cout << "\n=== FACTORIAL PROPERTIES ===" << endl;
        cout << "0! = 1 (by definition)" << endl;
        cout << "1! = 1" << endl;
        cout << "n! = n × (n-1)!" << endl;
        cout << "n! grows very quickly (n! > 2^n for n ≥ 4)" << endl;

        break;

    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}