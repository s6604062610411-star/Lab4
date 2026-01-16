#include <stdio.h>

int main() {
    int scores[100]; 
    int count = 0;   
    int temp,i;

    
    while (count < 100) {
        scanf("%d", &temp);
        
        if (temp == -1) { 
            break;
        }
        
        scores[count] = temp; 
        count++; 
    }

    
    for ( i = 0; i < count; i++) {
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
