#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;

    while (true)
    {
        cin >> h >> w;
        if(h == 0 && w == 0){
            break;
        }
        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= w; j++)
            {
                if (i == 1 or i == h)
                {
                    cout << "#";
                }
                else if (j == 1 or j == w)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}