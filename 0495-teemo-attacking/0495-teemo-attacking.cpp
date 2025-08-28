class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = duration;
        for(int i=0;i<timeSeries.size()-1;i++){
            int x = timeSeries[i+1] - timeSeries[i];
            if(x < duration) ans += x;
            else ans += duration;
        }
        return ans;
    }
};