class Solution {
  public:
    void sort012(vector<int>& arr) {
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] == 0){
                cnt0++;
            }
            else if(arr[i] == 1){
                cnt1++;
            }
            else if(arr[i] == 2){
                cnt2++;
            }
        }
        int k = 0;
        while(cnt0 != 0){
            arr[k] = 0;
            k++;
            cnt0--;
        }
        while(cnt1 != 0){
            arr[k] = 1;
            k++;
            cnt1--;
        }
        while(cnt2 != 0){
            arr[k] = 2;
            k++;
            cnt2--;
        }
        
    }
};