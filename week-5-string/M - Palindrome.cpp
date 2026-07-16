
#include <iostream>
 
using namespace std;
 
int main() {
    string s;
    getline(cin, s);
    string rev=s;
    
    int j=0;
    for (int i=s.size()-1;i>=0;i--){
        rev[j]=s[i];
        j++;
    }
    if(rev==s){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
}