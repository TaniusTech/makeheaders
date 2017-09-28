
#include "function_defined_using_enum.h"

void func(TestEnum e)
{
}

#define func2(e) \
    func(e)



//static TestEnum make_headers_workaround = EnumVal1;
