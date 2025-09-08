#include <stdio.h>
#include <limits.h>   // Pour les entiers
#include <float.h>    // Pour les flottants

int main() {
    printf("===== Plages de valeurs des types =====\n\n");

    printf("char (8 bits)              : %d à %d (-2^7 à 2^7 - 1)\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned char (8 bits)     : 0 à %u (0 à 2^8 - 1)\n", UCHAR_MAX);

    printf("short (16 bits)            : %d à %d (-2^15 à 2^15 - 1)\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short (16 bits)   : 0 à %u(0 à 2^16 -1)\n", USHRT_MAX);

    printf("int (32 bits)              : %d à %d (-2^31 à 2^31 - 1)\n", INT_MIN, INT_MAX);
    printf("unsigned int (32 bits)     : 0 à %u (2^32 - 1)\n", UINT_MAX);

    printf("long (64 bits)             : %ld à %ld (-2^63 à 2^63 - 1)\n", LONG_MIN, LONG_MAX);
    printf("unsigned long (64 bits)    : 0 à %lu (2^64 - 1)\n", ULONG_MAX);

    printf("float (128 bits)           : %.3e à %.3e (2^-126 à 2^128)\n", FLT_MIN, FLT_MAX);
    printf("double (1024 bits)         : %.3e à %.3e (2^-1022 à 2^1024)\n", DBL_MIN, DBL_MAX);

    return 0;
}
