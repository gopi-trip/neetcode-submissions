class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int high = matrix.size()-1;

        while(low<=high){
            int mid = (low+high)/2;

            if(target > matrix[mid][matrix[mid].size()-1]) low = mid+1;
            
            else if (target < matrix[mid][0]) high = mid-1;
            
            else{
                for(int i=0;i<matrix[mid].size();i++){
                    if(target == matrix[mid][i]) return true;
                }
                return false;
            }
        }
        return false;
    }
};
