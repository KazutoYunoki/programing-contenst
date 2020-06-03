#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int A[3][3];
    bool result[3][3] = {false};
    rep(i, 3)
    {
        rep(j, 3)
        {
            cin >> A[i][j];
        }
    }
    int N;
    cin >> N;

    vector<int> b(10);

    rep(i, N)
    {
        cin >> b[i];
        rep(j, 3)
        {
            rep(k, 3)
            {
                if (A[j][k] == b[i])
                {
                    result[j][k] = true;
                }
            }
        }
    }
    string ans = "No";
    rep(i, 3)
    {
        if (result[i][0] && result[i][1] && result[i][2] == true)
        {
            ans = "Yes";
        }
    }
    rep(i, 3)
    {
        if (result[0][i] && result[1][i] && result[2][i] == true)
        {
            ans = "Yes";
        }
    }
    if (result[0][0] && result[1][1] && result[2][2] == true)
    {
        ans = "Yes";
    }
    if (result[2][0] && result[1][1] && result[0][2] == true)
    {
        ans = "Yes";
    }

    cout << ans << endl;

    return 0;
}