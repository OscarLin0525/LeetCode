// 用來放置類別的宣告，告訴其他檔案這個類別長什麼樣子，不實作。
#pragma once
#include <cstddef>
#include <string>

class LongestSubstringFinder {
    private:
        std::string s;
        std::size_t maxLength;

        void calculate();

    public:
        LongestSubstringFinder(const std::string& input_s);

        std::size_t getLength() const;
};
