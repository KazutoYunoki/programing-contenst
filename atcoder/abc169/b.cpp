#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;

    long long result = 1;
    long long limit = pow(10, 18);
    vector<long long> a(N);

    rep(i, N)
    {
        cin >> a.at(i);
        if (a.at(i) == 0)
        {
            cout << "0" << endl;
            return 0;
        }
    }

    rep(i, N)
    {

        if (a.at(i) <= limit / result)
        //これがresult * a.at(i) <= 10^18の条件
        {
            result *= a.at(i);
        }
        else
        {
            cout << "-1" << endl;
            return 0;
        }
    }

    cout << result << endl;
    return 0;
}