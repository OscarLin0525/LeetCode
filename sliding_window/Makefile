# 使用 g++ 來編譯 C++ 檔案
CXX = g++
# 加上一些編譯選項，例如 C++17 標準和所有警告
CXXFLAGS = -std=c++17 -Wall
# 最終要產生的執行檔名稱
TARGET = sliding_window
# 所有需要被編譯的原始檔 (.cpp)
SOURCES = main.cpp LongestSubstringFinder.cpp

.PHONY all clean

all: $(SOURCES)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)