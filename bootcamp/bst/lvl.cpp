#include <bits/stdc++.h>

using namespace std;

struct Node {
    int val;
    Node *left, *right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> getLevelorderTraversal(Node* root) {
  // Complete the function.
    
    vector< vector<int>> ans;
    if(!root) return ans;
    queue <Node*> q;
    q.push(root);
    vector<int> t;
    
    while(!q.empty())
    {
    	int sz = q.size();

    	while(sz--)
    	{
        	Node *temp = q.front();
        	q.pop();

        	t.push_back(temp->val);
        
        	if(temp->left)
        	q.push(temp->left);
        
        	if(temp->right)
        	q.push(temp->right);
    	
    	}
    	ans.push_back(t);
    	t.clear();
    }
    return ans;
}

Node* getBinaryTree(vector<int> &num, int*ind) {
    if(num[*ind] == -1)
        return NULL;
    Node* node = new Node(num[*ind]);
    (*ind)++;
    node->left = getBinaryTree(num,ind);
    (*ind)++;
    node->right = getBinaryTree(num,ind);
    return node;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        assert(n<=1000000);
        vector<int>arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int ind = 0;
        Node* tree = getBinaryTree(arr,&ind);
        vector<vector<int>> ans = getLevelorderTraversal(tree);
        for(auto u:ans){
            for(auto v:u){
                cout<<v<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}