#include<iostream>
using namespace std;
int main(){
 
 string s;
  getline(cin,s);
  int ans=0;
  int n=s.size();
  int i=0;
  while(i<n){
      
      if(s[i]==' '){
          i++;
          continue;
      }
      
      int j=i;
      int count=0;
      
      while(j<n && s[j]!=' '){
          count++;
          j++;
      }
      
      if(count > ans){
          ans=count;
      }
      i=j;
  
  }
cout<<ans;
  
}