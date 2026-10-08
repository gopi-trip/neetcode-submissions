class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(),strs.end());

        int i=0;
        int j=0;

        while(strs[0][i] == strs[strs.size()-1][j] && (i<strs[0].length()) && (j<strs[strs.size()-1].length())){
            ans+=strs[0][i];
            i++;
            j++;
        }

        return ans;
    }
};