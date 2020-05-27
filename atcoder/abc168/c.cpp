#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, H, M;
    cin >> A >> B >> H >> M;

    //長針の作る角度
    double long_make = H * 30 + M * 0.5; 
    //短針の作る角度
    double short_make =  M * 6;

    //角度
    double angle = abs(long_make - short_make);
    //弧度法
    angle = (angle * M_PI) / 180;

    //余弦定理
    double result = sqrt(A * A + B * B - 2 * A * B * cos(angle));

    printf("%.9lf\n", result);

    return 0;

}