class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size(); 
        int columns = matrix[0].size(); 

        for (int row = 0; row < rows - 1; row++) 
        {
            for (int col = row + 1; col < columns; col++) 
            {
                int temp = matrix[row][col]; 
                matrix[row][col] = matrix[col][row]; 
                matrix[col][row] = temp; 
            }
        } 

        for (int row = 0; row < rows; row++) 
        { 
            int left = 0; 
            int right = columns - 1; 
            while (left < right) 
            {
                int temp = matrix[row][left]; 
                matrix[row][left] = matrix[row][right]; 
                matrix[row][right] = temp; 
                left++; 
                right--; 
            }
        } 
    }
};