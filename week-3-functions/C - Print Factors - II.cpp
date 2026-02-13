#include <iostream>
using namespace std;
void factor(int n){
    for(int i=n;i>=1;i--){
       if(n%i==0){
           cout<<i<<" ";
       }
    }
}
 
int main() {
    int a;
    cin>>a;
    factor(a);
 
    return 0;
}