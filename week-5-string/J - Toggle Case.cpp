#include <iostream>

using namespace std;

int main() {
    string s;
    
    getline(cin,s);
    
    
    for(int i=0;i<s.size();i++){
        if (s[i]>=64 && s[i]<=91){
            cout<<char(s[i]+32);
        }else if  (s[i]>=97 && s[i]<=122){
            cout<<char(s[i]-32);
        }
    }
}