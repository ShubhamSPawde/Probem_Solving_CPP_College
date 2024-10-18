int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    vector<int> v(n*n);
    int m = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            v[m++] = mat[i][j];
        }
    }
    sort(v.begin(), v.end());
    return v[k-1];
}