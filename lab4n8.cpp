#include <stdio.h>

int main() {
    int n, i;
    
    
    if (scanf("%d", &n) != 1) return 0;

    int scores[n]; 

    
    for (i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    
    for (i = 0; i < n; i++) {
        int s = scores[i];

        
        if (s < 0 || s > 100) {
            printf("error score\n");
            continue;
        }

        
        if (s >= 85) {
            printf("%d(A)\n", s);
        } else if (s >= 75) {
            printf("%d(B)\n", s);
        } else if (s >= 68) { 
            printf("%d(C Just %d more points needed)\n", s, 75 - s);
        } else if (s >= 55) {
            printf("%d(D)\n", s);
        } else {
            printf("%d(F)\n", s);
        }
    }

    return 0;
}
