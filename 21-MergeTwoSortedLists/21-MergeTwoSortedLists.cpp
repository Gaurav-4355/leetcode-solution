// Last updated: 10/09/2025, 23:37:47
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1 || !list2)
            return list1 ? list1 : list2;
        if (list1->val > list2->val)
            std::swap(list1, list2);
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
};
