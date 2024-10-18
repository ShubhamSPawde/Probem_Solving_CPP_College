class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        vector<int> pos;
        vector<int> neg;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] >= 0) pos.push_back(arr[i]);
            if(arr[i] < 0) neg.push_back(arr[i]);
        }
        int k = 0;
        for(int i = 0; i<pos.size(); i++){
            arr[k++] = pos[i];
        }
        for(int i = 0; i<neg.size(); i++){
            arr[k++] = neg[i];
        }
        
    }
};