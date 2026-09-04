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
        int small=arr[0];
        int temp=0;
        for(int i=0;i<n;i++){
             
            if(arr[i] < small){
                small= arr[i];
              temp=i;
            }
        }
        cout<<temp<<endl;
        m--;
    }
    
}
