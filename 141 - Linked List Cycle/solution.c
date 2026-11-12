/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if (head == NULL) return false; 
    struct ListNode *fast = head, *slow = head; 

    while (fast->next != NULL) 
    {
        fast = fast->next; 
        if (fast->next == NULL) break; 
        fast = fast->next; 
        slow = slow->next; 
        if (fast == slow) return true; 
    } 

    return false;

     
}