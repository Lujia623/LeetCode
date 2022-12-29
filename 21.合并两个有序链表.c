/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#define min(a,b)    ((a)>(b)?(b):(a))
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *new_node = NULL;
    if(list1==NULL)
    {
        return list2;
    }
    if(list2==NULL)
    {
        return list1;
    }
    new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
    new_node->val = min(list1->val, list2->val);
    if((list1->val)>(list2->val))
    {
        list2 = list2->next;
    }
    else{
        list1 = list1->next;
    }
    new_node->next = mergeTwoLists(list1, list2);

    return new_node;
}
// @lc code=end

