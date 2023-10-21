#include <bits/stdc++.h>
using namespace std;
int t;
int sudo[11][11], vis[11][11];
int in();
int dfs(int x, int y)
{

    return 0;
}
int main()
{
    in();


}



int in(){
    for (int x = 1; x <= 9; x++)
    {
        for (int y = 1; y <= 9; y++)
        {
            cin >> t;
            if(t){
                sudo[x][y] = t;
                vis[x][y] = 1;

            }
            else{
                vis[x][y] = 0;

            }
        }
    }
    return 0;
}