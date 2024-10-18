class Solution{
    public:
    
   void rearrange(long long *arr, int n) 
    { 
    	vector<int> v(n);
    	
    	int left = 0;
    	int right = n-1;
    	for(int i = 0; i<n; i++){
    	    v[i] = arr[i];
    	}
    	
    	for(int i = 0; i<n; i++){
    	    if(i % 2 == 0){
    	        arr[i] = v[right--];
    	    }else{
    	        arr[i] = v[left++];
    	    }
    	}
    }
};
