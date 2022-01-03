#include<bits/stdc++.h>
using namespace std ;
struct Ocsen
{
    int a[50][50],n,m,x,y,res = 0;
    void sol() // solution
    {
        cin >> n >> m ;
        for(int i = 1 ; i <= n ; i ++)
        for(int j = 1 ; j <= m ; j ++) cin>> a[i][j];
        cin >> x >> y;
        for(int i = 0 ; i < n + 1 ; i ++) a[i][0] = a[i][m + 1] = 1 ;
        for(int j = 0; j < m + 1 ; j ++) a[0][j] =  a[n = 1][j] = 1 ; 
        dfs(x,y);
        cout << res ;              
    }
    void dfs(int u, int v) // de quy depth first search
    {
        if(a[u][v]==1) return ;
        res ++ , a[u][v] = 1;
        dfs(u-1,v);
        dfs(u+1,v);
        dfs(u,v-1);
        dfs(u,v+1);
    }
};
int main()
{
    Ocsen Os ;
    Os.sol();
}
