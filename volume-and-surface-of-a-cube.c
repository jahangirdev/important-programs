#include<stdio.h>
int main(){
    int side, volume, surface;
    printf("Enter a side of the cube:\n");
    scanf("%d", &side);
    volume = side*side*side;
    surface = 6*side*side;
    printf("The volume of the cube is %d\n", volume);
    printf("The surface area of the cube is %d\n", surface);
    return 0;
}
