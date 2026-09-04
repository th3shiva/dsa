#include<iostream>
using namespace std;
 
int main(){
    int m;
    int n;
    cin>>m;
    
    
    while(m>0){
        cin>>n;
         int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int position=0;
       for(int i= 0;i<n;i++){
            if(arr[i]!=0){
            swap(arr[position], arr[i]);
            position++;
            }
    }
    
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    m--;
    }
   
}