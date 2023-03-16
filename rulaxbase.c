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
