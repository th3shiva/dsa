#include <iostream>
using namespace std;
int main() {
    int c;
    cin>>c;
    int n[c];
    long long sum=0;
    for(int i=0;i<=c-1;i++){
        cin>>n[i];
    }
    for(int i=0;i<c;i++){
        sum+=n[i];
    }
    cout<<sum;
    
    return 0;
}