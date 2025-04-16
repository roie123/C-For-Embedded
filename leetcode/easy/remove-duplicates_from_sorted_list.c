/*

Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.



Example 1:


Input: head = [1,1,2]
Output: [1,2]
Example 2:


Input: head = [1,1,2,3,3]
Output: [1,2,3]


Constraints:

The number of nodes in the list is in the range [0, 300].
-100 <= Node.val <= 100
The list is guaranteed to be sorted in ascending order.



 */


#include <stddef.h>
#include <stdio.h>
/**
 * Definition for singly-linked list.
  struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };*
 */
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *deleteDuplicates(struct ListNode *head) {
    struct ListNode *dummy = head;
    struct ListNode *prev = head;
    if (head==NULL ||head->next == NULL) {
        return head;
    }
    struct ListNode *curr = head->next;

    while (curr != NULL) {
        printf("%d ", curr->val);
        if (curr->val == prev->val) {
            if (curr->next == NULL) {//is the end of the list
                prev->next=NULL;
                return head;
                break;
            }else {//is not the end
                dummy=curr;
                while (dummy!=NULL && dummy->val == prev->val) {
                    dummy = dummy->next;
                }
                if (dummy!=NULL &&  dummy->next == NULL) {
                    prev->next = dummy;
                    return head;
                }
                if (dummy==NULL) {
                    prev->next = NULL;
                    return head;
                }
                curr = dummy->next;
                prev->next = dummy;
                prev = prev->next;
                continue;

            }

        }else {
            prev=prev->next;
            curr = curr->next;
        }




    }
    return head;
}


int main() {
}
