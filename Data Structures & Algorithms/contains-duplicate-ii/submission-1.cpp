class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i] == nums[j] && abs(i-j) <= k) return true;
        //     }
        // }
        // return false;

        set<int> s1;

        int l=0;

        for(int r=0;r<nums.size();r++){
            if((r-l) > k){
                s1.erase(nums[l]);
                l++;
            }
            if(s1.find(nums[r]) != s1.end()) return true;
            s1.insert(nums[r]);
        }
        return false;
    }
};