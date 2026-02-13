#include <iostream>
using namespace std;
void prime(int n){
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    cout<<ans;
}
 
int main() {
    int a;
    cin>>a;
    prime(a);
 
    return 0;
}