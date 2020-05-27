#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    cin >> q;

    int qu;

    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = n * (i - 1) + j - 1;
        }
    }

    /*
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    cout << a[1][1] << endl;
    cout << a[1][2] << endl;
    return 0;
    */
}