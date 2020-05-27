#include <stdio.h>
#include <stdlib.h>

#define n 30

int main()
{
    int a[n + 1]; //グローバル空間で変数を定義するの良くないので関数内に

    int min;

    srand(1);

    for (int i = 1; i <= n; ++i)
    {
        a[i] = rand() % 10000;
    }

    printf("入力データ %d個\n", n);
    for (int i = 1; i <= n; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    /*↓解答
    Algorithm2はAlgorithm1の修正
    Algorithm1ではminの初期値に9999でそれより低かったらminの値更新
    つまり、全てのデータが9999より大きかったら適切な最小値ではない

    ここで、minの初期値に最初のデータの値を入れることで解決
    →Algorithm2の解答
    */

    min = a[1]; //最初のデータをminに代入
    for (int i = 2; i < n; ++i)
    {
        //a[i]のデータがminより小さかったらminに更新
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    //結果の出力
    printf("\n");
    printf("最小値 %d\n", min);

    return 0;
}
