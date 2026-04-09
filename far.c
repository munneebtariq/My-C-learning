//this is a program for right angled triangle pattern using stars

#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
    
//this a program to make a diamond shape using stars
#include <stdio.h>
int main() {
    int i, j, n;

    printf("enter number of rows(half diamond): ");
    scanf("%d", &n);
   
    for(i = 1; i<= n; i++) {
        for(j = 1; j <= n - i; j++) {
        printf(" ");
    }
    for (j = 1; j <= 2*i -1; j++) {
        printf("*");
    }
    printf("\n");
    }
    
for(i = n-1; i >=1; i--) {
    for(j = 1; j <= n - i; j++)
{  printf(" ");}
for(j = 1; j <= 2*i -1; j++){
    printf("*");
}
printf("\n");
}
return 0;
}

//Code for acute angled triangle pattern using stars

#include <stdio.h>
int main() {
    int j, i, n;
    printf("Enter number of rows");
    scanf("%d", &n);
    for( i = 1; i<= n; i++){
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
for(j = 1; j <=2*i -1; j++){
    printf("*");

}
printf("\n");
    }
    return 0;

}
   
