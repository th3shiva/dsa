#include <iostream>
using namespace std;
int main() {
    int n,x;
    cin>>n;
    int postive=0,negative=0,even=0,odd=0;
    
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>0){
            postive++;
        } if(x<0){
            negative++;
        } if(x%2==0){
            even++;
        }if(x%2!=0){
            odd++;
        }
      
    }
      cout<<postive<<endl;
        cout<<negative<<endl;
        cout<<even<<endl;
        cout<<odd<<endl;
    
 
    return 0;
}