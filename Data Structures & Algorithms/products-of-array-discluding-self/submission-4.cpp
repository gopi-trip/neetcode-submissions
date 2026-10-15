class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v(nums.size(),1);

        int prefix = 1;
        for(int i=0;i<nums.size();i++){
            v[i] = prefix;
            prefix*=nums[i];
        }

        int postfix = 1;
        for(int i=nums.size()-1;i>=0;i--){
            v[i]*= postfix;
            postfix*=nums[i];
        }

        return v;
    }
};
