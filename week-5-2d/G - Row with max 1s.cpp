#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int maxCount=0;
    int bestRow=-1;
     for(int i=0;i<m;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
                count++;
            }
            
        if(maxCount<count){
            maxCount=count;
            bestRow=i;
        }
        }
    }
    
    cout<<bestRow;

}
