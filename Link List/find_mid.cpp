#include <structure.h>
// 函式實作
// 使用 `FindMid::` 來表明這個函式是屬於 FindMid 類別的
ListNode* Operation::findMid(ListNode* head){
    if(head == nullptr || head->next == nullptr){
        return nullptr;

    }
    ListNode* slow = head;
    ListNode* fast = head->next;
    while (fast != nullptr && fast->next != nullptr){
        //fast到終點時slow走到中間(1/2)
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode* mid = slow;
    return mid;
}