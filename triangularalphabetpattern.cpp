#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i = 1;
      char start = 'A' ;
    while (i <=n )
    {
        int j=1;
        while (j<=n){
         cout<<start<< " " ;
          start++;  
            j=j+1;
        }
        cout<<endl;
        i=i+1;     
        } 
    }