#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,kerulet,terulet;

    printf("Adja meg az a oldal méretét\n");
    scanf("%d", &a);

    printf("Adja meg a b oldal méretét\n");
    scanf("%d", &b);

    terulet = a * b;
    kerulet = 2 * (a + b);

    printf("A megadott téglalap kerülete: %d\n", kerulet);

    return 0;


}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,kerület,terület;
    printf("Adja meg a téglalap a oldalának a méretét!\n");
    scanf("%d", &a);

    printf("Adja meg a téglalap b oldalának a méretét\n");
    scanf("%d",&b );

    terület: a * b;
    kerület: 2 * (a + b);


    printf("A téglalap területe:\n%d", terület );
    printf("A téglalap kerülete:\n%d", kerület);

    return 0;

}