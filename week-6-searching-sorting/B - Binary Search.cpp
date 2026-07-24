#include <iostream>
using namespace std;
 
int main() {
	int n,target;
	bool flag=false;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	cin>>target;
 
int l=0;
int r=n-1;
 
while(l<=r){
int mid=((l+r)/2);
    
    if(arr[mid]==target){
        flag=true;
        break;
    }
    else if(arr[mid]>target){
        r=mid-1;
    }
    else if(arr[mid]<target){
        l=mid+1;
    }
}
 
	if(flag){
	       cout<<"YES";
	}
		   else{
	       cout<<"NO";
	   }
	
 
}