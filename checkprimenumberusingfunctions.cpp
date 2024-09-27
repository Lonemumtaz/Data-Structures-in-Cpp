
#include<iostream>
using namespace std;
//1--> prime number
//0-->not ba prime number
bool isprime(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main(){

int num;
cout<<"enter the number:"<<endl;
cin>>num;
if (isprime(num)){
    cout<<"the given number is a prime number"<<endl;
}
else{
    cout<<"the given number is odd number"<<endl;
}

}  
