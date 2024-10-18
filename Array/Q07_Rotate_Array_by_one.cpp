class Solution {
  public:
    void rotate(vector<int> &arr) {
        int n = arr.size();
        int k = 1;
        vector<int> temp(n);
        for(int i = 0; i<n; i++){
            temp[ (i+k) %  n] = arr[i];
        }
        arr = temp;
    }
};