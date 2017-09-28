#include "inline_method.h"


#if INTERFACE
// Broken with or without static
/*static*/ inline int func() __attribute((const));

/*static*/ inline int func()
{
    return 0;
}
#endif



