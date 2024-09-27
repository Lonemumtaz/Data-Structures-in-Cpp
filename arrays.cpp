#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    cout << "printing the array elements:" << endl;
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing done" << endl;
}
int main()
{
    int number[15];
    cout << "value at 14 index is:" << number[14] << endl;

    // initializing an array
    int second[3] = {5, 7, 11};
    // accessing an element
    cout << "value at second index:" << second[2] << endl;
    int third[15] = {2, 7};

    printarray(third, 15);

    int n = 15;
    // cout << "printing the array elements:" << endl;
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << third[i] << " ";
    // }
    // intialixing all locations with 0
    int fourth[10] = {0};
    int m = 10;
    printarray(fourth, 10);
    // print the array elements
    // cout << "printing the array elements:" << endl;
    // for (int i = 0; i <= m; i++)
    // {
    //     cout << fourth[i] << " ";
    // }

    // intialixing all locations with 1 (not possible with below line)
    int fifth[10] = {1};
    int x = 10;
    printarray(fifth, 10);
    //     cout << "printing the array elements:" << endl;
    //     for (int i = 0; i <= x; i++)
    //     {
    //         cout << fifth[i] << " ";
    //     }
    int fifthsize = sizeof(fifth) / sizeof(int);
    cout << "size of fifth is:" << fifthsize << endl;
    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << ch[4] << endl;

    cout << "printing the array elements:" << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << "printing done" << endl;

    double firstdouble[5];
    float firstfloat[6];
    bool firstbool[9];

    cout << "everything is alright" << endl;
}