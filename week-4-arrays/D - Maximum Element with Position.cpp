#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int position=1;
      for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            position=i+1;
        }
    }
    cout<<max<<' '<<position;
}