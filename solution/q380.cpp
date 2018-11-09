/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <stack>
class Solution {
public:
    /*
     * @param headA: the first list
     * @param headB: the second list
     * @return: a ListNode
     */
    ListNode * getIntersectionNode(ListNode * headA, ListNode * headB) {
        // write your code here
        
        vector<ListNode*>ss;
        ListNode* headAA = headA;
        ListNode* headBB = headB;
        while(headAA != NULL)
        {
            ss.push_back(headAA);
            headAA = headAA->next;
        }
        
        while(headBB != NULL)
        {
            if(find(ss.begin(),ss.end(),headBB) != ss.end())
            {
                return headBB;
            }
            else
            {
                headBB = headBB->next;
            }
        }
        return NULL;
    }
};
