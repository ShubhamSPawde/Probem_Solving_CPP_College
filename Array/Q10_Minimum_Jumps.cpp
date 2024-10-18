class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int jumps = 0, far = 0, current = 0;
        for(int i = 0; i<arr.size(); i++){
            far = max(far, arr[i]+i);
            if(i == current){
                
                if(i == far){
                    jumps = -1;
                    return jumps;
                }
                
                current = far;
                jumps++;
                if(far >= arr.size()-1){
                    break;
                }
            }
        }
        return jumps;
    }
};