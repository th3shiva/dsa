#include<iostream>
#include <climits>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int second=INT_MIN;
    
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
        } else if(arr[i]>second && arr[i] != largest){
            second= arr[i];
        }
    }
    if(INT_MIN==second){
        second= -1;
    }
    
    cout<<second;
}