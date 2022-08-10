// https://leetcode.com/problems/remove-linked-list-elements/solution/

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// class Solution {
//     public:
//     ListNode *removeElements(ListNode *head, int val) {
//         if (head == NULL) return NULL;
//         if (head -> val == val) {
//             return removeElements(head -> next, val);
//         }
//         else {
//             head -> next = removeElements(head -> next, val);
//             return head;
//         }
//     }
// };

// class Solution {
//     public:
//     ListNode *removeElements(ListNode *head, int val) {
//         if (head == NULL) return NULL;
//         while (head != NULL head -> val == val) {
//             head = head -> next;
//         }

//         ListNode *temp = head;
//         while (temp != NULL) {
//             if (temp -> next != NULL && temp -> next -> val == val) {
//                 temp -> next = temp -> next -> next;
//             }
//             else {
//                 temp = temp -> next;
//             }
//         }
//         return head;
        
//     }
// };


// class Solution {
//     public:
//     ListNode *removeElements(ListNode *head, int val) {
//         if (head == NULL) return NULL;
//         if (head != NULL && head -> val == val) {
//             head = head -> next;
//         }

//         ListNode *temp = head;
//         while (temp != NULL) {
//             if (temp -> next != NULL && temp -> next -> val == val) {
//                 temp -> next = temp -> next -> next;
//             }
//             else {
//                 temp = temp -> next;
//             }
//         }

//         return head;
//     }
// };

int main() {
    vector <int> arr = {1,2,3,4,5};
    while (arr != NULL) {
        cout << "hi" << ' ';
    }
}