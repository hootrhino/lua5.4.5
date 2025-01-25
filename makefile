# 定义编译器和编译选项
CC = gcc
CFLAGS = -Wall -Werror -g -I.  # -Wall 开启所有警告，-Werror 把警告当作错误处理，-g 包含调试信息，-I. 表示在当前目录查找头文件

# Lua 源码目录
LUA_SRC_DIR = .

# Lua 源文件列表
LUA_SRC = $(wildcard $(LUA_SRC_DIR)/*.c)
LUA_OBJ = $(LUA_SRC:.c=.o)

# 目标可执行文件和源文件
TARGET = lua_hello_world
SRC = main.c

# 默认目标
all: $(TARGET)

# 编译 Lua 库对象文件
$(LUA_OBJ): $(LUA_SRC)
	$(CC) $(CFLAGS) -c $^

# 编译目标可执行文件
$(TARGET): $(SRC) $(LUA_OBJ)
	$(CC) $(CFLAGS) -o $@ $(LUA_OBJ) -lm -ldl

# 清理生成的文件
clean:
	rm -f $(TARGET) $(LUA_OBJ)

# 声明伪目标
.PHONY: all clean