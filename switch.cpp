 #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    char ch='a';
    switch (n)
    {
    case 1:
    cout<<"first case"<<endl;

        break;
        case 2:
    cout<<"second case"<<endl;
    
        break;
        case 3:
    cout<<"third case"<<endl;
    
        break;
        // case 'a':
    // cout<<"it is character"<<endl;
    
        // break;
    
    default:
    cout<<"it is a default case"<<endl;
        break;
    }
};                         