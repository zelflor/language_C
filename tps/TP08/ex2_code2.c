#include <stdio.h>

int main() {
    int notes[4] = {12, 15, 9, 14};
    int max = 0;
    for (int i = 1; i < 4; i++) {
        if (notes[i] > max) {
            max = notes[i];
        }
    }
    printf("Note maximale : %d", max);
    return 0;
}