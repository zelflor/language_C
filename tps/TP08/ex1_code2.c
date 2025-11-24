#include <stdio.h>

int main() {
    float temperatures[4] = {12.5, 14.0, 13.2, 11.8};
    for (int i = 0; i < 4; i++) {
        printf("Temperature %d : %.1f C ", i, temperatures[i]);
    }
    return 0;
}