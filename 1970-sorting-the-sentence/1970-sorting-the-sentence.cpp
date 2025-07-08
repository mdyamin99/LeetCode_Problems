class Solution {
public:
    string sortSentence(string s) {
        vector<pair<int,string>> v;
        stringstream ss(s);
        string word;
        while(ss >> word){
            int val = (word.back() - '0');
            word.pop_back();
            v.push_back({val,word});
        }
        sort(v.begin(),v.end());
        string ans = "";
        for(int i=0;i<v.size();i++){
            string x = v[i].second;
            for(int j=0;j<x.size();j++){
                ans.push_back(x[j]);
            }
            if(i==v.size()-1) break;
            ans.push_back(' ');
        }
        return ans;
    }
};