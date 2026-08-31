#include <iostream>
using namespace std;
 
// input aaabbddddccc
// output a3b2d4c3
 
 
int main() {
	string n;
	cin>>n;
	
	for(int i=0;i<n.size();i++){
    int count=0;
 
char temp=n[i];
    
    if(temp ==n[i-1]){
 
        continue;
    }
    
    cout<<n[i];
    
	  for(int j=i;j<n.size();j++){
	      if(n[i]==n[j]){
	          count++;
	      }
	  }
	  cout<<count;
    }
 
 
}