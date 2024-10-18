class Solution {
  public:
    int findUnion(vector<int>& a, vector<int>& b) {
        vector<long long> v(1e5,0);
        int cnt = 0;
        for(int i = 0; i<a.size(); i++){
            v[a[i]]++;
        }
        for(int i = 0; i<b.size(); i++){
            v[b[i]]++;
        }
        for(int i = 0; i<v.size(); i++){
            if(v[i] != 0){
                cnt++;
            }
        }
        return cnt;
    }
};


class Solution {
  public:
    int findUnion(vector<int>& a, vector<int>& b) {
        int totalsize = a.size() + b.size();
        vector<int> v(totalsize);
        int k = 0;
        for(int i = 0; i<a.size(); i++){
            v[k] = a[i];
            k++;
        } 
        for(int i = 0; i<b.size(); i++){
            v[k] = b[i];
            k++;
        }
        sort(v.begin(),v.end());
        auto it = unique(v.begin(), v.end());
        v.erase(it, v.end());
        return v.size();
    }
    
};