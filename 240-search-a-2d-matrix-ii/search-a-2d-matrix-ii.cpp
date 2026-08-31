class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_size = matrix.size();
        int col_size = matrix[0].size();

        int row=0;
        int col=col_size-1;
        while(row < row_size && col >= 0){
            int element = matrix[row][col];
            if(element == target){
                return 1;
            }

            if(element < target){
                row++;
            }
            else{
                col--;
            }
        }
        return 0;
        
    }
};