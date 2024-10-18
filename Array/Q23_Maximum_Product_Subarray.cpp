class Solution {
  public:

    long long maxProduct(vector<int> &arr) {
        long long maxi = INT_MIN;
        long long prefix = 1, suffix = 1;
        for(int i = 0; i<arr.size(); i++){
            if(prefix == 0){
                prefix = 1;
            }
            if(suffix == 0){
                suffix = 1;
            }
            prefix *= arr[i];
            suffix *= arr[arr.size()-i-1];
            
            maxi = max(maxi, max(prefix, suffix));
        }
        return maxi;
    }
};