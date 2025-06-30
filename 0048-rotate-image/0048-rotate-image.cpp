class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> temp(matrix.size(), vector<int>(matrix.size()));

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix.size(); j++)
            {
                temp[i][j] = matrix[j][i];
            }
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            reverse(temp[i].begin(), temp[i].end());
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix.size(); j++)
            {
                matrix[i][j] = temp[i][j];
            }
        }

    }
};