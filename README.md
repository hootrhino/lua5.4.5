# 简介

本仓库是 **lua  V5.4.5** 的官方 Fork 版本，主要用来给 I4DE 的高级网关增加脚本特性。后期可能会针对特殊硬件增加一些功能，但是完全兼容标准LUA V5.4.5，不会对原始LUA代码做任何修改。

## 构建

下面主要是讲ubuntu下构建过程，Windows下建议使用MSYS2。

```sh
make clean
make
```

注意，如果出现下面这个问题：

```sh
lua.c:434:10: fatal error: readline/readline.h: No such file or directory
  434 | #include <readline/readline.h>
      |          ^~~~~~~~~~~~~~~~~~~~~
compilation terminated.
make: *** [<builtin>: lua.o] Error 1
```

需要装一个库, 在ubuntu下命令如下:

```sh
sudo apt install libreadline-dev
```

## 社区

- 维护：wwhai

## 鸣谢

非常感谢LUA团队的优秀作品：[LUA](https://github.com/lua/lua)
