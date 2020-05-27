#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string s;
    while (1)
    {

        int sum = 0;

        cin >> s;
        if (s == "0")
        {
            break;
        }
        rep(i, s.size())
        {
            sum += s.at(i) - '0';
        }
        cout << sum << endl;
    }
    return 0;
}