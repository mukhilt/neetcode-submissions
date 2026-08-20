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

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr = nullptr; 
        ListNode* tracker1 = list1;
        ListNode* tracker2 = list2;
        ListNode* head; 
        if(list1 == nullptr){
            return list2; 
        }
        else if(list2 == nullptr){
            return list1; 
        }
        if(list1 -> val < list2 -> val){
            curr = list1; 
            head = curr; 
            tracker1 = list1 -> next;
        }
        else if(list1 -> val > list2 -> val || list1 -> val == list2 -> val){
            curr = list2; 
            head = curr; 
            tracker2 = list2 -> next;
        }
        while(tracker2 != nullptr && tracker1 != nullptr){
            if(tracker1 -> val < tracker2 -> val){
                curr -> next = tracker1; 
                tracker1 = tracker1 -> next;
            }
            else if(tracker2 -> val < tracker1 -> val || tracker2 -> val == tracker1 -> val){
                curr -> next = tracker2; 
                tracker2 = tracker2 -> next;
            }
            curr = curr -> next; 
        }
        if(tracker2 == nullptr){
            while(tracker1 != nullptr){
                curr -> next = tracker1; 
                tracker1 = tracker1 -> next; 
                curr = curr -> next; 
            }
        }
        if(tracker1 == nullptr){
            while(tracker2 != nullptr){
                curr -> next = tracker2; 
                tracker2 = tracker2 -> next; 
                curr = curr -> next; 
            }
        }
        return head; 
    }
};
