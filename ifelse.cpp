#include <iostream>
using namespace std;

int main()
{
    int number, age;
    char grade;

    // Example 1: Simple if-else
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
    {
        cout << number << " is positive" << endl;
    }
    else if (number < 0)
    {
        cout << number << " is negative" << endl;
    }
    else
    {
        cout << number << " is zero" << endl;
    }

    // Example 2: Check even or odd
    if (number % 2 == 0)
    {
        cout << number << " is even" << endl;
    }
    else
    {
        cout << number << " is odd" << endl;
    }

    // Example 3: Age category
    cout << "Enter your age: ";
    cin >> age;

    if (age < 13)
    {
        cout << "You are a child" << endl;
    }
    else if (age >= 13 && age < 20)
    {
        cout << "You are a teenager" << endl;
    }
    else if (age >= 20 && age < 60)
    {
        cout << "You are an adult" << endl;
    }
    else
    {
        cout << "You are a senior citizen" << endl;
    }

    // Example 4: Grade evaluation
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;

    if (grade == 'A' || grade == 'a')
    {
        cout << "Excellent! Grade: A" << endl;
    }
    else if (grade == 'B' || grade == 'b')
    {
        cout << "Good! Grade: B" << endl;
    }
    else if (grade == 'C' || grade == 'c')
    {
        cout << "Average! Grade: C" << endl;
    }
    else if (grade == 'D' || grade == 'd')
    {
        cout << "Below Average! Grade: D" << endl;
    }
    else if (grade == 'F' || grade == 'f')
    {
        cout << "Fail! Grade: F" << endl;
    }
    else
    {
        cout << "Invalid grade entered!" << endl;
    }

    // Example 5: Nested if-else
    int marks;
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    if (marks >= 0 && marks <= 100)
    {
        if (marks >= 90)
        {
            cout << "Grade A+ - Outstanding!" << endl;
        }
        else if (marks >= 80)
        {
            cout << "Grade A - Excellent!" << endl;
        }
        else if (marks >= 70)
        {
            cout << "Grade B - Good!" << endl;
        }
        else if (marks >= 60)
        {
            cout << "Grade C - Average!" << endl;
        }
        else if (marks >= 50)
        {
            cout << "Grade D - Pass!" << endl;
        }
        else
        {
            cout << "Grade F - Fail!" << endl;
        }
    }
    else
    {
        cout << "Invalid marks! Please enter marks between 0-100." << endl;
    }

    // Example 6: Finding largest of three numbers
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << a << " is the largest number" << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << b << " is the largest number" << endl;
    }
    else
    {
        cout << c << " is the largest number" << endl;
    }

    return 0;
}