/**

Definition of ListNode
class ListNode {
public:
int val;
ListNode *next;
ListNode(int val) {
    this->val = val;
    this->next = NULL;
}
}
*/
class Solution {
public:
/*
* @param l1: ListNode l1 is the head of the linked list
* @param l2: ListNode l2 is the head of the linked list
* @return: ListNode head of linked list
*/
ListNode * mergeTwoLists(ListNode * l1, ListNode * l2) {
// write your code here
if(l1 == NULL)
{
if(l2 == NULL)
{
return NULL;
}
else
{
return l2;
}

    }
    if(l2 == NULL)
    {
        if(l1 == NULL)
        {
            return NULL;
        }
        else
        {
            return l1;
        }
        
    }
    ListNode* res = NULL;
    ListNode* res1 =res;
    if(l1->val<l2->val)
    {
        res = l1;
        res1 = l1;
        l1 = l1->next;
    }
    else
    {
        res = l2;
        res1 = l2;
        l2 = l2->next;
    }
    while(l1 != NULL && l2 != NULL)
    {
        if(l1->val >l2->val)
        {
            res->next = l2;
            res = res->next;
            l2 = l2->next;
        }
        else
        {
            res->next = l1;
            res = res->next;
            l1 = l1->next;
        }
    }
    if(l1 == NULL)
    {
        res->next = l2;
    }
    else
    {
        res->next = l1;
    }
    return  res1;
}
};
