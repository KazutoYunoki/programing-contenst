#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string result;
    int k;
    cin >> k >> s;

    if(s.size() <= k){
        cout << s << endl;
    }
    else{
        for(int i = 0; i < k; i++){
            result.push_back(s.at(i));
        }
        result.push_back('.');
        result.push_back('.');
        result.push_back('.');
        
        cout << result << endl;
    }
    return 0;
}