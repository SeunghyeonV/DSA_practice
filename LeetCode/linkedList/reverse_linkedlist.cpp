// https://leetcode.com/problems/reverse-linked-list/submissions/
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// iterative
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr;
        ListNode *curr = head;

        while (curr != NULL) {
            ListNode *temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }

        return prev;

    }
};  


// recursive
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head -> next == NULL) return head;
        
        ListNode *curr = reverseList(head -> next);
        head -> next -> next = head;
        head -> next = nullptr;
        return curr;
    }
};  

