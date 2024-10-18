class Solution {
  public:
    void merge(int n, int m, long long arr1[], long long arr2[]) {
        vector<int> v(n+m);
        int k = 0;
        for(int i = 0; i<n; i++){
            v[k++] = arr1[i];
        }
        for(int j = 0; j<m; j++){
            v[k++] = arr2[j];
        }
        sort(v.begin(), v.end());
        k = 0;
        for(int i = 0; i<n; i++){
            arr1[i] = v[k++];
        }
        for(int j = 0; j<m; j++){
            arr2[j] = v[k++];
        }
    }
};