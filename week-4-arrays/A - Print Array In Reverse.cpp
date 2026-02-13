#include <iostream>
using namespace std;
int main() {
    int c;
    cin>>c;
    int n[c];
    
    for(int i=0;i<=c-1;i++){
        cin>>n[i];
    }
    // cout<<n[1];
    for(int i=c-1;i>=0;i--){
        cout<<n[i]<<' ';
    }
    
    return 0;
}