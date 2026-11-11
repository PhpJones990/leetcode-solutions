/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int carry = 0; 
    struct ListNode result; 
    result.val = 0; 
    result.next = NULL; 
    struct ListNode* current = &result; 

    while (l1 != NULL || l2 != NULL || carry != 0) 
    {
        int add = 0; 
        if (l1 != NULL) 
        {
            add += l1->val; 
            l1 = l1->next; 
        }
        if (l2 != NULL) 
        {
            add += l2->val; 
            l2 = l2->next; 
        }
        add += carry; 
        carry = add / 10; 
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode)); 
        newNode->val = add % 10; 
        newNode->next = NULL; 
        current->next = newNode; 
        current = current->next; 
    }

    return result.next;
}