#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    if(n.at(n.size() - 1) == '3'){
        cout << "bon" << endl;
    }
    else if(n.at(n.size() - 1 ) == '0' || n.at(n.size() - 1) == '1' || n.at(n.size() - 1) == '6' || n.at(n.size() - 1) == '8'){
        cout << "pon" << endl;
    }
    else cout << "hon" << endl;

    return 0;
}