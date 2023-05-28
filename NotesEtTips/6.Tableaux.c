//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* TABLEAUX */

    1/INITIALISER UN TABLEAU [En faisant une boucle + 3 autres méthodes]
    2/AFFICHER LA LISTE DU TABLEAU AVEC UN FOR

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* NOTES */

[Declaration de tableau]
    <type> <nom_tableau>[X]; //Déclare avec valeurs aléatoires

[Initialisation]
    tableau[5] ={valeur1, valeur2, valeur3, valeur4, valeur5};
    tableau[5] ={0}; //Toutes les cases valent 0
    tableau[5] ={4}; //Premiere case à 4, le reste à 0 !

[Accès au tableau]
    tableau[X]       : élement d indice X (X+1eme element du tableau)
    *tableau         : adresse du tableau
    *(tableau + X)   : élément d indice X 

(NOTE)
    tableau[5] meme chose que -> *(tableau + 5)

    Exemple:

    #include <stdio.h>

int main(int argc, char * argv[])
{
    float tableaux[4];
    tableaux[0] = 10;
    tableaux[1] = 11;
    tableaux[2] = 12;
    tableaux[3] = 13;

    printf("Case 1 : %f\n", tableaux[0]);
    printf("Case 2 : %f\n", tableaux[1]);
    printf("Case 3 : %f\n", tableaux[2]);
    printf("Case 4 : %f\n", tableaux[3]);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





1/INITIALISER UN TABLEAU :
/////////////////////////
En faisant une boucle: 
/////////////////////


#include <stdio.h>

int main(int argc, char * argv[])
{
    int tableau[4], i = 0;

    // Initialisation du tableau

    for (i = 0; i < 4 ; i++)
    {
        tableau[i] = 0;
    }

    // Affichage de ses valeurs pour vérifier
    for (i = 0 ; i < 4 ; i++)
    {
        printf("%d\n", tableau[i]);
    }

    return 0;
}



1/INITIALISER UN TABLEAU :
/////////////////////////
Autre méthode:
/////////////


#include <stdio.h>

int main(int argc, char * argv[])
{
    int tableau[4] = {0, 0, 0, 0}, i = 0;

    for (i = 0; i < 4; i++)
    {
        printf("%d\n", tableau[i]);
    }

    return 0;
}



1/INITIALISER UN TABLEAU :
/////////////////////////
Autre méthode:
/////////////


int tableau[4] = {10, 23}; // Valeurs insérées 10, 23, 0, 0



1/INITIALISER UN TABLEAU :
/////////////////////////
Autre méthode:
/////////////


int tableau[4] = {0}; // Toutes les cases du tableau seront initialisées à 0



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


AFFICHER LA LISTE DU TABLEAU AVEC UN FOR :
/////////////////////////////////////////


#include <stdio.h>

int main(int argc, char * argv[])
{
    int tableau[4], i = 0;

    tableau[0] = 799;
    tableau[1] = 546;
    tableau[2] = 785;
    tableau[3] = 125;

    for (int i = 0; i < 4; ++i)
    {
        printf("%d\n", tableau[i]);
    }

    return 0;

}
