class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> mp;
        int ans = 0, cnt = 0;
        for(int v:nums){
            mp[v]++;
        }
        int val = 0;
        for(auto [x,y]:mp){
            if(cnt == 0){
                val=x;
                cnt++;
            }
            else{
                if(abs(val-x)==1){
                    ans = max(ans, mp[val] + y);
                }
            }
            val = x;
        }
        return ans;
    }
};