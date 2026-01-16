#include <stdio.h>

int main() {
    int scores[100];
    int count = 0;
    int temp;

    int nA = 0, nB = 0, nC = 0, nD = 0, nF = 0;
    int i;

    /* รับค่าคะแนน */
    while (count < 100) {
        if (scanf("%d", &temp) != 1 || temp == -1) {
            break;
        }
        scores[count] = temp;
        count++;
    }

    /* ประมวลผลเกรด */
    for (i = 0; i < count; i++) {
        int s = scores[i];

        if (s >= 85) {
            printf("%d(A)\n", s);
            nA++;
        } else if (s >= 75) {
            printf("%d(B)\n", s);
            nB++;
        } else if (s >= 68) {
            printf("%d(C)\n", s);
            nC++;
        } else if (s >= 55) {
            printf("%d(D)\n", s);
            nD++;
        } else {
            printf("%d(F)\n", s);
            nF++;
        }
    }

    /* แสดงผลสรุป */
    printf("A(%d)\n", nA);
    printf("B(%d)\n", nB);
    printf("C(%d)\n", nC);
    printf("D(%d)\n", nD);
    printf("F(%d)\n", nF);

    return 0;
}

