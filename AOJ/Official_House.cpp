#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int house [4][3][10] = {0};
    int b, f, r, v;

    for(int i = 0; i < n; i++){
        cin >> b >> f >> r >> v;
        house[b - 1][f - 1][r - 1] += v;
    }

    for(int i = 0; i < 4; i++){
        if (i > 0){
            cout << "####################" << endl;
        }
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 10; k++){
                cout << " " << house[i][j][k];
            }
            cout << endl;
        }
        
    }

}