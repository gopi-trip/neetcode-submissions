class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> v;
        int j=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i] == "+"){
                v.push_back(v[j-2] + v[j-1]);
                j++;
                continue;
            }
            else if(operations[i] == "D"){
                v.push_back(v[j-1]*2);
                j++;
                continue;
            }
            else if(operations[i] == "C"){
                v.pop_back();
                j--;
                continue;
            }else{
                v.push_back(stoi(operations[i]));
                j++;
            }
            
        }
        
        int sum = 0;

        for(int num: v) sum+=num;

        return sum;
    }
};