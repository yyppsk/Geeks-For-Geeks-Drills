#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
void booleanMatrix(vector<vector<int>> &matrix)
{
    set<int> targetRows, targetCols;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 1)
            {
                targetCols.insert(j);
                targetRows.insert(i);
            }
        }
    }
    /*
    for (auto const &ele : targetRows)
    {
        cout << ele << " ";
    }
    cout << endl;
    for (auto const &ele : targetCols)
    {
        cout << ele << " ";
    }
    */
    for (auto const &ele : targetCols)
    {
        for (int k = 0; k < matrix.size(); k++)
        {
            matrix[k][ele] = 1;
        }
    }
    for (auto const &ele : targetRows)
    {
        for (int k = 0; k < matrix[0].size(); k++)
        {
            matrix[ele][k] = 1;
        }
    }
    /*
    cout << endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    */
}
int main()
{
    int R = 4, C = 3;
    vector<vector<int>> matrix{{1, 0, 0}, {1, 0, 0}, {1, 0, 0}, {0, 0, 0}};
    booleanMatrix(matrix);
    return 0;
}