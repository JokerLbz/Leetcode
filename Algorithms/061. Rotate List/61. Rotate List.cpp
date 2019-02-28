//Question : 61. Rotate List
//URL : https://leetcode.com/problems/rotate-list/
//Approach : Intuition (直接求解)
//Runtime :  12 ms (100%)
//Memory Usage : 10.2 MB (73.98%)
//Time complexity : O(n)
//Space complexity : O(1)

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        ListNode *fast = head, *slow = head, *temp = head;;
        //get length
        int length = 1;
        while(temp -> next)
        {
            temp = temp -> next;
            length++;
        }
        k %= length;
        if(k == 0)  return head;
        //find (n-k)th node
        while(k--)
            fast = fast -> next;
        while(fast -> next)
        {
            fast = fast -> next;
            slow = slow -> next;
        }
        //swap
        fast -> next = head;
        head = slow -> next;
        slow -> next = nullptr;
        return head;
    }
};