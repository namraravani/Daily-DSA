#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{

    vector<vector<int>> cpy_matrix;
    for (int i = 0; i < matrix.size(); i++)
    {
        vector<int> row;
        for (int j = matrix.size() - 1; j >= 0; j--)
        {
            row.push_back(matrix[j][i]);
        }
        cpy_matrix.push_back(row);
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            matrix[i][j] = cpy_matrix[i][j];
        }
    }
}

int main()
{
    
    return 0;
}