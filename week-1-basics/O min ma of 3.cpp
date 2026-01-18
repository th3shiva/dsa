
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && a<c){
         cout<<"Min = "<<a<<endl;
              if(b>a && b>c ){
        cout<<"Max = "<<b;
    }else  if(c>a && c>b ){
        cout<<"Max = "<<c;
    }
    }
    
    else if(b<c && b<a){
         cout<<"Min = "<<b<<endl;
              if(a>b && a>c ){
        cout<<"Max = "<<a;
    }else  if(c>a && c>b ){
        cout<<"Max = "<<c;
    }
    }
    else{
         cout<<"Min = "<<c<<endl;
         
                    if(a>b && a>c ){
        cout<<"Max = "<<a;
    }else  if(b>a && b>c ){
        cout<<"Max = "<<b;
    }
    }
    
}