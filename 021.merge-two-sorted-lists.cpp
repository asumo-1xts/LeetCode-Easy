/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

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
        } else if (list1 == nullptr && list2 != nullptr) {
            return list2;
        } else if (list1 != nullptr && list2 == nullptr) {
            return list1;
        } else {
            // ========== 一般的な処理 ==========

            ListNode* answer = new ListNode();
            ListNode* head = answer;  // 最初のノードを保持するためのポインタ
            // head ... ( answer ...
            // この先はanswerが勝手に更新するので、最終的にheadを返す）

            while (list1 != nullptr && list2 != nullptr) {
                if (list1->val < list2->val) {
                    answer->val = list1->val;
                    list1 = list1->next;
                } else {
                    answer->val = list2->val;
                    list2 = list2->next;
                }
                answer->next = new ListNode();  // 次のノードを作成
                answer = answer->next;
            }

            if (list1 == nullptr) {
                while (1) {
                    answer->val = list2->val;
                    list2 = list2->next;

                    if (list2 != nullptr) {
                        answer->next = new ListNode();  // 次のノードを作成
                        answer = answer->next;
                    } else {
                        break;
                    }
                }
            } else {
                while (1) {
                    answer->val = list1->val;
                    list1 = list1->next;

                    if (list1 != nullptr) {
                        answer->next = new ListNode();  // 次のノードを作成
                        answer = answer->next;
                    } else {
                        break;
                    }
                }
            }

            return head;
        }
    };
};

// @lc code=end
