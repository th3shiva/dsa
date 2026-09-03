#include <iostream>
 using namespace std;
 
int main() {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
 
        
        int start_row=0,start_col=0,end_row=n,end_col=m;
        
        while(start_row < end_row && start_col < end_col){
 
            //start row
            for(int i=start_col;i<end_col;i++){
                cout<<arr[start_row][i]<<" ";
            }
            //end end_col
    
            for(int i=start_row+1;i<end_row;i++){
    cout << arr[i][end_col-1] << " ";
}
 
            
            //end row
            // if(start_row !=end_row){
            if(start_row < end_row - 1){
 
            for(int i=end_col-2;i>=start_col;i--){
                cout<<arr[end_row-1][i]<<" ";
            }}
            
            //start column
            // if(start_col != end_col){
            if(start_col < end_col - 1){
            for(int i=end_row-2;i>start_row;i--){
                
                cout<<arr[i][start_col]<<" ";
 
            }}
                
                start_row++;
                start_col++;
                end_col--;
                end_row--;
                
        }
}
        