#include <stdio.h>
int main() {
    float radius;
    float pi= 3.1415;
    printf("input radius");
    scanf("%f", &radius);
    float area = pi*radius*radius;
    printf("print area is : %f", area);



    return 0;
}