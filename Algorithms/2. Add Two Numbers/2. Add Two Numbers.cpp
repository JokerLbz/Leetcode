//Question : 2.Add Two Numbers
//URL : https://leetcode.com/problems/add-two-numbers/solution/
//Approach : Elementary Math (算算术)
//Runtime : 40 ms (97.14%)
//Memory Usage : 19.1 MB (68.07%)
//Time complexity : O(max(m,n))
//Space complexity : O(max(m,n))

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        bool carry = false;
        ListNode *head = new ListNode(0), *res = head;
        int val_1 = 0, val_2 = 0, temp = 0;
        while(l1 || l2 || carry)
        {
            val_1 = l1 ? l1 -> val : 0;
            val_2 = l2 ? l2 -> val : 0;
            
            if(l1)  l1 = l1 -> next;
            if(l2)  l2 = l2 -> next;
            
            temp = val_1 + val_2 + carry;
            if(temp >= 10)
            {
                temp -= 10;
                carry = true;
            }
            else
                carry = false;
            head -> next = new ListNode(temp);
            head = head -> next;
        }
        return res -> next;
    }
};