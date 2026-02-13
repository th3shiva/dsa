#include<iostream>
using namespace std;
 
int main(){
    int n,search;
    cin>>n>>search;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
      for(int i=0;i<n;i++){
        if(arr[i]==search){
          cout<<"YES";
          return 0;
        }
    }
    cout<<"NO";
    
}