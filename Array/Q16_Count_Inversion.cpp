class Solution {
  public:
    
    int inversionCount(vector<int> &arr) {
        int cnt = 0;
        for(int i = 0; i<arr.size(); i++){
            for(int j = 0; j<arr.size(); j++){
                if(arr[i] > arr[j] && ( i < j )){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};