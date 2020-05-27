#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    if (s == t)
    {
        cout << "same" << endl;
        return 0;
    }
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    transform(t.begin(), t.end(), t.begin(), ::toupper);

    if (s == t)
    {
        cout << "case-insensitive" << endl;
        return 0;
    }
    else
        cout << "different" << endl;
}