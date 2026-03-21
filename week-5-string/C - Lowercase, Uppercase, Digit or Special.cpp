#include <iostream>
using namespace std;
 
int main() {
	char ch;
	cin>>ch;
 
	 if((int)ch>=48 && (int)ch<=57 ){
	    cout<<"Digit";
	}
	else if((int)ch>=65 && (int)ch<=90 ){
	    cout<<"Uppercase";
	}
	else if((int)ch>=97 && (int)ch<=122 ){
	    cout<<"Lowercase";
	}	else{
	    cout<<"Special";
	}
}