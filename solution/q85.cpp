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
     * @param node: insert this node into the binary search tree
     * @return: The root of the new binary search tree.
     */
    TreeNode * insertNode(TreeNode * root, TreeNode * node) {
        // write your code here
        if (root == NULL)
        {
            root = node;
            return root;
        }
        if(root->val < node->val)
        {
            if(root->right != NULL)
            {
                insertNode(root->right,node);
                return root;
            }
            else
            {
                root->right = node;
                return root;
            }
        }
        else
        {
              if(root->left != NULL)
            {
                 insertNode(root->left,node);
                 return root;
            }
            else
            {
                root->left = node;
                return root;
            }
        }
        
    }
};
