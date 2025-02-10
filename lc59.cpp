#include <iostream>
#include <vector>
using namespace std;
vector<vector<int> > generateMatrix(int n) {
    vector<vector<int> >a(n, vector<int>(n, 0));
    int num = 1;
    int l = 0, t = 0, b = n - 1, r = n - 1;
    while (num <= n * n)    
    {
        for (int i = l; i <= r; i++)
        {
            a[t][i] = num++;
        }
        t++;
        for (int i = t; i <= b; i++)
        {
            a[i][r] = num++;
        }
        r--;
        for (int i = r; i >= l; i--)
        {
            a[b][i] = num++;
        }
        b--;
        for (int i = b; i >= t; i--)
        {
            a[i][l] = num++;
        }
        l++;
    }
    return a;
}
int main()
{

}