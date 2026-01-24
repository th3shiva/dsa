#include<iostream>
using namespace std;
 
int main(){
    long long a;
    long long sum=1;
    cin>>a;
    int i=1;
 while (i<=a){
        sum=sum*i;
        i++;
    }
    cout<<sum;
}