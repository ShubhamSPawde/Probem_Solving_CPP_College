string isSubset(int a1[], int a2[], int n, int m) {
    int i = 0, j = 0;
    int cnt = 0;
    sort(a1, a1+n);
    sort(a2, a2+m);
    while(i<n && j<m){
        if(a1[i] == a2[j]){
            cnt++;
            i++;
            j++;
        }
        else if(a1[i] > a2[j]){
            j++;
        }else{
            i++;
        }
    }
    return cnt == m ? "Yes" : "No";
}