# My-C-learning
USing for loop
#include <stdio.h>

int main() {
    int i;
    
    for(i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    
    return 0;
}
Using Do-while loop
#include <stdio.h>

int main() {
    int i = 1;
    
    do {
        printf("%d\n", i);
        i++;
    } while(i <= 10);
    
    return 0;
}
PRINTING EVEN NUMBERS FORM 1-50 USING FOR LOOP
#include <stdio.h>

#include <stdio.h>

int main() {
    int i;

    for(i = 2; i <= 50; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}
SUM OF FIRST N NATURAL NUMBERS USING ALL LOOPS
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i;   // sum = sum + i
    }

    printf("Sum = %d", sum);

    return 0;
}
USING WHILE LOOP
#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while(i <= n) {
        sum += i;
        i++;
    }

    printf("Sum = %d", sum);

    return 0;
}
USING DO-WHILE LOOP
#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    do {
        sum += i;
        i++;
    } while(i <= n);

    printf("Sum = %d", sum);

    return 0;
}
