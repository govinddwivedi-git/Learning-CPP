#include <bits/stdc++.h>
using namespace std;
 
 
 
vector<int> spiralOrder(vector<vector<int> >& matrix) {
        
        
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        int total = row*col;
        
        //index initialisation
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;
        
        
        while(count < total) {
            
            //print starting row
            for(int index = startingCol; count < total && index<=endingCol; index++) {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            //print ending column
            for(int index = startingRow; count < total && index<=endingRow; index++) {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            //print ending row
            for(int index = endingCol; count < total && index>=startingCol; index--) {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //print starting column
            for(int index = endingRow; count < total && index>=startingRow; index--) {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
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

    vector < int > answer = spiralOrder(matrix);
    // For example, to print its elements:
   
    for(auto i : answer){
        cout << i << " ";
    }

}