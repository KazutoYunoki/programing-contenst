#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a; //初項
    int r; //公比
    int n; //N項

    cin >> a >> r >> n;

    long long an;
    an = a * pow(r, (n - 1));
    long long lim = pow(10, 9);
    if (an >= 0 && an <= lim)
    {
        cout << an << endl;
    }
    else
        cout << "large" << endl;
}