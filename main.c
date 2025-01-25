// Copyright (C) 2025 wwhai
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#include <stdio.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

int main()
{
    // 创建一个新的Lua状态机
    lua_State *L = luaL_newstate();
    if (L == NULL)
    {
        fprintf(stderr, "无法创建Lua状态机\n");
        return 1;
    }

    // 打开Lua标准库
    luaL_openlibs(L);

    // 定义Lua脚本
    const char *lua_script = "print('Hello, World!')";

    // 加载并执行Lua脚本
    if (luaL_dostring(L, lua_script) != LUA_OK)
    {
        // 若执行出错，输出错误信息
        fprintf(stderr, "执行Lua脚本时出错: %s\n", lua_tostring(L, -1));
        // 关闭Lua状态机
        lua_close(L);
        return 1;
    }

    // 关闭Lua状态机
    lua_close(L);

    return 0;
}