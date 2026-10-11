class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                if(nums[i] + nums[j] + nums[k] > 0) k--;
                else if(nums[i] + nums[j] + nums[k] < 0) j++;
                else{
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    st.insert(temp);
                    j++;
                    k--;
                    
                }
            }
        }
        vector<vector<int>> v(st.begin(),st.end());    
        return v;
    }
};
