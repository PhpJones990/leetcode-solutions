class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result(numRows); 
        result[0] = {1}; 

        for (int i = 1; i < numRows; i++) 
        {
            result[i].assign(i+1, 1); 
            for (int j = 1; j < i; j++) 
            {
                result[i][j] = result[i-1][j-1] + result[i-1][j]; 
            }
        }

        return result; 
    }
};