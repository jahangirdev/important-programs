#include<stdio.h>
int main(){
    float f, c;
    printf("Enter the celsius value:\n");
    scanf("%f", &c);
    f= 1.8 * c + 32;
    printf("Fahrenheit value is %.2f", f);
    return 0;
}
