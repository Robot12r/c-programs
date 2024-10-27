#include <stdio.h>
int main(void){
    float radius, vol;
    float pi =3.1415;
    printf("input radius of sphere");
    scanf("%f", &radius);
    vol = (4/3)*pi*radius*radius*radius;
    printf("\n\n%f",vol);
}