class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        int startrow = 0;
        int startcol = 0;
        int endrow = matrix.size() - 1;
        int endcol = matrix[0].size()-1;
        int cnt = 0;
        int total = matrix.size() * matrix[0].size();
        vector<int> ans;
        
        while(cnt < total){
            for(int i = startcol; i<=endcol && cnt<total; i++){
                ans.push_back(matrix[startrow][i]);
                cnt++;
            }
            startrow++;
            
            for(int i = startrow; i<=endrow && cnt<total; i++){
                ans.push_back(matrix[i][endcol]);
                cnt++;
            }
            endcol--;
            for(int i = endcol; i>= startcol && cnt<total; i--){
                ans.push_back(matrix[endrow][i]);
                cnt++;
            }
            endrow--;
            for(int i = endrow; i>= startrow && cnt<total; i--){
                ans.push_back(matrix[i][startcol]);
                cnt++;
            }
            startcol++;
        }
        
        return ans;
    }
};