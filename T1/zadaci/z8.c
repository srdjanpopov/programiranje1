#include <stdio.h>
#include <math.h>

int main() {
    double a = 2.0;
    double b = 4.0;
    double c = 5.0;

    // poluobim trougla
    double s = (a + b + c) / 2.0;

    // povrsina trougla, putem heronovog obrasca
    double p = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("p = %lf\n", p);

    return 0;
}
