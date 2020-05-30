#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    long long n;
    long long a, b;

    long long amari_blue;

    cin >> n >> a >> b;

    long long num = n / (a + b);
    //cout << num << endl;

    long long amari = n % (a + b);
    //cout << amari << endl;

    if (amari < a)
    {
        amari_blue = amari;
    }
    else
    {
        amari_blue = a;
    }

    cout << num * a + amari_blue << endl;

    return 0;
}
