// 用來放置類別成員函式的實作，也就是函式內部的具體程式碼
#include "LongestSubstringFinder.h"
#include <algorithm>
#include <unordered_map>

LongestSubstringFinder::LongestSubstringFinder(const std::string& input_s)
    : s(input_s), maxLength(0) {
    if (!s.empty()) {
        calculate();
    }
}

std::size_t LongestSubstringFinder::getLength() const {
    return maxLength;
}

void LongestSubstringFinder::calculate() {
    const std::size_t n = s.length();
    std::unordered_map<char, std::size_t> lastSeen;
    std::size_t left = 0;

    // 檢查 s[right] 是否在 map 中，並且它的上一次出現位置是否在當前窗口內
    // ++right的效率通常會比 right++高。因為right++遞增需要額外創建一個副本來儲存舊值
    for (std::size_t right = 0; right < n; ++right) {
        const char current = s[right];
        const auto found = lastSeen.find(current);
        // 檢查 s[right] 是否在 map 中，並且它的上一次出現位置是否在當前窗口內
        if (found != lastSeen.end() && found->second >= left) {
            left = found->second + 1;
        }
        // 更新 (或插入) 該字元的最新位置
        lastSeen[current] = right;
        const std::size_t windowLength = right - left + 1;
        maxLength = std::max(maxLength, windowLength);
    }
}
