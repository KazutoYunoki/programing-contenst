
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    long long K;
    map<int, int> A;
    cin >> N >> K;
    int te;
    int location = 1;

    for(int i = 0; i < N; i++){
        cin >> te;
        A[i + 1] = te;
    }

    for(int i = 0; i < K; i++)
    {
        location = A.at(location);
    }

    cout << location << endl;
}