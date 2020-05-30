#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string t;
    cin >> t;
    long num = (long)t.size() - 1;
    rep(i, t.size())
    {
        if (t.at(i) == '?')
        {
            if (i == 0)
            {
                if (t.at(i + 1) == 'P')
                {
                    t.at(i) = 'D';
                }
                else
                    t.at(i) = 'D';
            }
            else if (i == num)
            {
                t.at(i) = 'D';
            }
            else
            {
                if (t.at(i - 1) == 'P')
                {
                    t.at(i) = 'D';
                }
                else if (t.at(i + 1) == 'P')
                {
                    t.at(i) = 'D';
                }
                else
                {
                    t.at(i) = 'D';
                }
            }
        }
    }
    cout << t << endl;
    return 0;
}