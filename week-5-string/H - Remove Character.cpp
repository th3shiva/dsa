#include <iostream>

using namespace std;

int main() {
    string s;
    cin>>s;
    char ch1;
    cin >> ch1;
    
    for(int i=0;i<s.size();i++){
        if (s[i]!=ch1){
            cout<<s[i];
        }
    }
}