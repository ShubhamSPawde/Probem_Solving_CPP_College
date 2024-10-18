class Solution
{
    public:
    int countOccurence(int arr[], int n, int k) {
        unordered_map<long long, long long> mp;
        for(int i = 0; i<n; i++){
            mp[arr[i]]++;
        }
        int cnt = 0;
        for(auto i : mp){
            if(i.second > (n/k) ){
                cnt++;
            }
        }
        return cnt;
    }
};

class Solution
{
    public:
    int countOccurence(int arr[], int n, int k) {
        vector<int> v(100000 ,0);
        for(int i = 0; i<n; i++){
            v[arr[i]]++;
        }
        int cnt = 0;
        for(long long i = 0; i<v.size(); i++){
            if(v[i] > (n/k)){
                cnt++;
            }
        }
        return cnt;
    }
};