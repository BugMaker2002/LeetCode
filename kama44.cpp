#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> >zone(n, vector<int>(m, 0));
    vector<int>p(n, 0);
    vector<int>q(m, 0);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> zone[i][j];
            sum1 += zone[i][j];
            sum2 += zone[i][j];
            q[j] += sum2;
        }
        sum2 = 0;
        p[i] = sum1;
    }
    int minVal = INT32_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        int val = abs(p[n - 1] - 2 * p[i]);
        minVal = val < minVal ? val : minVal;
    }
    for (int j = 0; j < m - 1; j++)
    {
        int val = abs(q[m - 1] - 2 * q[j]);
        minVal = val < minVal ? val : minVal;
    }
    cout << minVal << endl;
}