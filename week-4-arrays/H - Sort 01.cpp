#include <iostream>
using namespace std;
 
 
int main() {
    int tim;
    cin>>tim;
	while(tim>0){
	    int num;
	cin>>num;
	    
	
	int arr[num];
	int count=0;
	for(int i=0;i<num;i++){
	    cin>>arr[i];
	}
 
	for(int i=0;i<num;i++){
        if(arr[i]==0){
            count++;
        }
	}
		for(int i=0;i<num;i++){
            if(i<count){
                arr[i]=0;
            }else{
                arr[i]=1;
            }
	}
	
	for(int i=0;i<num;i++){
     cout<<arr[i]<<' ';
	}
	cout<<endl;
	tim--;
}
}