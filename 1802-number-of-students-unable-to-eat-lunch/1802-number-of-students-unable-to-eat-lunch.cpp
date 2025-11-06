class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int one = 0, zero = 0;
        for(auto val : students){
            if(val == 1) one++;
            else zero++;
        }

        for(int i=0; i<sandwiches.size(); i++){
            if(sandwiches[i] == 1){
                if(one == 0) return sandwiches.size() - i;
                else one--;
            }
            if(sandwiches[i] == 0){
                if(zero == 0) return sandwiches.size() - i;
                else zero--;
            }
        }
        return 0;
    }
};