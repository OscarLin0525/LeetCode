#include <iostream>
#include <structure.hpp>

 int main(){
    ListNode* list1 = Operation::create({1,2,3,4,5});
    ListNode* list2 = Operation::create({6,7,8,9,10,11});

    ListNode* mid1 = Operation::findMid(list1);
    ListNode* mid2 = Operation::findMid(list2);

    if (mid1) {
        // 輸出：The middle of the odd list is: 3
        std::cout << "The middle of the odd list is: " << mid1->val << std::endl;
    }

    if (mid2) {
        // 輸出：The middle of the even list is: 4
        // (在偶數長度情況下，快慢指標法會返回第二個中點)
        std::cout << "The middle of the even list is: " << mid2->val << std::endl;
    }
    return 0;
 }