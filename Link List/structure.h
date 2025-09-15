/*負責宣告 ListNode 結構和類別，也就是定義它們的長相和功能。*/
#pragma once // 防止標頭檔被重複包含
#include <vector>
struct ListNode
{
    /* LinkedList 的各種結構 */
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// 類別宣告 (interface)
class Operation {
    public:
        static ListNode* findMid(ListNode* head);
        static ListNode* create(const std::vector<int>& vals);
};