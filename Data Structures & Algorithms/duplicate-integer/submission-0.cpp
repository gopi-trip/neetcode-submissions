class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num:nums){
            m[num]++;
        }
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second > 1) return true;
        }
        return false;
    }
};