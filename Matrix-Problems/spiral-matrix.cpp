#include <bits/stdc++.h>
using namespace std;

vector<int> PrintSpiralMatrix(vector<vector<int>> &matrix)
{
    int l = 0;
    int r = matrix[0].size() - 1;
    int t = 0;
    int b = matrix.size() - 1;

    int cnt = 0;
    int total = (r + 1) * (b + 1);

    vector<int> ans;
    while (cnt < total)
    {
        for (int i = l; cnt < total && i <= r; i++)
        {
            ans.push_back(matrix[t][i]);
            cnt++;
        }
        t++;
        for (int i = t; cnt < total && i <= b; i++)
        {
            ans.push_back(matrix[i][r]);
            cnt++;
        }
        r--;
        for (int i = r; cnt < total && i >= l; i--)
        {
            ans.push_back(matrix[b][i]);
            cnt++;
        }
        b--;
        for (int i = b; cnt < total && i >= t; i--)
        {
            ans.push_back(matrix[i][l]);
            cnt++;
        }
        l++;
    }

    return ans;
}

int main()
{

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<int> ans = PrintSpiralMatrix(matrix);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}