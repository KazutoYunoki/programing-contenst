#include<bits/stdc++.h>
using namespace std;
const int INF = 1001001001;

int main()
{
    int M, N; cin >> N >> M;

    //グラフのデータ構造
    vector<int> G[100005];
    for(int i = 0;  i < M; ++i){
        int A, B;
        cin >> A >> B;
        A--; B--;
        //隣接するグラフの頂点を格納 G[A]という頂点に追加することで二次元配列になる。
        G[A].push_back(B);
        G[B].push_back(A);
    }  

    //BFSのためのデータ構造
    vector<int> dist(N, INF); //頂点が－1二なら未訪問
    queue<int> que;
    vector<int> pre(N, -1);

      //初期条件（頂点0を初期ノード
    dist[0] = 0;
    que.push(0);

    while(!que.empty()){
        int v = que.front(); //キューから先頭を取り出す
        que.pop();

        //頂点vから辿れる頂点を全て調べる
        for(int nv : G[v]){
            //訪問済みの頂点は探索しない。
            if(dist[nv] != INF) continue;

            //新たな頂点について距離情報を更新してキューを追加
            dist[nv] = dist[v] + 1;
            pre[nv] = v;
            que.push(nv);
        }
    }
    //出力結果（各頂点空の距離を見る）
    cout << "Yes" << endl;
    for (int i = 0; i < N; ++i){
        if(i == 0) continue;
        cout << dist[i] << endl;
    } 
  

    return 0;
}