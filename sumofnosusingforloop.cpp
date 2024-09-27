 #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout <<"sum of n numbers is:"<<endl;
    int sum=0;

    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
    }
