#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int arr[a][b];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (i == 0) {
                cout << arr[0][j] << " ";
            }
            if (j == b - 1 && i != 0 ) {
                cout << arr[i][j] << " ";
            }
        }
        if (i == a - 1 && a > 1) {
            
            for (int j = b - 2; j >= 0; j--) {

                cout << arr[i][j] << " ";

                if(i==a-1 && j==0){
                // cout<<";
                    
                        for(int k = a-2 ; k >= 1 ; k--){
                            cout<<arr[k][0]<<" ";
                        }
                    }
            }



        }
    }
}