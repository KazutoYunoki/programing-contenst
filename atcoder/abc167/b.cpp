#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, k;
    cin >> a >> b >> c >> k;

    int cnt = 0;

    if(k <= a){
        cout << k << endl;
    }
    else if(k <= a + b){
        cout << a << endl;

    }
    else{
        cnt = k - (a + b);
        cout << a - cnt << endl;
    }
    return 0;
}