#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int start = 0;
    for (int i = 1; i <= a; i++)
    {
        int num;
        if (i % 2 == 1)
        {
            num = 0;
        }
        else
        {
            num = 1;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << num % 2;
            num++;
        }
        cout << endl;
    }

    return 0;
}

// solution 2
#include<iostream>
using namespace std;
int main(){
    int n=6;
        int num=0;
    for(int i=0;i<n;i++){
        if(num%2==0){
            num=1;
        }else{
            num=0;
        }
        for(int j=0;j<=i;j++){
                  if(num%2==0){
            num=0;
        }else{
            num=1;
        }
            cout<<num; 
              num++;
        }
        cout<<endl;
      
    }
}

// short 
#include<iostream>
using namespace std;
int main(){
    int n=6;
        int num=0;
    for(int i=0;i<n;i++){
        num=num%2;
        for(int j=0;j<=i;j++){
        cout<<num%2;
              num++;
        }
        cout<<endl;
      
    }
}