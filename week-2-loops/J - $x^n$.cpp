#include<iostream>
using namespace std;
 
int main(){
    int n,p;
    
    cin>>n>>p;
    long long sum=1;
    int i=1;
 while (i<=p){
        sum=sum*n;
        i++;
    }
    cout<<sum;
}