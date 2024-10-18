class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        int cnt = 0, maxiI = -1;
        int maxi = 0;
        for(int i = 0; i<arr.size(); i++){
           cnt = 0;
           for(int j = 0; j<arr[i].size(); j++){
                if(arr[i][j] == 1){
                    cnt++;
                   
                }
            } 
            if(maxi < cnt){
                maxi = cnt;
                maxiI = i;
            }
        }
        return maxiI;
    }
};