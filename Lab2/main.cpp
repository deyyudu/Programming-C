#include <stdio.h>
#include <math.h>
#define PI 3.1415926
int main() {
    float a;
    scanf("%f",&a);
    a*=PI/180;
    printf("z1=%f, z2=%f\n", cos(a)+ cos (2*a) + cos (6*a)+ cos (7*a), 4*cos(a/2)* cos(5/2)* cos(a* 4));
    getchar();
    return 0;
}
