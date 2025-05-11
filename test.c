#include <assert.h>
#include "funciones.h"

int main() {
    assert(suma(2, 3) == 5);
    assert(suma(-1, 1) == 0);
    assert(suma(0, 0) == 0);
    assert(suma(-1, -1) == -2);
    assert(suma(1000, 2000) == 3000);
    assert(suma(-1000, -2000) == -3000);
    assert(suma(1000, -2000) == -1000);
    assert(suma(-1000, 2000) == 1000);
    assert(suma(0, 1) == 1);
    assert(suma(1, 0) == 1);
    assert(suma(1, -1) == 0);
    assert(suma(-1, 2) == 1);
    assert(suma(2, -1) == 1);
    assert(suma(1, 1) == 2);
    assert(suma(-1, 0) == -1);
    assert(resta(2, 3) == -1);
    assert(resta(-1, 1) == -2);
    assert(resta(0, 0) == 0);
    assert(resta(-1, -1) == 0);
    assert(resta(1000, 2000) == -1000);
    assert(resta(-1000, -2000) == 1000);
    assert(resta(1000, -2000) == 3000);
    assert(resta(-1000, 2000) == -3000);
    assert(resta(0, 1) == -1);
    assert(resta(1, 0) == 1);
    assert(resta(1, -1) == 2);
    assert(resta(-1, 2) == -3);
    assert(resta(2, -1) == 3);
    assert(resta(1, 1) == 0);
    assert(resta(-1, 0) == -1);
    assert(resta(0, -1) == 1);
    assert(resta(-1, 0) == -1);
    assert(resta(0, 1) == -1);
    return 0;
}
