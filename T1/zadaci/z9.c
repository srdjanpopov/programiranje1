// metri u fite


#include <stdio.h>

int main() {
    double celzijusi, kelvini;

    printf("Unesite temperaturu u celzijusima: ");
    scanf("%lf", &celzijusi);

    kelvini = celzijusi + 273.15;
    printf("%.2lf stepeni celzijusa je %.2lf stepeni kelvina\n", celzijusi, kelvini);

    return 0;
}
