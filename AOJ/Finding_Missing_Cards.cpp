#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int value;
    string mark;

    vector<vector<int>> cards(4, vector<int>(13, 0));

    for (int i = 0; i < n; i++)
    {
        cin >> mark >> value;
        if (mark == "S")
        {
            cards.at(0).at(value - 1) = true;
        }
        else if (mark == "H")
        {
            cards.at(1).at(value - 1) = true;
        }
        else if (mark == "C")
        {
            cards.at(2).at(value - 1) = true;
        }
        else
        {
            cards.at(3).at(value - 1) = true;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            if (cards.at(i).at(j) == 0)
            {
                if(i == 0){
                    cout << "S" << " " << j + 1 <<  endl;
                }
                else if(i == 1){
                    cout << "H" << " " << j + 1 << endl;
                }
                else if(i == 2){
                    cout << "C" << " " << j + 1 << endl;
                }
                else {
                    cout << "D" << " " << j + 1 << endl;
                }
            }
        }
    }

    return 0;
}
