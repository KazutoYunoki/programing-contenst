#include <bits/stdc++.h>
using namespace std;

int main()
{
    //人数、問題数、クエリ数
    int N, M, Q;
    cin >> N >> M >> Q;

    //参加者の得点を格納する配列
    vector<int> people(N, 0);
    //参加者の解いた問題を格納する配列
    bool problem[N][M] = {false};
    //問題の得点を格納する配列
    vector<int> problem_score(M, N);

    int s;
    int n;
    int m;
    vector<int> result;
    int score = 0;
    for (int i = 0; i < Q; ++i)
    {
        cin >> s;

        if (s == 1)
        {
            cin >> n;

            for (int i = 0; i < M; i++)
            {
                if (problem[n - 1][i] == true)
                {
                    score += problem_score.at(i);
                }
            }

            result.push_back(score);
            score = 0;
        }
        else
        {
            //参加者nが問題mを解いた
            cin >> n >> m;
            problem[n - 1][m - 1] = true;
            problem_score.at(m - 1) -= 1;
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result.at(i) << endl;
    }

    return 0;
}