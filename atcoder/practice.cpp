#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int N;

  string rs;
  rs = s;

  N = s.size();
  reverse(rs.begin(), rs.end());
  if (s != rs)
  {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 0; i < (N - 1) / 2; ++i)
  {
    if (s.at(i) != s.at((N - 1) / 2 - 1 - i))
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
}
