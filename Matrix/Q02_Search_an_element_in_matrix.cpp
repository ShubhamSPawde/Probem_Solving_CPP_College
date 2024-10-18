class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s = 0;
        int e = ( matrix.size() * matrix[0].size() )- 1;
        int mid = s + (e-s)/2;
        int c = matrix[0].size();
        while(s<=e){
            int element = matrix[mid / c][mid % c];
            if(element == target){
                return true;
            }
            else if(element < target){
                s = mid + 1;
            }else{
                e = mid - 1;
            }
            mid =  s + (e-s)/2;
        }
        return false;
    }
};