#include <assert.h>

int suma(int, int);

// Test
int main() {
    assert(suma(2, 3) == 5);
    assert(suma(-1, 1) == 0);
    return 0;
}
