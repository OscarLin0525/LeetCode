// 用來引用我們的類別並執行
#include "LongestSubstringFinder.h"
#include <iostream>
#include <string>

int main() {
    std::string myString = "abcabcbb";
    // 建立finder(可用任何名字)當作我的class object
    LongestSubstringFinder finder(myString);

    const std::size_t result = finder.getLength();

    std::cout << "The input string is: " << myString << std::endl;
    std::cout << "The longest substring length is: " << result << std::endl;

    return 0;
}
