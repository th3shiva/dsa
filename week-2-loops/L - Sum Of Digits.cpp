#include<iostream>
using namespace std;
int main(){
    long long n;
    int sum=0,rem;
    cin>>n;
    while(n>0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout<<sum<<endl;
}