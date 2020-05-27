#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    char s;
    int count[26] = {0};
    int num;

    //cin >> s はEOFで-1を返すctrl+z
    while ((s = getchar()) != EOF)
    {

        if (s >= 'a' && s <= 'z')
        {
            num = s - 'a';
            count[num]++;
        }
        else if (s >= 'A' && s <= 'Z')
        {
            num = s - 'A';
            count[num]++;
        }
    }

    rep(i, 26)
    {
        printf("%c : %d\n", 'a' + i, count[i]);
    }
    return 0;
}
