#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s,t;
    cin >> s;
    cin >> t;

    if(t.erase(t.size() -1) == s){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;

}