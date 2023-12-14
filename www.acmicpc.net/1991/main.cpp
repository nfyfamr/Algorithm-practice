#include<iostream>
#include<vector>
using namespace std;

struct Node
{
    char val;
    Node *left;
    Node *right;
};

// mode: preorder = 0, inorder = 1, postorder = 2
void dfs(Node *root, int mode)
{
    if (mode == 0) cout << root->val;
    if (root->left != nullptr) dfs(root->left, mode);
    if (mode == 1) cout << root->val;
    if (root->right != nullptr) dfs(root->right, mode);
    if (mode == 2) cout << root->val;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<Node> nodes(26, {0, nullptr, nullptr});
    char c, l, r;
    for (int i = 0; i < n; ++i)
    {
        cin >> c >> l >> r;
        nodes[c - 'A'].val = c;
        nodes[c - 'A'].left = &nodes[l - 'A'];
        nodes[c - 'A'].right = &nodes[r - 'A'];

        if (l != '.')
            nodes[l - 'A'].val = l;
        if (r != '.')
            nodes[r - 'A'].val = r;
    }

    dfs(&nodes[0], 0);
    cout << '\n';
    dfs(&nodes[0], 1);
    cout << '\n';
    dfs(&nodes[0], 2);
}
