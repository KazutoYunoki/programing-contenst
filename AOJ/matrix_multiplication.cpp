#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, m, l;
    cin >> n >> m >> l;
    int a[n][m];
    int b[m][l];

    long long re[n][l];
    rep(i, n)
    {
        rep(j, l)
        {
            re[i][j] = 0;
        }
    }

    rep(i, n)
    {
        rep(j, m)
        {
            cin >> a[i][j];
        }
    }

    rep(i, m)
    {
        rep(j, l)
        {
            cin >> b[i][j];
        }
    }

    rep(i, n)
    {
        rep(j, l)
        {
            rep(k, m)
            {
                re[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    rep(i, n)
    {
        rep(j, l)
        {
            if (j != 0)
            {
                cout << " ";
            }
            cout << re[i][j];
        }
        cout << endl;
    }
    return 0;
}