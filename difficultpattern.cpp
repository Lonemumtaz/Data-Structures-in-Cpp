#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i = 1;
    while (i <=n )
    {
        int j=1;
        int value=i;
        while (j<=i){
            cout<<value<< " " ;
            value++;
            j=j+1;
        }
        cout<<endl;
        i=i+1;     
        } 
    }
