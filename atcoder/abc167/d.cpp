#include<bits/stdc++.h>
using namespace std;

int main()
{

    int N, M, X;
    cin >> N >> M >> X;
    vector<int> C(N);
    vector<vector<int>> A(N, vector<int>(M));

    int cnt = 0;

    for(int i = 0; i < N; i++){
        cin >> C.at(i);
        for(int j = 0; j < M; j++){
            cin >> A.at(i).at(j);
        }
    }
    bool flag = true;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j){
            cnt += A.at(j).at(i);
            if(cnt <= 10){
                flag = false;
                break;
            }
        }
        if(flag == false){
            break;
        }
    }
     cout << "-1" << endl;
    
    return 0;
}