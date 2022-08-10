// https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/553/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void deleteNode(ListNode* node) {
        node -> val = node -> next -> val; // change target node value from 1 to 9
        node -> next = node -> next -> next; // 5-> 1 to 5 -> 9 (above example)
        
    }
};

