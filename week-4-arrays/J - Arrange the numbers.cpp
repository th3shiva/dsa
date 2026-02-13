#include <iostream>
using namespace std;
 
 
int main() {
    int tim,count=0;
    cin>>tim;
	while(tim--){
	    int num;
	cin>>num;
 
 
for(int i = 1; i <= num; i += 2){
 
	    
	    cout<<i<<" ";
	    count=i;
	}
	for(int i=num;i>0;i--){
	   if(i%2==0){
	    cout<<i<<" ";
	       
	   }
	    
	}
 
	cout<<endl;
}
}