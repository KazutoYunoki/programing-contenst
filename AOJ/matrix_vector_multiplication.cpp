#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, m;
    cin >> n >> m;

    //m×nの2次元配列
    int a[n][m];
    vector<int> b(m);

    int sum = 0;

    rep(i, n)
    {
        rep(j, m)
        {
            cin >> a[i][j];
        }
    }
    rep(i, m)
    {
        cin >> b.at(i);
    }

    rep(i, n)
    {
        rep(j, m)
        {
            sum += a[i][j] * b.at(j);
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}