#include<iostream>
using namespace std;
 
int main(){
    int n,search,count=0;
    cin>>n>>search;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            count++;
        }
    }
    cout<<count;
    
    
}