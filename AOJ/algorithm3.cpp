#include <stdio.h>
#include <stdlib.h>

#define n 30

/*再帰関数を用いて最小値を取り出す関数
引数はデータが入っている配列aと個数i
あとはプリントに書いてあったように作成
関数名Minだとコンパイラに怒られたので適当に変更してあります
*/
int min_func(int a[], int i)
{
    if (i == 1)
    {
        return a[1];
    }
    else
    {
        if (a[i] < min_func(a, i - 1))
        {
            return a[i];
        }
        else
        {
            return min_func(a, i - 1);
        }
    }
}

int main()
{
    int a[n + 1]; //あんまり変数をグローバル空間で定義しない方が良いため関数内に
    int i;
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

    //関数呼び出し
    min = min_func(a, n);

    //結果の出力
    printf("\n");
    printf("最小値 %d\n", min);

    return 0;
}
