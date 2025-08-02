
#include<iostream>
using namespace std;
//1  --> even
//0 --> odd
bool iseven(int a){
    //odd
     if(a %2!=0)
     return 0;
     else{
        return 1;
     }
}
int main(){

int num;
cout<<"enter the number:"<<endl;
cin>>num;
if  (iseven(num)){
    cout<<"numer is even"<<endl; 
}
    else {
    cout<<"number is odd"<<endl;
    }
}  
