#include <bits/stdc++.h>
using namespace std;

// SPLIT A SENTENCE INTO WORDS
vector<string> string_split(string sentence) {
    vector<string> ans; // declare a vector for saving words
    string word = ""; // empty word
    for (auto elem : sentence) { // iterate all alphabets in a sentence
        if (elem != ' ') { // if element is not space
            word += elem;
        }
        else {
            ans.push_back(word);
            word = ""; // empty the word again
        }
    }
    ans.push_back(word); // add the word after the final space to vector
    return ans;
}

// PALINDROME - Check if reverse of the string is same as string
bool palindrome(string pal) {
    std::string::iterator itr;
    std::string::reverse_iterator itr2;
    vector <char> temp1;
    vector <char> temp2;
    // itrate string and save in temp1
    for (itr = pal.begin(); itr != pal.end(); ++itr) { 
        temp1.push_back(*itr);
    }

    // reversely iterate string and save in temp2   
    for (itr2 = pal.rbegin(); itr2 != pal.rend(); ++itr2) { 
        temp2.push_back(*itr2);
    }

    bool ans = bool(temp1 == temp2);
    return ans;
}


// Determine if a list includes duplicated elements
bool isDuplicated(vector <int> &nums) {
    set<int> temp; // set does not save duplicated elements
    for (auto elem : nums) {
        temp.insert(elem);
    }

    if (temp.size() != nums.size()) return true; // duplicated
    return false; // not duplicated
}

// Find the missing number from an array consists of [0,n]
int missingNumber(vector <int> &nums) {
    vector <int> temp;
    for (int i = 0; i <= nums.size(); i++) {
        temp.push_back(i);
    }
    sort(nums.begin(), nums.end()); // sort nums for comparison

    vector <int> diff;
    set_difference(
        temp.begin(), temp.end(),
        nums.begin(), nums.end(),
        std::back_inserter(diff)
    ); // returns the different element between two vectors

    return diff[0];
}

// Linked List questions
// Definition
struct ListNode {
    int val;
    LostNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Delete a node in a singly-linked list. 
// you will be given access to the node to be deleted directly.
ListNode *deleteNode(ListNode *node) {
    node -> val = node -> next -> val;
    node -> next = node -> next -> next;
}

// Given the head of a singly linked list, reverse the list, and return the reversed list.
ListNode *reverseList(ListNode *head) {
    ListNode *curr = head;
    ListNode *prev = nullptr;

    while (curr != NULL) {
        ListNode *temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }

    return prev;
}

// Given the head of a singly linked list, return the middle node of the linked list.
ListNode *middleNode(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}


// Binary Search
// set left, right and half the search area continuously until nums[mid] = target
class Solution {
    public:
    int search(vector <int> &nums, int target) {
        int left = 0;
        int right = nums.size()-1;

        while (left <= right) {
            int mid = (left + right) / 2;
            if (target < nums[mid]) right = mid-1;
            else if (target > nums[mid]) left = mid+1;
            else return mid;
        }
        return -1;
    }
};

// Find the majority element that appears more than [n/2] times in a vector.
// use hashmap
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        int majority = nums.size()/2;
        int answer;
        
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
            if (m[nums[i]] > majority) {
                answer = nums[i];
            }
        }
        
        return answer;
    }
};

// Given two integer arrays, return an array of their intersection.
// use set
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set <int> temp;
        for (int i = 0; i < nums1.size(); i++) {
            int target = nums1[i];
            for (int j = 0; j < nums2.size(); j++) {
                if (target == nums2[j]) {
                    temp.insert(target);
                }
            }
        }
        
        set<int>::iterator it;        
        vector <int> answer;
        for (it = temp.begin(); it != temp.end(); ++it) {
            answer.push_back(*it);
        }
        
        return answer;
    }
};

// Palindrome linked list
// Given the head of a singly linked list, return true if it is a palindrome.
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector <int> temp;
        ListNode *curr = head;
        while (curr != NULL) {
            temp.push_back(curr -> val);
            curr = curr -> next;
        }
        
        int front = 0;
        int back = temp.size()-1;
        while (front < back) {
            if(temp[front] != temp[back]) {
                return false;
            }
            front++;
            back--;
        }
        return true;
    }
};

// Given an array of integers nums, return the number of good pairs.
// A pair (i, j) is called good if nums[i] == nums[j] and i < j.

// my solution - slower
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int answer = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            int target = nums[i];
            for (int j = i+1; j < nums.size(); j++) {
                if (target == nums[j]) answer++;
            }
        }
        
        
        return answer;
    }
};


class Solution {
    public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        unordered_map <int, int> m;
        for (auto elem : nums) {
            ans += m[elem]++;
        }

        // how to print unordered_map (hashmap)
        // for (auto it = m.cbegin(); it != m.cend(); ++it) {
        //     cout << (*it).first << " , " << (*it).second << endl;
        // }

        return ans;
    }
};

// Check if All Characters Have Equal Number of Occurrences - easy hashmap
class Solution {
    public:
    bool areOccurencesEqual(string s) {
        unordered_map <char, int> temp;
        for (auto c : s) {
            temp[c]++;
        }

        int target = temp[s[0]]; 
        for (auto val : temp) {
            if (val.second != target) return false;
        }

        return true;
    }
};

// Given an integer x, return true if x is palindrome integer.
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string temp = to_string(x);
        int j = temp.size()-1;
        bool answer = true;
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] != temp[j]) {
                answer = false;
            }
            j--;
        }
        return answer;
    }
};

// Given a binary tree, determine if it is height-balanced.
// For this problem, a height-balanced binary tree is defined as:
// a binary tree in which the left and right subtrees of every node
// differ in height by no more than 1.

class Solution {
public:

    int height (TreeNode *root) {
        if (root == NULL) return -1;
        return 1 + max(height(root->left), height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;
        return abs(height(root->left)-height(root->right)) < 2 
        && isBalanced(root->left) && isBalanced(root->right);
    }
};

// Given the root of a binary tree, 
// check whether it is a mirror of itself (i.e., symmetric around its center).
class Solution {
    public:
    bool isMirror(TreeNode *root1, TreeNode *root2) {
        if (root1 != NULL && root2 != NULL) {
            if (root1 -> val == root2 -> val) {
                return (isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left));
            }
            else return false;
        }

        else if ((root1 == NULL && root2 != NULL) || (root1 != NULL && root2 == NULL)) {
            return false;
        } 
        return true;
    }

    bool isSymmetric(TreeNode *root) {
        return isMirror(root -> left, root -> right);
    }
};

// Given an integer array nums, find the contiguous subarray
// (containing at least one number) which has the largest sum and return its sum.
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = nums[0];
        int maxSub = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            int num = nums[i];
            curr = max(num, curr+num);
            maxSub = max(maxSub, curr);
        }
        
        return maxSub;
    }
};

// Given an array of integers nums and an integer target, 
// return indices of the two numbers such that they add up to target.
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> answer;
        
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i]+nums[j] == target) {
                    answer.push_back(i);
                    answer.push_back(j);
                }
            }
        }       
        return answer;
    }
};

// Solution using hashmap
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> hashMap;
        for (int i = 0; i < nums.size(); i++) {
            if (hashMap.find(target - nums[i]) != hashMap.end()) {
                return {hashMap[target-nums[i]],i};
            }
            else {
                hashMap[nums[i]] = i;
            }
        }
        
        return {-1,-1};
    }
};

// Given a binary tree, find its minimum depth.
// The minimum depth is the number of nodes along the
//  shortest path from the root node down to the nearest leaf node.

// Recursion Solution 1
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        if (root -> left == NULL && root -> right == NULL) return 1;

        int answer = INT_MAX;
        if (root -> left) {
            answer = min(minDepth(root->left), answer);
        }
        
        if (root -> right) {
            answer = min(minDepth(root->right), answer);
        }
        
        return answer + 1;
        
    }
};

// Recursion Solution 2
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) return 0;
        if (root -> left == NULL && root -> right == NULL) return 1;
        
        int left = INT_MAX;
        int right = INT_MAX;
        
        if (root -> left) {
            left = minDepth(root->left);
        }
        if (root -> right) {
            right = minDepth(root->right);
        }
        
        return min(left, right) + 1;
        
    }
};

// Implement a linked list.
class MyLinkedList {
    struct Node {
        int val;
        Node *next;
        Node (int x): val(x), next(nullptr) {}
    };   
    Node *head;
    int size;
    public:
            MyLinkedList() {
            size = 0;
            head = nullptr;
        }

        int get(int index) {
            int result = -1;
            // if index is invalid
            if (index < 0 || index >= size) return result;
            Node *curr = head;
            while(curr != nullptr && index > 0) {
                index--;
                curr = curr -> next;
            }

            // when reaching the current address
            if (index == 0 && curr != nullptr) {
                result = curr -> val;
            }
            return result;
        }

        void addAtHead(int val) {
            Node *curr = new Node(val);
            // place the new node curr in front of existing head
            curr -> next = head;
            // change head address to curr
            head = curr;
            size++;
        }

        void addAtTail(int val) {
            size++;
            Node *node = new Node(val);
            // assign head address to node if head is empty
            if (head == nullptr) {
                head = node;
                return;
            }
            
            // move the node to the end of existing list
            Node *curr = head;
            while (curr != nullptr && curr -> next != nullptr) {
                curr = curr -> next;
            }
            curr -> next= node;
        }

        void addAtIndex(int index, int val) {
            // error
            if (index > size) return;
            // add at head
            if (index == 0) {
                size++;
                addAtHead(val);
                return;
            }
            // add at tail
            if (index == size) {
                size++;
                addAtTail(val);
                return;
            }
            // else
            Node *curr = head;
            while (curr != nullptr && index > 0) { // same as line 24
                index--;
                if (index == 0) { // when reaches the target index
                    Node *newNode = new Node(val);
                    newNode -> next = curr -> next;
                    curr -> next = newNode;
                    size++;
                    break;
                }
                curr = curr -> next;
            }

        }

        void deleteAtIndex(int index) {
            if (index == 0) {
                Node *temp = head;
                head = head -> next;
                size--;
                delete temp;
                return;
            }
            
            Node *curr = head;
            Node *prev = nullptr;
            while (curr != nullptr && index > 0) {
                prev = curr;
                curr = curr -> next;
                index--;
            }
            
            if (index == 0 && curr != nullptr) {
                Node *temp = curr;
                prev -> next = curr -> next;
                size--;
                delete temp;
            }
        }
};

// Given the head of a singly linked list, return the middle node of the linked list.
// Two pointers
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast -> next != NULL) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        return slow;
    }
};

// You are given the heads of two sorted linked lists list1 and list2.
// Merge the two lists in a one sorted list. 
// The list should be made by splicing together the nodes of the first two lists.
// Recursion
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) {
            return list2;
        }
        else if (list2 == NULL) {
            return list1;
        }
        
        else if (list1 -> val < list2 -> val) {
            list1 -> next = mergeTwoLists(list1 -> next, list2);
            return list1;
        }
        
        else {
            list2 -> next = mergeTwoLists(list1, list2 -> next); 
                return list2;
            }
        }
        
};
