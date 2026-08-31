class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row_size=matrix.size();
        int col_size=matrix[0].size();
        for(int i=0;i<row_size;i++){
            for(int j=i+1;j<col_size;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
            int start=0;
            int end=col_size-1;
            while(start<=end){
                swap(matrix[i][start++], matrix[i][end--]);
            }
        }
    }
};