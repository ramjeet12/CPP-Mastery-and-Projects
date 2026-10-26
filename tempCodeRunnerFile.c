#include <stdio.h>

int main (){
    int a, b, temp;

    printf("Enter two int:");
    scanf("%d %d",&a ,&b);

    printf("\nbefore swapping:\n");
    printf("a=%d, b= %d\n",a,b);

    temp =a;
    a=b;
    b=temp;

    printf("\nafterswapping:\n");
    printf("a=%d,b=%d\n",a,b);
    
    return 0;
}