#include <bits/stdc++.h>
using namespace std;

string check_zero(vector<string> s, int j)
{
    int left, center, right;
    left = 4 * j - 3;
    center = 4 * j - 2;
    right = 4 * j - 1;

    if (s.at(1).at(center) == '.' &&
        s.at(2).at(center) == '.' &&
        s.at(3).at(center) == '.' &&
        s.at(3).at(left) == '#')
    {
        return "0";
    }
    if (s.at(0).at(left) == '.' &&
        s.at(0).at(right) == '.' &&
        s.at(1).at(right) == '.' &&
        s.at(2).at(left) == '.' &&
        s.at(2).at(right) == '.' &&
        s.at(3).at(left) == '.' &&
        s.at(3).at(right) == '.')
    {
        return "1";
    }
    if (s.at(1).at(left) == '.' &&
        s.at(1).at(center) == '.' &&
        s.at(3).at(center) == '.' &&
        s.at(3).at(right) == '.')
    {
        return "2";
    }
    if (s.at(1).at(left) == '.' &&
        s.at(1).at(center) == '.' &&
        s.at(3).at(left) == '.' &&
        s.at(3).at(center) == '.' &&
        s.at(2).at(left) == '#')
    {
        return "3";
    }
    if (s.at(0).at(center) == '.' &&
        s.at(1).at(center) == '.' &&
        s.at(3).at(left) == '.' &&
        s.at(3).at(center) == '.' &&
        s.at(4).at(left) == '.' &&
        s.at(4).at(center) == '.')
    {
        return "4";
    }

    if (s.at(1).at(center) == '.' &&
        s.at(1).at(right) == '.' &&
        s.at(3).at(center) == '.' &&
        s.at(3).at(left) == '.')
    {
        return "5";
    }

    if (s.at(1).at(center) == '.' &&
        s.at(1).at(right) == '.' &&
        s.at(3).at(center) == '.')
    {
        return "6";
    }

    if (s.at(0).at(left) == '#' &&
        s.at(0).at(center) == '#' &&
        s.at(0).at(right) == '#' &&
        s.at(1).at(right) == '#' &&
        s.at(2).at(right) == '#' &&
        s.at(3).at(right) == '#' &&
        s.at(4).at(right) == '#' &&
        s.at(2).at(left) == '.')
    {
        return "7";
    }

    if (s.at(1).at(center) == '.' &&
        s.at(3).at(center) == '.' &&
        s.at(3).at(left) == '#' &&
        s.at(4).at(left) == '#')
    {
        return "8";
    }

    return "9";
}
int main()
{
    int N;
    cin >> N;
    vector<string> s(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> s.at(i);
    }
    for (int j = 1; j <= N; j++)
    {
        cout << check_zero(s, j);
    }
}
