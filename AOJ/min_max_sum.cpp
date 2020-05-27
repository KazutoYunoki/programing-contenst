#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    long long sum = 0;
    int min, max;

    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a.at(i);
        sum += a.at(i);
    }
    sort(a.begin(), a.end());
    min = a.at(0);

    reverse(a.begin(), a.end());
    max = a.at(0);

    cout << min << " " << max << " " << sum << endl;
}
