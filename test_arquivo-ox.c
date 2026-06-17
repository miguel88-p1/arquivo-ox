#include <assert.h>
#include "function_mige.c"
int ehValido(char c);

int main()
{
    assert(ehValido('X'));
    assert(ehValido('O'));

    assert(!ehValido('A'));
    assert(!ehValido('x'));

    return 0;
}
