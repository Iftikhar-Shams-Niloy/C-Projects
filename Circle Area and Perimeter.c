#include<stdio.h>
#include<math.h>

int main() {
    double R,area,peri;
    double n = 3.14159;
    printf("Enter the radius of the circle:");
    scanf("%lf",&R);
    area =n*pow(R,2);
    peri =2*n*R;
    printf("The area of the circle : %0.4lf\n", area);
    printf("The perimeter of the circle : %0.4lf\n", peri);
    return 0;
}
