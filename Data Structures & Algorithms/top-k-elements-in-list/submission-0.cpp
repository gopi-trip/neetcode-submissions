class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v;
        unordered_map<int,int> m;
        for(int num:nums) m[num]++;
        int maximum = INT_MIN;
        
        while(k!=0){
            auto maxIt = std::max_element(m.begin(), m.end(),
                [](const auto& a, const auto& b) {
                    return a.second < b.second;
            });
            int maxElement = maxIt->first;
            v.push_back(maxElement);
            m.erase(maxIt->first);
            k--;
        }
        return v;
    }
};
