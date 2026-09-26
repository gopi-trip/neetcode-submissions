class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int diff = target - nums[i];
            if(m.find(diff) == m.end()){
                m.insert({nums[i],i});
            }else{
                v.push_back(m[diff]);
                v.push_back(i);
                break;
            }
        }
        return v;
    }
};
