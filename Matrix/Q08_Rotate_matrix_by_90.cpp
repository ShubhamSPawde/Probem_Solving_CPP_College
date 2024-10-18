class Solution {
  public:
    void rotateby90(vector<vector<int> >& matrix) {
        int n = matrix[0].size();
        
        for(int i = 0; i<matrix.size(); i++){
            for(int  j = i + 1; j<matrix.size(); j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i = 0; i<matrix.size(); i++){
            for(int  j = 0; j<matrix[0].size()/2; j++){
                swap(matrix[j][i], matrix[n - 1 - j][i]);
            }
        }
    }
};


