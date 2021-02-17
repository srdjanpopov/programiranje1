#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);

    printf("c = ");
    scanf("%lf", &c);

    // poluobim trougla
    double s = (a + b + c) / 2.0;

    // povrsina trougla, putem heronovog obrasca
    double p = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("p = %lf\n", p);

    return 0;
}
