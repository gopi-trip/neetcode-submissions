class Solution {
public:
    int mySqrt(int x) {
        for(int i=0;i<x/2;i++){
            if(i*i > x) return i-1;
            if(i*i == x) return i;
        }
    }
};