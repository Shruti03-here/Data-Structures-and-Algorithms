class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int r1_size=mat.size();
        int c1_size =mat[0].size();
        int r2_size=target.size();
        int c2_size = target[0].size();

        //rotationa are increment of 90 so 90,180,270 adn 360(original)...
        for(int i=0;i<4;i++){

            if(mat == target){
                return 1;
            }
            //90 rotation...
            for(int i=0;i<r1_size;i++){
                for(int j=i+1;j<c1_size;j++){
                    swap(mat[i][j],mat[j][i]);
                }
                int start=0;
                int end=c1_size-1;
                while(start<=end){
                    swap(mat[i][start], mat[i][end]);
                    start++;
                    end--;
                }
            }
        }
        return 0;
    }
};