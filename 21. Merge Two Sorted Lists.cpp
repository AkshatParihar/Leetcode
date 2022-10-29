//recursion
//https://leetcode.com/problems/merge-two-sorted-lists/discuss/9715/Java-1-ms-4-lines-codes-using-recursion
//Runtime: 8 ms, faster than 71.22% of C++ online submissions for Merge Two Sorted Lists.
//Memory Usage: 14.3 MB, less than 94.06% of C++ online submissions for Merge Two Sorted Lists.
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;
        if(l1->val <= l2->val){
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }else{
            l2->next = mergeTwoLists(l2->next, l1);
            return l2;
        }
    }
};
