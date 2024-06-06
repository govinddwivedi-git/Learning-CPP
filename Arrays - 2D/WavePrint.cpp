 #include <bits/stdc++.h>
 using namespace std;
 
vector<int> wavePrint(vector<vector<int> > arr, int nRows, int mCols)
{
    vector<int> ans;
    
    for(int col=0; col<mCols; col++) {
        
        if( col&1 ) {
            //odd Index -> Bottom to top
            
            for(int row = nRows-1; row>=0; row--) {
                //cout << arr[row][col] <<" ";
                ans.push_back(arr[row][col]);
            }    
        }
        else
        {
            // 0 or even iondex -> top to bottom
            for(int row = 0; row<nRows; row++) {
                //cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }   
    }
    return ans;
}
 


int main() {
    int rows, cols;

    // Get the dimensions of the vector of vectors
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows);

    // Input elements for each row
    for (int i = 0; i < rows; i++) {
        matrix[i].resize(cols);  // Resize the inner vector for each row
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // You can now work with the matrix as needed

    vector < int > answer = wavePrint(matrix,rows,cols);
    // For example, to print its elements:
   
    for(auto i : answer){
        cout << i << " ";
    }

}