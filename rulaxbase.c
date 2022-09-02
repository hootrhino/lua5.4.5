#include "lprefix.h"

#include <stddef.h>

#include "lua.h"

#include "lualib.h"
#include "lauxlib.h"

/*
**
*/
static int banner(lua_State *L)
{
    if (L == NULL)
    {
        return 0;
    }
    printf("┌────────────────────────────────────────────────┐\n");
    printf("│  RULAX 是基于LUA 5.4.5 版本衍生的一个规则引擎  │\n");
    printf("└────────────────────────────────────────────────┘\n");
    return 0;
}
static const luaL_Reg rulax_libs[] = {
    {"banner", banner},
};

LUAMOD_API int rulax_base(lua_State *L)
{
    luaL_newlib(L, rulax_libs);
    return 1;
}
