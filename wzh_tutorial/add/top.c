#include <stdint.h>
#define P256_LIMBS 4

typedef uint64_t BN_ULONG;

void ecp_nistz256_add(BN_ULONG res[P256_LIMBS], const BN_ULONG a[P256_LIMBS], const BN_ULONG b[P256_LIMBS]);

void ecp_nistz256_mul_mont(BN_ULONG res[P256_LIMBS], const BN_ULONG a[P256_LIMBS], const BN_ULONG b[P256_LIMBS]);

int main() {
    BN_ULONG a[P256_LIMBS], b[P256_LIMBS], r[P256_LIMBS];
    ecp_nistz256_add(r, a, b);
    ecp_nistz256_mul_mont(r, a, b);
    return 0;
}