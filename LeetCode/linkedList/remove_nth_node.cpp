#include <bits/stdc++.h>
using namespace std;
//  Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
    public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *curr = head;
        if (curr == NULL) return head -> next;

        for (int i = 0; i < n; i++) {
            curr = curr -> next;
        }

        ListNode *target_before = head;
        while (curr -> next != NULL) {
            curr = curr -> next;
            target_before = target_before -> next;
        }

        target_before -> next = target_before -> next -> next;
        return head;
    }
};