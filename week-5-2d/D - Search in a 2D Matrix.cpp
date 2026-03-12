#include <iostream>
using namespace std;
 
int main() {
	
	int a,b,find;
	cin>>a>>b>>find;
	int arr[a][b];
	bool res=false;
	for(int i=0;i<a;i++){
	    for(int j=0;j<b;j++){
	        cin>>arr[i][j];
	    }
	}
 
		for(int i=0;i<a;i++){
	    for(int j=0;j<b;j++){
	       // cin>>arr[i][j];
	       if(arr[i][j]==find){
	           res=true;
	           break;
	       }
	    }
	}
	if(res){
	    cout<<"true";
	}else{
	    cout<<"false";
	}
 
	
 
}