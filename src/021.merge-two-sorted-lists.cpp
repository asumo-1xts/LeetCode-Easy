/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode* next) : val(x), next(next) {}
// };

class Solution {
   public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // ========== コーナーケースを蹴っておく =========
        if (list1 == nullptr && list2 == nullptr) {
            return nullptr;
        }

        // ========== 一般的な処理 =========
        ListNode* answer = new ListNode();
        ListNode* head = answer;  // answerの先頭を保持しておく

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                answer->next = list1;
                list1 = list1->next;
            } else {
                answer->next = list2;
                list2 = list2->next;
            }
            answer = answer->next;
        }

        if (list1 != nullptr) {
            answer->next = list1;
        } else {
            answer->next = list2;
        }

        return head->next;
    }
};

// @lc code=end
