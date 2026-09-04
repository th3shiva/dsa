#include<iostream>
using namespace std;
 
int main(){
    int m;
    cin>>m;
    
    while(m>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
         int rot;
         cin>>rot;
         
        for(int i=rot;i<n;i++){
            cout<<arr[i]<<' ';
        }
       
        for(int i=0;i<rot;i++){
            cout<<arr[i]<<' ';
        }
         cout<<endl;
        m--;
    }
    
}