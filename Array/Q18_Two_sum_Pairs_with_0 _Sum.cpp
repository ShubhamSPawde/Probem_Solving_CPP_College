class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int s = 0;
        int e = arr.size() - 1;
        vector<vector<int>> ans;
        while(s < e){
            if( (-arr[s]) == arr[e] ){
                ans.push_back({arr[s], arr[e]});
                s++;
                e--;
            }
            else if( (-arr[s]) < arr[e] ){
                e--;
            }else{
                s++;
            }
        }
        auto it = unique(ans.begin(), ans.end());
        ans.erase(it, ans.end());
        return ans;
    }
};
