#include<vector>
#include<queue>
#include<utility>
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

void input(vector<pair<int,int>> &v, int n) {
	for (int i = 0 ; i < n ; i++) {
		int x,y;
		cin >> x >> y;
		v.push_back({x,y});
	}
}

void dfs(int node, int &sum, vector<vector<int> > &g, vector<int> &vis) {
	vis[node] = 1;
	++sum;

	for (auto x : g[node]) {
		if (vis[x] == 0)
			dfs(x,sum,g,vis);
	}
}


int main() {
	int n;
	cin >> n;
	
	vector<pair<int,int> > v = {{1,2},{1,3},{2,4},{3,5},{7,8}};
	
	vector<int> vis(n+1,0);
	vector<vector<int> > g(n+1);

	for (auto x : v) {
		g[x.first].push_back(x.second);
		g[x.second].push_back(x.first);
	}


	int total_sum = 0;

	for (int i = 1 ; i <= n ; i++) {
		int sum = 0;
		if (vis[i] == 0) {
			dfs(i,sum,g,vis);
			cout << "sum " << sum << "\n";
			total_sum += ceil(sqrt(sum));
		}
	}

	cout << "Total Sum " << total_sum;
}



// photo album
vector<int> res;
int n=index.size();
for(int i=0;i<n;i++){
    if(index[i]>=res.size())
        res.push_back(identity[i]);
    else
        res.insert(res.begin()+index[i],identity[i]);
}
return res;


// py photo
mapper = {}

for i in range(len(arr)):
    curr_idx = arr[i]
    
    for j in range(i+1,len(arr)):
        
        if(curr_idx >= arr[j]):
            curr_idx +=1
            
    
    mapper[i] = (identity[i],curr_idx)
    
res = [0]*len(arr)

for k,v in mapper.items():
    val,idx = v
    res[idx] = val
    
print(res)


// max ticket
int maxTickets(vector<int> A) {
    sort(A.begin(), A.end());
    int s=0,ans=0;
    for(int i=1;i<A.size();i++)
    {
        if(A[i]-A[i-1]>1)
        {
            int curr_len=i-s;
            if(curr_len>ans) ans=curr_len;
            s=i;
        }
        
    }
    if(A.size()-s>ans) return A.size()-s;
    else return ans;
    //(A.size()-s,ans);

}

// graph
void dfs(vector<int> adj[], vector<bool> &visited, int i, int* val) {
    visited[i] = true;
    *val = *val + 1; 
    for (int k=0;k<adj[i].size();k++) {
        int node = adj[i][k];
        if (!visited[node]) {
            dfs(adj, visited, node, val);
        }
    }
}

int connectedSum(int graph_nodes,vector<int> &graph_from,vector<int> &graph_to) {
    int n = graph_nodes;
    int m = graph_from.size();
    vector<int> adj[graph_nodes];
    vector<bool> visited(n, false);
    int ans = 0;

    for (int i=0; i<m; i++) {
        adj[graph_from[i] - 1].push_back(graph_to[i] - 1);
        adj[graph_to[i] - 1].push_back(graph_from[i] - 1);
    }

    for (int i=0; i<n; i++) {
        if (!visited[i]) {
            int val = 0;
            dfs(adj, visited, i, &val);
            ans += ceil(sqrt(val));
        }
    }
    return ans;
}