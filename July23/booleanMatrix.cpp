#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void booleanMatrix(vector<vector<int>> &matrix)
{
    vector<int> targetRows, targetCols;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 1)
            {
                targetCols.push_back(j);
                targetRows.push_back(i);
            }
        }
    }
    for (auto const &ele : targetRows)
    {
        cout << ele << " ";
    }
}
int main()
{
    int R = 4, C = 3;
    vector<vector<int>> matrix{{1, 0, 0}, {1, 0, 0}, {1, 0, 0}, {0, 0, 0}};
    booleanMatrix(matrix);
    return 0;
}