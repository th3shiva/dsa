//for number
#include <iostream>
using namespace std;
int main() {
    int num,rev=0,rem;
    cin>>num;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    cout<<rev;

    return 0;
}
// for string 
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=s.size()-1;i>=0;i--){
        cout<<s[i];
    }
}