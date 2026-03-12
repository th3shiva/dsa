#include <iostream>
using namespace std;

int main() {
	
	int a,b;
	cin>>a>>b;
	int arr[a][b];

	for(int i=0;i<a;i++){
	    for(int j=0;j<b;j++){
	        cin>>arr[i][j];
	    }
	}

	    for(int j=0;j<b;j++){
	        int sum=0;
		for(int i=0;i<a;i++){
	  
	       sum=sum+arr[i][j];
	       }
	    cout<<sum<<" ";
	    }
	}
