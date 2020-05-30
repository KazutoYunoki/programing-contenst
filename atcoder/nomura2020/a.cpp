#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int h1, m1, h2, m2, k;
    cin >> h1 >> m1 >> h2 >> m2 >> k;

    int h = h2 - h1; //起きてる時

    int m = m2 - m1;
    if (m < 0)
    {
        m = 60 + m;
        h--;
    }

    int result = h * 60 + m;

    cout << result - k << endl;
    return 0;
}