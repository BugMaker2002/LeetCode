#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool found = false;
        int h = matrix.size();
        int w = matrix[0].size();
        int i = h - 1, j = 0;
        while (i >= 0 && j <= w - 1)
        {
            if (matrix[i][j] > target) 
            {
                i --;
            }
            else if (matrix[i][j] < target)
            {
                j ++;
            }
            else
            {
                found = true;
                break;
            }
        }
        return found;
    }
};
int main()
{
    Solution solution;
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    cout << solution.searchMatrix(matrix, 5);
}