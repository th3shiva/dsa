#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=num;i>=1;i--){
        for (int j=1;j<=num-i;j++){
            cout<<" ";
        }
        for (int k=1;k<=i;k++){
            // cout<<"* ";
            if(k==1 || k==i || i==num){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}