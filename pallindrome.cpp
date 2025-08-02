#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to check if a number is palindrome
bool isNumberPalindrome(int num)
{
    int original = num;
    int reversed = 0;

    // Handle negative numbers
    if (num < 0)
    {
        return false;
    }

    // Reverse the number
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }

    return original == reversed;
}

// Function to check if a string is palindrome (case insensitive)
bool isStringPalindrome(string str)
{
    // Convert to lowercase for case insensitive comparison
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    int left = 0;
    int right = str.length() - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

// Function to check palindrome using reverse string method
bool isStringPalindromeReverse(string str)
{
    string original = str;
    // Convert to lowercase
    transform(original.begin(), original.end(), original.begin(), ::tolower);

    string reversed = original;
    reverse(reversed.begin(), reversed.end());

    return original == reversed;
}

int main()
{
    int choice;

    cout << "=== PALINDROME CHECKER ===" << endl;
    cout << "1. Check Number Palindrome" << endl;
    cout << "2. Check String Palindrome" << endl;
    cout << "3. Check All Examples" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        int number;
        cout << "Enter a number: ";
        cin >> number;

        if (isNumberPalindrome(number))
        {
            cout << number << " is a palindrome!" << endl;
        }
        else
        {
            cout << number << " is not a palindrome!" << endl;
        }
        break;
    }

    case 2:
    {
        string text;
        cout << "Enter a string: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, text);

        if (isStringPalindrome(text))
        {
            cout << "\"" << text << "\" is a palindrome!" << endl;
        }
        else
        {
            cout << "\"" << text << "\" is not a palindrome!" << endl;
        }
        break;
    }

    case 3:
    {
        cout << "\n=== NUMBER PALINDROME EXAMPLES ===" << endl;

        // Test numbers
        int testNumbers[] = {121, 123, 1221, 12321, 1234, 0, 7};
        int numCount = sizeof(testNumbers) / sizeof(testNumbers[0]);

        for (int i = 0; i < numCount; i++)
        {
            if (isNumberPalindrome(testNumbers[i]))
            {
                cout << testNumbers[i] << " is a palindrome" << endl;
            }
            else
            {
                cout << testNumbers[i] << " is not a palindrome" << endl;
            }
        }

        cout << "\n=== STRING PALINDROME EXAMPLES ===" << endl;

        // Test strings
        string testStrings[] = {"level", "hello", "madam", "racecar", "A man a plan a canal Panama", "race a car", "abc"};
        int stringCount = sizeof(testStrings) / sizeof(testStrings[0]);

        for (int i = 0; i < stringCount; i++)
        {
            if (isStringPalindrome(testStrings[i]))
            {
                cout << "\"" << testStrings[i] << "\" is a palindrome" << endl;
            }
            else
            {
                cout << "\"" << testStrings[i] << "\" is not a palindrome" << endl;
            }
        }

        cout << "\n=== MANUAL PALINDROME CHECK ===" << endl;

        // Manual palindrome check for a number
        int num = 12321;
        int original = num;
        int reversed = 0;

        cout << "Checking " << num << " step by step:" << endl;

        while (num > 0)
        {
            int digit = num % 10;
            cout << "Extract digit: " << digit << ", Reversed so far: " << reversed;
            reversed = reversed * 10 + digit;
            cout << " -> " << reversed << endl;
            num = num / 10;
        }

        cout << "Original: " << original << ", Reversed: " << reversed << endl;

        if (original == reversed)
        {
            cout << original << " is a palindrome!" << endl;
        }
        else
        {
            cout << original << " is not a palindrome!" << endl;
        }

        break;
    }

    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    return 0;
}