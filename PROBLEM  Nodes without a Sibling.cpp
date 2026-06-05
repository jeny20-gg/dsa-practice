\\PROBLEM : Nodes without a Sibling
\\PLATFORM : GeeksforGeeks
\\DIFFICULTLY : Easy


/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
void helper(Node* root,vector<int> &res) {
    if(root==NULL) return;
    if(root->left && !root->right) 
    res.push_back(root->left->data);
    if(root->right && !root->left)
    res.push_back(root->right->data);
    helper(root->left,res);
    helper(root->right,res);
}

vector<int> noSibling(Node* node) {
    // code here
    vector<int> res;
    helper(node,res) ;
    if(res.empty()) return {-1};
    sort(res.begin(),res.end());
    return res;
}