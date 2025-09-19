# 添加源文件
add_library(HighConcurrencyLib STATIC 
	LockFree.cpp)        # 创建一个库目标 HighConcurrencyLib

# 添加头文件搜索路径
include_directories(HighConcurrency)