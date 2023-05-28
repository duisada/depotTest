//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* POINTEURS */

    1/EXEMPLE 1
    2/EXEMPLE 2
    3/EXEMPLE 3

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* NOTES */

    Pointeur : variable contenant l adresse d une autre variable pointée
    %d --> affiche une adresse de variable ou pointeur

    [VARIABLES]
        nomDeVariable   :  valeur de la variable 
        &nomDeVariable  :  adresse de la variable

    [POINTEURS]
        *monPointeur = NULL ou *monPointeur = &maVariable
        (déclaration et initialisation d un pointeur)

        monPointeur  : adresse de la variable pointée
        *monPointeur : valeur de la variable pointée
        &monPointeur : adresse du pointeur 
  Exemple : printf("Adresse de nomDeVariable : %p\n", &nomDeVariable);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




  
EXEMPLE 1 :
//////////


#include <stdio.h>

void triplePointeur(int *pointeurSurNombre);

 int main(int argc, char *argv[])
  {
        int nombre = 5;
    
    printf("Veuillez entrer un nombre :\n");
    scanf("%d", &nombre);

        triplePointeur(&nombre);// On envoie l'adresse de nombre à la fonction
        printf("Le nombre multiplié par 3 donne :%d\n", nombre);// On affiche la variable nombre, La fonction à directement modifié la variable car elle connaissait son adresse


        return 0;
  }

void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre *= 3; // On multiplie la valeur par 3
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


EXEMPLE 2 :
//////////


#include <stdio.h>

void triplePointeur(int *pointeurSurNombre);

int main(int argc, char * argv[])
{
    int nombre =5;
    int *pointeur = &nombre; // pointeur prend l'adresse de nombre

    triplePointeur(pointeur); // On envoie pointeur (l'adresse du nombre) à la fonction
    printf("%d", *pointeur);// On affiche la valeur du nombre avec *pointeur
}

void triplePointeur(int *pointeurSurNombre)
{
    *pointeurSurNombre *= 3; //
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


EXEMPLE 3 :
//////////


#include<stdio.h>

void decoupeMinutes(int *pointeurHeures, int *pointeurMinutes);

int main (int argc, char * argv[])
{
    int heures = 0, minutes = 90;
    decoupeMinutes(&heures, &minutes);
    printf("%d heures et %d minutes\n", heures, minutes);

    return 0;
}
void decoupeMinutes(int *pointeurHeures, int *pointeurMinutes)
{
    *pointeurHeures = *pointeurMinutes / 60;
    *pointeurMinutes = *pointeurMinutes % 60;
} 
