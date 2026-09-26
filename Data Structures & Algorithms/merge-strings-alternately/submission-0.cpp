class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        string word3;
        while(i<word1.length() && j<word2.length()){
            word3+=word1[i];
            word3+=word2[j];
            i++;
            j++;
        }
        if(i==word1.length()){
            while(j<word2.length()){
                word3+=word2[j];
                j++;
            }
            return word3;
        }else{
            while(i<word1.length()){
                word3+=word1[i];
                i++;
            } 
            return word3;
        }
        return word3;
    }
};