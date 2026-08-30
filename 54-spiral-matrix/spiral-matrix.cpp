class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowsize = matrix.size();
        int colsize = matrix[0].size();

        vector<int> ans;

        int count=0;
        int total = rowsize*colsize;

        int starting_row = 0;
        int starting_col = 0;
        int ending_row = rowsize - 1;
        int ending_col = colsize-1;

        while(count<total){

            //to print thr first row(starting row)
            for(int i = starting_col; i <= ending_col && count<total; i++){
                ans.push_back(matrix[starting_row][i]);
                count++;
            }
            starting_row++;

            //to print ending column...
            for(int j=starting_row; count<total && j<=ending_row;j++){
                ans.push_back(matrix[j][ending_col]);
                count++;
            }
            ending_col--;

            //printing last row...
            for(int i=ending_col;i>=starting_col && count<total;i--){
                ans.push_back(matrix[ending_row][i]);
                count++;
            }
            ending_row--;

            //printing first column...
            for(int j=ending_row;j>=starting_row && count<total;j--){
                ans.push_back(matrix[j][starting_col]);
                count++;
            }
            starting_col++;
            
        }
        return ans;
    }
};