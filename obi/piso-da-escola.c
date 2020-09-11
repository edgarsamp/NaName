#include<stdio.h>

int main(){
    int l, c;

    scanf("%d %d", &l, &c);

    int lajotas2 = 2 * (l + c - 2);

    int lajotas1 = l*c + (l - 1)*(c - 1);

    printf("%d\n%d\n", lajotas1, lajotas2);

    return 0;

}