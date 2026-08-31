class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {

        int row_size = matrix.size();
        int col_size = matrix[0].size();

        vector<vector<int>> ans(col_size, vector<int>(row_size));
        for(int i=0;i<row_size;i++){
            for(int j=0;j<col_size;j++){
                ans[j][i] = matrix[i][j];
            }
        }

        return ans;
   
    }
};