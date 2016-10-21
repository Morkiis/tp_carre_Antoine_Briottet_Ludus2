#include <stdio.h>
#include <stdlib.h>
/*
Algo:Carré
BUT: Dessiner un carré de + rempli de *
ENTREE: Deux entiers positifs
SORTIE:Un carré

Var :L,l,i,j : ENTIER

BEGIN

ECRIRE "Entrez Votre longueur";
Lire L;
ECRIRE "Entrez Votre largeur";
Lire l;

Pour i de 1 à MaxL FAIRE
Pour i de 1 à Maxl FAIRE

SI j=1 ou j=Maxl ou i=1 ou i=MaxL ALORS

ECRIRE +
SINON ECRIRE *

FIN


*/
int main()
{
    int MaxL;
    int Maxl;
    int p=1;
    int m=1;

printf("Entrez la Longueur\n");
    scanf("%d",&MaxL);
printf("Entrez la largeur\n");
    scanf("%d",&Maxl);

for (p=1;p<=Maxl;p++)
{
    for(m=1;m<=MaxL;m++)
    {
        if(p==1||p==MaxL || m==1 || m==Maxl)
        {
            printf("+");
        }
            else {
                printf("*");
            }
    }
    printf("\n");
}
return 0;
}
