#include <iostream>
using namespace std;
int a[100010];
int b[100010];
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        b[i] = sum;
    }
    int x, y;
    while (cin >> x >> y)
    {
        cout << b[y] - b[x - 1] << endl;
    }
}