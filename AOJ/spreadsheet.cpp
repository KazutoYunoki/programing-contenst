#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int r, c;
    cin >> r >> c;

    //m×nの2次元配列
    int table[r + 1][c + 1];

    int sum_row = 0;
    int sum_colomn = 0;
    int sum_total = 0;

    rep(i, r)
    {
        rep(j, c)
        {
            cin >> table[i][j];
        }
    }
    rep(i, r)
    {
        rep(j, c)
        {
            sum_row += table[i][j];
            sum_total += table[i][j];
        }
        table[i][c] = sum_row;
        sum_row = 0;
    }
    rep(i, c)
    {
        rep(j, r)
        {
            sum_colomn += table[j][i];
        }
        table[r][i] = sum_colomn;
        sum_colomn = 0;
    }
    table[r][c] = sum_total;
    rep(i, r + 1)
    {
        rep(j, c + 1)
        {
            if (j != 0)
            {
                cout << " ";
            }
            cout << table[i][j];
        }
        cout << endl;
    }

    return 0;
}