/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param root: The root of the binary search tree.
     * @param A: A TreeNode in a Binary.
     * @param B: A TreeNode in a Binary.
     * @return: Return the least common ancestor(LCA) of the two nodes.
     */
     
     bool isIn(TreeNode* root , TreeNode*A)
     {
         if(root == A)
         {
             return true;
         }
         if (root == NULL)
         {
             if(A == NULL)
             {
                 return true;
             }
             return false;
         }
         return (isIn(root->left,A) || isIn(root->right ,A));
     }
    TreeNode * lowestCommonAncestor(TreeNode * root, TreeNode * A, TreeNode * B) {
        // write your code here
        if(root == NULL)
        {
            return NULL;
        }
        if(isIn(root->left,A))
        {
            if(isIn(root->left,B))
            {
                return lowestCommonAncestor(root->left,A,B);
            }
        }
        if(isIn(root->right,A))
        {
            if(isIn(root->right,B))
            {
                return lowestCommonAncestor(root->right,A,B);
            }
        }
        return root;

    }
};
