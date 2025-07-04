class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> v(score.begin(),score.end());
        sort(v.begin(),v.end(),greater<int>());
        map<int,int> mp;
        for(int i=0;i<score.size();i++){
            mp[v[i]] = i+1;
        }
        vector<string> ans;
        for(int i=0;i<score.size();i++){
            if(mp[score[i]] == 1) ans.push_back("Gold Medal");
            else if(mp[score[i]] == 2) ans.push_back("Silver Medal");
            else if(mp[score[i]] == 3) ans.push_back("Bronze Medal");
            else{
                ans.push_back(to_string(mp[score[i]]));
            }
        }
        return ans;
    }
};