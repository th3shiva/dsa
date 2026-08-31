#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        string s=arr[i];
        int j=0;
        while(j<s.size()){
            int k=j;
            int count=0;
            
            while(j<s.size() and s[j]==s[k]){
                count++;
                k++;
            }
            cout<<s[j];
            if(count>1){
                cout<<count;
            }
            j=k;
        }
        cout<<endl;
    }
    
}