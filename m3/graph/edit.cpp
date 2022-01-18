#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define LD long double

const int N = 200010;

int inf = 1e9;
int mod = 1e9 + 7;

vector<int> graph[N];

pair<int,int> bfs(int cur, int n, vector<int> &level) {
    level.assign(n + 1, -1);

    queue<int> q;
    level[cur] = 1;
    q.push(cur);

    int last = cur;

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        last = u;
        for(int v : graph[u]) {
            if(level[v] == -1) {
                level[v] = level[u] + 1;
                q.push(v);
            }
        }
    }

    return {last, level[last]};
}

signed main()
{
    //freopen("IN", "r", stdin);
    //freopen("OUT", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    for(int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> level1, level2;

    pair<int,int> it = bfs(1, n, level1);
    it = bfs(it.first, n, level1);
    it = bfs(it.first, n, level2);

    int len = it.second;

    if(len % 2 == 0) {
        cout << "-1\n";
        return 0;
    }

    int ans = -2;

    for(int i = 1; i <= n; i++) {
        if(level1[i] + level2[i] - 1 == len && level1[i] == (len + 1) / 2 && level2[i] == (len + 1) / 2) {
            assert(ans == -2);
            ans = i;
        }
    }

    cout << ans << "\n";

    return 0;
}