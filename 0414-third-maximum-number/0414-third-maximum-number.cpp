class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int,greater<int>> st(nums.begin(),nums.end());
        if(st.size() < 3) return *st.begin();
        else{
            st.erase(*st.begin());
            st.erase(*st.begin());
            return *st.begin();
        }
    }
};