/*606. Construct String from Binary Tree*/
class Solution {
public:
    string tree2str(TreeNode* root) {
        string str="";
        newfunc(root,str);
        return str;
    }
    void newfunc(TreeNode* root,string &str)
    {
        if(root==NULL)
        {
            return;
        }
        str += to_string(root->val);
        if(root->left||root->right)
        {
            str+='(';
            newfunc(root->left,str);
            str+=')';
        }
        if(root->right)
        {
            str+='(';
            newfunc(root->right,str);
            str+=')';
        }
    }
};

/*
Runtime
Details
7ms
Beats 94.36%of users with C++
Memory
Details
23.92MB
Beats 70.39%of users with C++*/