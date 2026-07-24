#include <iostream>
using namespace std;
 
int main() {
	int a,target;
	cin>>a;
	int arr[a];
	bool flag=false;
	for(int i=0;i<a;i++){
	    cin>>arr[i];
	}
	cin>>target;
	
		for(int i=0;i<a;i++){
	   if(arr[i]==target){
	    
	       flag=true;
	       break;
	   }
 
	}
 
	if(flag){
	       cout<<"YES";
	}
		   else{
	       cout<<"NO";
	   }
	
 
}