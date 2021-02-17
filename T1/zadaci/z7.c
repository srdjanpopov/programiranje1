#include<stdio.h>

main() {

     char ime[20];
     char prezime[20];
          
     printf("\nKako se zoves? ");
     scanf("%s", ime);
     
     printf("\nKako se prezivas? ");
     scanf("%s", prezime);
     
     printf("\n Tvoje puno ime je: %s %s", ime, prezime);
     return 0;     
}

