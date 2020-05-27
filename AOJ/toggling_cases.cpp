#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string re;
    for (int i = 0; i < s.size(); ++i)
    {
        if (islower(s.at(i)))
        {
            re.push_back(toupper(s.at(i)));
        }
        else
        {
            re.push_back(tolower(s.at(i)));
        }
    }
    cout << re << endl;
    return 0;
}