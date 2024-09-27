#include<iostream>
using namespace std;
int power(int a, int b){
       
 int ans=1;
 for(int i=1;i<=b;i++){
    ans=ans*a;
 }
 return ans;
}
 int main(){
// int a,b;
//     cout<<"enter the two numbers"<<endl;
//     cin>>a>>b;
//     int answer=1;
//     for (int  i = 1; i <=b; i++)
//     {
//         answer= answer*a;
//     }
//     cout<<"answer is :"<<answer<<endl;
//     int c,d;
//      cout<<"enter the two numbers"<<endl;
//     cin>>c>>d;
//      answer=1;
//     for (int  i = 1; i <=d; i++)
//     {
//         answer= answer*c;
//     }
//     cout<<"answer is :"<<answer<<endl;
//     int e,f;
//  cout<<"enter the two numbers"<<endl;
//     cin>>e>>f;
//      answer=1;
//     for (int  i = 1; i <=f; i++)
//     {
//         answer= answer*e;
//     }
//     cout<<"answer is :"<<answer<<endl;
int a,b;
cin>>a>>b;
 int answer =power(a,b);
 cout<<"answer is:"<<answer<<endl;
 int c,d;
cin>>c>>d;
  answer =power(c,d);
 cout<<"answer is:"<<answer<<endl;
        
}        


        