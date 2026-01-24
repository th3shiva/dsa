#include<iostream>
using namespace std;
 
int main(){
    int a;
    long long sum=0;
    cin>>a;
    int i=1;
 while (i<=a){
        sum=sum+i;
        i++;
    }
    cout<<sum;
}

//second way
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    cout << n * (n + 1) / 2;
    return 0;
}
