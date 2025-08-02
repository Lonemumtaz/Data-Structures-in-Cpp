#include <iostream>
#include <string>
#include <iomanip>
#include <climits>
using namespace std;

// Function to demonstrate basic data types
void demonstrateDataTypes() {
    cout << "\n=== C++ BASIC DATA TYPES ===" << endl;
    
    // Integer types
    int integer = 42;
    short shortInt = 100;
    long longInt = 1000000L;
    long long longLongInt = 9223372036854775807LL;
    
    // Floating point types
    float floatNum = 3.14f;
    double doubleNum = 3.141592653589793;
    
    // Character types
    char character = 'A';
    
    // Boolean type
    bool boolean = true;
    
    // String (from string library)
    string text = "Hello, C++!";
    
    cout << "Integer: " << integer << " (Size: " << sizeof(integer) << " bytes)" << endl;
    cout << "Short: " << shortInt << " (Size: " << sizeof(shortInt) << " bytes)" << endl;
    cout << "Long: " << longInt << " (Size: " << sizeof(longInt) << " bytes)" << endl;
    cout << "Long Long: " << longLongInt << " (Size: " << sizeof(longLongInt) << " bytes)" << endl;
    cout << "Float: " << floatNum << " (Size: " << sizeof(floatNum) << " bytes)" << endl;
    cout << "Double: " << fixed << setprecision(10) << doubleNum << " (Size: " << sizeof(doubleNum) << " bytes)" << endl;
    cout << "Character: " << character << " (Size: " << sizeof(character) << " byte)" << endl;
    cout << "Boolean: " << boolalpha << boolean << " (Size: " << sizeof(boolean) << " byte)" << endl;
    cout << "String: " << text << " (Length: " << text.length() << " characters)" << endl;
}

// Function to demonstrate operators
void demonstrateOperators() {
    cout << "\n=== C++ OPERATORS ===" << endl;
    
    int a = 10, b = 3;
    
    // Arithmetic operators
    cout << "\nArithmetic Operators (a=10, b=3):" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;
    
    // Comparison operators
    cout << "\nComparison Operators:" << endl;
    cout << "a == b: " << boolalpha << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    
    // Logical operators
    bool x = true, y = false;
    cout << "\nLogical Operators (x=true, y=false):" << endl;
    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;
    cout << "!x: " << (!x) << endl;
    
    // Assignment operators
    int c = 5;
    cout << "\nAssignment Operators (c=5):" << endl;
    cout << "c += 3: " << (c += 3) << endl;
    c = 5; cout << "c -= 2: " << (c -= 2) << endl;
    c = 5; cout << "c *= 4: " << (c *= 4) << endl;
    c = 10; cout << "c /= 2: " << (c /= 2) << endl;
    c = 7; cout << "c %= 3: " << (c %= 3) << endl;
    
    // Increment/Decrement operators
    int d = 5;
    cout << "\nIncrement/Decrement Operators (d=5):" << endl;
    cout << "d++: " << d++ << " (d is now " << d << ")" << endl;
    cout << "++d: " << ++d << " (d is now " << d << ")" << endl;
    cout << "d--: " << d-- << " (d is now " << d << ")" << endl;
    cout << "--d: " << --d << " (d is now " << d << ")" << endl;
}

// Function to demonstrate input/output
void demonstrateInputOutput() {
    cout << "\n=== INPUT/OUTPUT OPERATIONS ===" << endl;
    
    string name;
    int age;
    double height;
    
    cout << "Enter your name: ";
    cin.ignore(); // Clear input buffer
    getline(cin, name);
    
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Enter your height (in meters): ";
    cin >> height;
    
    cout << "\n--- Your Information ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years old" << endl;
    cout << "Height: " << fixed << setprecision(2) << height << " meters" << endl;
    
    // Formatted output
    cout << "\n--- Formatted Output ---" << endl;
    cout << left << setw(15) << "Name:" << name << endl;
    cout << left << setw(15) << "Age:" << age << " years" << endl;
    cout << left << setw(15) << "Height:" << height << " m" << endl;
}

// Function to demonstrate control structures
void demonstrateControlStructures() {
    cout << "\n=== CONTROL STRUCTURES ===" << endl;
    
    // If-else statement
    int number = 15;
    cout << "\nIf-Else Example (number = " << number << "):" << endl;
    if (number > 0) {
        cout << "Number is positive" << endl;
    } else if (number < 0) {
        cout << "Number is negative" << endl;
    } else {
        cout << "Number is zero" << endl;
    }
    
    // Switch statement
    char grade = 'B';
    cout << "\nSwitch Example (grade = " << grade << "):" << endl;
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good!" << endl;
            break;
        case 'C':
            cout << "Average!" << endl;
            break;
        default:
            cout << "Need improvement!" << endl;
    }
    
    // For loop
    cout << "\nFor Loop Example (1 to 5):" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // While loop
    cout << "\nWhile Loop Example (countdown from 5):" << endl;
    int count = 5;
    while (count > 0) {
        cout << count << " ";
        count--;
    }
    cout << "Blast off!" << endl;
    
    // Do-while loop
    cout << "\nDo-While Loop Example:" << endl;
    int x = 1;
    do {
        cout << "Value: " << x << endl;
        x++;
    } while (x <= 3);
}

// Function to demonstrate arrays
void demonstrateArrays() {
    cout << "\n=== ARRAYS ===" << endl;
    
    // Integer array
    int numbers[5] = {10, 20, 30, 40, 50};
    cout << "\nInteger Array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }
    
    // Character array (C-style string)
    char message[] = "Hello";
    cout << "\nCharacter Array: " << message << endl;
    
    // 2D Array
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "\n2D Array (3x3 Matrix):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(3) << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to demonstrate constants and literals
void demonstrateConstants() {
    cout << "\n=== CONSTANTS AND LITERALS ===" << endl;
    
    const int MAX_SIZE = 100;
    const double PI = 3.14159;
    const char GRADE = 'A';
    const string UNIVERSITY = "Tech University";
    
    cout << "Integer constant: " << MAX_SIZE << endl;
    cout << "Double constant: " << PI << endl;
    cout << "Character constant: " << GRADE << endl;
    cout << "String constant: " << UNIVERSITY << endl;
    
    // Demonstrating different number systems
    cout << "\nNumber System Literals:" << endl;
    cout << "Decimal: " << 42 << endl;
    cout << "Octal: " << 052 << " (052 in octal)" << endl;
    cout << "Hexadecimal: " << 0x2A << " (0x2A in hex)" << endl;
}

// Function to demonstrate memory sizes and limits
void demonstrateMemoryAndLimits() {
    cout << "\n=== MEMORY SIZES AND LIMITS ===" << endl;
    
    cout << "\nData Type Sizes:" << endl;
    cout << "char: " << sizeof(char) << " byte(s)" << endl;
    cout << "int: " << sizeof(int) << " byte(s)" << endl;
    cout << "float: " << sizeof(float) << " byte(s)" << endl;
    cout << "double: " << sizeof(double) << " byte(s)" << endl;
    cout << "long: " << sizeof(long) << " byte(s)" << endl;
    cout << "long long: " << sizeof(long long) << " byte(s)" << endl;
    
    cout << "\nInteger Limits:" << endl;
    cout << "INT_MAX: " << INT_MAX << endl;
    cout << "INT_MIN: " << INT_MIN << endl;
    cout << "CHAR_MAX: " << (int)CHAR_MAX << endl;
    cout << "CHAR_MIN: " << (int)CHAR_MIN << endl;
}

int main() {
    int choice;
    
    cout << "=== C++ BASICS TUTORIAL ===" << endl;
    cout << "1. Data Types" << endl;
    cout << "2. Operators" << endl;
    cout << "3. Input/Output" << endl;
    cout << "4. Control Structures" << endl;
    cout << "5. Arrays" << endl;
    cout << "6. Constants and Literals" << endl;
    cout << "7. Memory and Limits" << endl;
    cout << "8. Show All Topics" << endl;
    cout << "Enter your choice (1-8): ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            demonstrateDataTypes();
            break;
        case 2:
            demonstrateOperators();
            break;
        case 3:
            demonstrateInputOutput();
            break;
        case 4:
            demonstrateControlStructures();
            break;
        case 5:
            demonstrateArrays();
            break;
        case 6:
            demonstrateConstants();
            break;
        case 7:
            demonstrateMemoryAndLimits();
            break;
        case 8:
            cout << "\n=== COMPLETE C++ BASICS TUTORIAL ===" << endl;
            demonstrateDataTypes();
            demonstrateOperators();
            demonstrateControlStructures();
            demonstrateArrays();
            demonstrateConstants();
            demonstrateMemoryAndLimits();
            
            cout << "\n=== BASIC PROGRAMMING CONCEPTS SUMMARY ===" << endl;
            cout << "1. Variables store data in memory" << endl;
            cout << "2. Data types define what kind of data can be stored" << endl;
            cout << "3. Operators perform operations on data" << endl;
            cout << "4. Control structures control program flow" << endl;
            cout << "5. Arrays store multiple values of same type" << endl;
            cout << "6. Constants are immutable values" << endl;
            cout << "7. Memory management is important for efficiency" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
    
    return 0;
}
