#include <iostream>
using namespace std;

int main() {
	char ch;
	cin>>ch;
    int val=(int)ch;
    

 if((int)ch>64 and (int)ch<91 ){
    int ans=val-65;
    val=ans+97;
    cout<<(char)val;
    
}else{

    cout<<ch;

}
}
