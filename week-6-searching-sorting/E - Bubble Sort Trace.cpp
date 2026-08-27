#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

int num=0;
    for (int i = n - 1; i >= 1; i--) {
        
        bool swapped = false;
        int count = 0;
cout << "Pass " << ++num << ": ";
        for (int j = 0; j < i; j++) {
            
            
            if (arr[j] > arr[j + 1]) {
                count++;

                swap(arr[j], arr[j + 1]);
                swapped = true;
        
            }

        }
          for (int k = 0; k < n; k++) {
                cout << arr[k] << " ";
            }
              cout << ", swaps = " << count << endl;
                  if (swapped==false) {
                break;
            }

    }
}