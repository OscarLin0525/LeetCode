# 使用 g++ 來編譯 C++ 檔案
CXX = g++
# 加上一些編譯選項，例如 C++17 標準和所有警告
CXXFLAGS = -std=c++17 -Wall
# 最終要產生的執行檔名稱
TARGET = find_mid_in_linklist
# 所有需要被編譯的原始檔 (.cpp)
SOURCES = main.cpp FindMid.cpp Create.cpp

# all 和 clean 是虛擬目標
.PHONY all clean

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)
