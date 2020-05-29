#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    string w, t;
    cin >> w;

    int count = 0;

    while (cin >> t)
    {

        if (t == "END_OF_TEXT")
        {
            break;
        }
        rep(i, t.size())
        {
            t.at(i) = tolower(t.at(i));
        }
        if (t == w)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}