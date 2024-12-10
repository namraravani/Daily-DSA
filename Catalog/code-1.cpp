#include <bits/stdc++.h>
#include "json.hpp"

using namespace std;

using json = nlohmann::json;

// Function to solve for the constant term using Gaussian Elimination
double solveForConstant(vector<vector<double>> matrix)
{
    int n = matrix.size();

    // Forward Elimination
    for (int i = 0; i < n; ++i)
    {
        double pivot = matrix[i][i];
        for (int j = i; j <= n; ++j)
        {
            matrix[i][j] /= pivot;
        }
        for (int k = i + 1; k < n; ++k)
        {
            double factor = matrix[k][i];
            for (int j = i; j <= n; ++j)
            {
                matrix[k][j] -= factor * matrix[i][j];
            }
        }
    }

    // Back Substitution to extract the solution
    vector<double> solution(n);
    for (int i = n - 1; i >= 0; --i)
    {
        solution[i] = matrix[i][n];
        for (int j = i + 1; j < n; ++j)
        {
            solution[i] -= matrix[i][j] * solution[j];
        }
    }

    // The constant term (c) is the last solved coefficient
    return solution[n - 1];
}

// Function to convert a number from any base to base 10
int convertToBase10(const string &value, int base)
{
    int result = 0, place = 1;
    for (int i = value.size() - 1; i >= 0; --i)
    {
        int digit = value[i] - '0';
        result += digit * place;
        place *= base;
    }
    return result;
}

int main()
{
    string jsonInput;
    cout << "Enter the JSON input: ";
    getline(cin, jsonInput);

    json parsed = json::parse(jsonInput);

    int n = parsed["keys"]["n"];
    int k = parsed["keys"]["k"];

    map<int, pair<int, string>> equations;
    for (auto &[key, value] : parsed.items())
    {
        if (key != "keys")
        {
            int x = stoi(key);
            int base = value["base"];
            string y = value["value"];
            equations[x] = {base, y};
        }
    }

    // Setup the matrix for Gaussian Elimination
    vector<vector<double>> matrix(n, vector<double>(k + 1));

    int row = 0;
    for (const auto &[x, data] : equations)
    {
        int base = data.first;
        string value = data.second;
        int y = convertToBase10(value, base);
        for (int col = 0; col < k; ++col)
        {
            matrix[row][col] = pow(x, k - col - 1);
        }
        matrix[row][k] = y;
        row++;
    }

    // Solve for the constant term
    double constant = solveForConstant(matrix);

    cout << "The constant term (c) is: " << constant << endl;
    return 0;
}
