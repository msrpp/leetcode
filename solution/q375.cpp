class Solution {
public:
    /*
     * @param root: The root of binary tree
     * @return: root of new tree
     */
int cloneTree(TreeNode* root,TreeNode** res) 
{
	// write your code here
/*	TreeNode* res = *res1;*/
	if(root == NULL)
	{
		return 0;
	}
	*res = new TreeNode(root->val);
	(*res)->left = NULL;
	(*res)->right =NULL;
	if(NULL != root)
	{
		cloneTree(root->left,&(*res)->left);
	}
	if(NULL != root)
	{
		cloneTree(root->right,&(*res)->right);
	}
}

TreeNode* cloneTree(TreeNode* root)
{
	// write your code here
	TreeNode * res = NULL;
	cloneTree(root,&res);
	return res;
}
    
};
