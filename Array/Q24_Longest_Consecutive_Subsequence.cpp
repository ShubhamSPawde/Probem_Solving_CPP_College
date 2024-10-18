class Solution {
  public:
    int findLongestConseqSubseq(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int cnt = 1;
        int maxi = 1;
        for(int i = 1; i<arr.size(); i++){
            if(arr[i] == arr[i-1] + 1){
                cnt++;
            }    
            else if(arr[i] != arr[i-1]){
                cnt = 1;
            }
            maxi = max(maxi, cnt);
        }
        return maxi;
    }
};