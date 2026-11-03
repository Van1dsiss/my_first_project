#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    double x, y;

    printf("Введіть x, y: ");
    scanf("%lf %lf", &x, &y);

    if ((x * x + y * y <=1) && (y >= 0 || x <= 0))
        printf("Точка M(%g, %g) належить заштрихованій області.\n", x, y);
    else
        printf("Точка M(%g, %g) не належить заштрихованій області.\n", x, y);
    
    return 0;
}