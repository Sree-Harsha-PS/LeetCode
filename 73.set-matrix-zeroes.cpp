/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool rowFlag = false, colFlag = false;
        int n = matrix.size(), m=matrix[0].size();
        for(int i=0;i<m;++i){
            if(matrix[0][i]==0){
                rowFlag = true;
            }
        }
        for(int i=0;i<n;i++){
            if(matrix[i][0]==0){
                colFlag = true;
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(colFlag){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }
        if(rowFlag){
            for(int i=0;i<m;i++){
                matrix[0][i]=0;
            }
        }
    }

};

// @lc code=end

