class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<int> v(N*N);
        int k = 0;
        for(int i = 0; i<N; i++){
            for(int j = 0; j<N; j++){
                v[k++] = Mat[i][j];
            }
        }
        sort(v.begin(), v.end());
        int c = 0;
        for(int i = 0; i<N; i++){
            for(int j = 0; j<N; j++){
                Mat[i][j] = v[c++];
            }
        }
        return Mat;
    }
};