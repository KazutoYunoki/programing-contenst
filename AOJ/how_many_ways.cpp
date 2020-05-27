#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int n, x;
    int cnt = 0;

    while (1)
    {
        cin >> n >> x;
        if (n == 0 && x == 0)
        {
            break;
        }

        for (int i = 1; i <= n; ++i)
        {
            for (int j = i + 1; j <= n; j++)
            {
                for (int k = j + 1; k <= n; k++)
                {
                    if (i + j + k == x)
                    {
                        ++cnt;
                    }
                }
            }
        }
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}