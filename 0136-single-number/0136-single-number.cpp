class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        for(int v:nums){
            mp[v]++;
        }
        for(auto [x,y]:mp){
            if(y==1) return x;
        }
        return 0;
    }
};