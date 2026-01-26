#include <iostream>
using namespace std;
 
int main(){
    long long num,rev=0;
    int rem;
    cin>>num;
    long long p=num;
    while(num>0){
        rem=num%10;
        
        rev=rev*10+rem;
        num=num/10;
    }
    if(p==rev){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}