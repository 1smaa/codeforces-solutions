#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <algorithm>
#include <queue>

#define ll long long
#define INF 0x3f3f3f3f
#define MINF 0xf3f3f3f3
#define IPAIR pair<int,int>
using namespace std;

struct TreeNode{
    TreeNode* left;
    TreeNode* right;
    TreeNode* parent;
    int val;
    TreeNode(): val(0), left(nullptr), right(nullptr), parent(nullptr){};
    TreeNode(int val): val(val), left(nullptr), right(nullptr), parent(nullptr){};
    TreeNode(int val,TreeNode* left,TreeNode* right): val(val), left(left), right(right), parent(nullptr){};
};

TreeNode* build(vector<int>& a,int l,int r,vector<TreeNode*>& leaves){
    if(l==r) {
        TreeNode* leaf=new TreeNode(a[l]);
        leaves.push_back(leaf);
        //cout<<l<<" "<<r<<":"<<leaf->val<<endl;
        return leaf;
    } else{
        TreeNode* node=new TreeNode();
        TreeNode* left=build(a,l,(l+r)/2,leaves);
        TreeNode* right=build(a,((l+r)/2)+1,r,leaves);
        node->val=max(left->val,right->val);
        left->parent=node;
        right->parent=node;
        node->left=left;
        node->right=right;
        //cout<<l<<" "<<r<<":"<<node->val<<endl;
        return node;
    }
}

void update(TreeNode* root, int index, int updateValue, vector<TreeNode*>& leaves) {
    leaves[index]->val = updateValue; 
    TreeNode* leaf = leaves[index];
    while (leaf->parent) {
        leaf->parent->val = max(leaf->parent->left->val, leaf->parent->right->val);
        leaf = leaf->parent;
    }
}

int main(void){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n,0);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<TreeNode*> leaves{};
        TreeNode* root=build(a,0,n-1,leaves);
        vector<int> res{};
        while(m--){
            char c;
            int l,r;
            cin>>c>>l>>r;
            for(int i=max(l,0);i<=min(r,n-1);i++) update(root,i,(c=='+' ?  leaves[i]->val+1 : leaves[i]->val-1),leaves);
            for(int i=0;i<leaves.size();i++) cout<<leaves[i]->val<<" ";
            cout<<endl;
            res.push_back(root->val);
        }
        for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}