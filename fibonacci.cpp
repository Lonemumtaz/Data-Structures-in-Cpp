#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Method 1: Iterative approach
void fibonacciIterative(int n)
{
    cout << "\n=== Fibonacci Series (Iterative Method) ===" << endl;

    if (n <= 0)
    {
        cout << "Please enter a positive number" << endl;
        return;
    }

    if (n == 1)
    {
        cout << "0" << endl;
        return;
    }

    long long first = 0, second = 1, next;
    cout << "Fibonacci series: " << first << " " << second << " ";

    for (int i = 2; i < n; i++)
    {
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    cout << endl;
}

// Method 2: Recursive approach
long long fibonacciRecursive(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

void displayFibonacciRecursive(int n)
{
    cout << "\n=== Fibonacci Series (Recursive Method) ===" << endl;

    if (n <= 0)
    {
        cout << "Please enter a positive number" << endl;
        return;
    }

    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++)
    {
        cout << fibonacciRecursive(i) << " ";
    }
    cout << endl;
}

// Method 3: Dynamic Programming (Memoization)
vector<long long> memo;

long long fibonacciMemo(int n)
{
    if (n <= 1)
    {
        return n;
    }

    if (memo[n] != -1)
    {
        return memo[n];
    }

    memo[n] = fibonacciMemo(n - 1) + fibonacciMemo(n - 2);
    return memo[n];
}

void displayFibonacciMemo(int n)
{
    cout << "\n=== Fibonacci Series (Memoization Method) ===" << endl;

    if (n <= 0)
    {
        cout << "Please enter a positive number" << endl;
        return;
    }

    memo.assign(n, -1);

    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++)
    {
        cout << fibonacciMemo(i) << " ";
    }
    cout << endl;
}

// Method 4: Check if a number is Fibonacci
bool isPerfectSquare(long long x)
{
    long long sqrt_x = (long long)sqrt(x);
    return sqrt_x * sqrt_x == x;
}

bool isFibonacci(long long n)
{
    // A number is Fibonacci if one or both of (5*n*n + 4) or (5*n*n - 4) is a perfect square
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

// Method 5: Find nth Fibonacci number
long long nthFibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    long long a = 0, b = 1, c;

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

// Method 6: Fibonacci with step-by-step explanation
void fibonacciStepByStep(int n)
{
    cout << "\n=== Fibonacci Step-by-Step Calculation ===" << endl;

    if (n <= 0)
    {
        cout << "Please enter a positive number" << endl;
        return;
    }

    if (n == 1)
    {
        cout << "F(0) = 0" << endl;
        return;
    }

    long long first = 0, second = 1, next;
    cout << "F(0) = " << first << endl;
    cout << "F(1) = " << second << endl;

    for (int i = 2; i < n; i++)
    {
        next = first + second;
        cout << "F(" << i << ") = F(" << (i - 1) << ") + F(" << (i - 2) << ") = "
             << second << " + " << first << " = " << next << endl;
        first = second;
        second = next;
    }
}

int main()
{
    int choice, n;
    long long number;

    cout << "=== FIBONACCI PROGRAM ===" << endl;
    cout << "1. Generate Fibonacci Series (Iterative)" << endl;
    cout << "2. Generate Fibonacci Series (Recursive)" << endl;
    cout << "3. Generate Fibonacci Series (Memoization)" << endl;
    cout << "4. Find nth Fibonacci Number" << endl;
    cout << "5. Check if a number is Fibonacci" << endl;
    cout << "6. Step-by-step Fibonacci Calculation" << endl;
    cout << "7. Compare All Methods" << endl;
    cout << "Enter your choice (1-7): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter number of terms: ";
        cin >> n;
        fibonacciIterative(n);
        break;

    case 2:
        cout << "Enter number of terms: ";
        cin >> n;
        if (n > 40)
        {
            cout << "Note: Recursive method is slow for large numbers. Consider using n <= 40" << endl;
        }
        displayFibonacciRecursive(n);
        break;

    case 3:
        cout << "Enter number of terms: ";
        cin >> n;
        displayFibonacciMemo(n);
        break;

    case 4:
        cout << "Enter position (n): ";
        cin >> n;
        cout << "The " << n << "th Fibonacci number is: " << nthFibonacci(n) << endl;
        break;

    case 5:
        cout << "Enter a number to check: ";
        cin >> number;
        if (isFibonacci(number))
        {
            cout << number << " is a Fibonacci number!" << endl;
        }
        else
        {
            cout << number << " is not a Fibonacci number!" << endl;
        }
        break;

    case 6:
        cout << "Enter number of terms: ";
        cin >> n;
        fibonacciStepByStep(n);
        break;

    case 7:
        cout << "Enter number of terms (recommended <= 20 for comparison): ";
        cin >> n;

        cout << "\n=== COMPARISON OF ALL METHODS ===" << endl;

        // Iterative
        fibonacciIterative(n);

        // Recursive (only for small n)
        if (n <= 20)
        {
            displayFibonacciRecursive(n);
        }
        else
        {
            cout << "\nRecursive method skipped (too slow for n > 20)" << endl;
        }

        // Memoization
        displayFibonacciMemo(n);

        // Step by step
        fibonacciStepByStep(n);

        cout << "\n=== INDIVIDUAL FIBONACCI NUMBERS ===" << endl;
        for (int i = 0; i < min(n, 15); i++)
        {
            cout << "F(" << i << ") = " << nthFibonacci(i) << endl;
        }

        break;

    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}