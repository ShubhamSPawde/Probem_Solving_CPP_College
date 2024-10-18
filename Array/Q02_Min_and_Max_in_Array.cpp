class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] > maxi){
                maxi = arr[i];
            }
            if(arr[i] < mini){
                mini = arr[i];
            }
        }
        pair<int, int> p;
        p.first = mini;
        p.second = maxi;
        return p;
    }
};
