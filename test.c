#include <assert.h>
#include "funciones.h"

int main() {
    assert(suma(2, 3) == 5);
    assert(suma(-1, 1) == 0);
    return 0;
}
