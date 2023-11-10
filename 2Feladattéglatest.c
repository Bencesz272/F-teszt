#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,b,c,térfogat,felszín;

     printf("Adja meg a téglatest a,b,c oldalát\n");
     scanf("%d", &a);
     printf("Adja meg a téglatest a,b,c oldalát\n");
     scanf("%d", &b);
     printf("Adja meg a téglatest a,b,c oldalát\n");
     scanf("%d", &c);
     térfogat = a * b * c;

     printf("A téglalap térfogata:\n%d", térfogat);

     felszín = 2 * (a * b + a * c + b * c);

     printf("A téglalap felszíne:\n%d", felszín);

     return 0;
}