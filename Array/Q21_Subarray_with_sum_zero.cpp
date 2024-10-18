class Solution {
  public:
    bool subArrayExists(vector<int> arr) {
        int sum = 0;
        for(int i = 0; i<arr.size(); i++){
            sum = 0;
            for(int j = i; j<arr.size(); j++){
                sum += arr[j];
                if(sum == 0){
                    return true;        
                }
            }
        }
        return false;
    }
};