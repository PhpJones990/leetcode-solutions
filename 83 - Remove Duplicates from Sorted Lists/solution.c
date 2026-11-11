/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode result; 
    result.val = 101; 
    result.next = NULL;   
    struct ListNode* build = &result; 

    while (head != NULL) 
    {
        if (build->val != head->val) 
        {
            build->next = head; 
            build = build->next; 
        }
        head = head->next; 
    } 
    build->next = NULL; 
    return result.next; 
}