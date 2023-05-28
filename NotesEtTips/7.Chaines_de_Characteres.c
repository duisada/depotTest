//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* CHAINES DE CHARACTERES */

    1/CREER ET INITIALISER UNE CHAINE [3 méthodes]
    2/RECUPERER UNE CHAINE DE CHARACTERES VIA UN SCANF
    3/MANIPULER DES CHAINES A L AIDE DE FONCTIONS [strlen/strcpy/strcat/strcmp/strchr/strpbrk/strstr/sprintf]

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* NOTES */

    "" pour une chaîne de caractères
    '' pour un caractère

    

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



1/CREER ET INITIALISER UNE CHAINE:
/////////////////////////////////
Première méthode:
/////////////////


 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char *argv[])
 {
    char chaine[6]; // Tableau de 6 char pour stocker S-a-l-u-t + le /0

    // Initialisation de la chaîne (on écrit les charactères un à un en mémoire)
    chaine[0] = 'S';
    chaine[1] = 'a';
    chaine[2] = 'l';
    chaine[3] = 'u';
    chaine[4] = 't';
    chaine[5] = '/0';

    // Affichage de la liste grâce au "%s" du printf :
    printf("%s\n", chaine);

    return 0;
 }



Créer et initialiser une chaîne:
///////////////////////////////
Deuxième méthode:
/////////////////


#include <stdio.h>


int main(int argc, char *argv[])
{
    char chaine[6] = {'S', 'a', 'l', 'u', 't', '\0'}; // ou char chaine[6] = {'S', 'a', 'l', 'u', 't', '\0'};

    printf("%s\n", chaine);

    return 0;
}



Créer et initialiser une chaîne:
///////////////////////////////
Troisième méthode:
/////////////////


#include <stdio.h>

int main(int argc, char *argv[])
{
    char chaine[] = "Salut !";   // La chaîne de charactères entres parenthèse pour indiquer au compilateur la taille du tableau nécessaire 

    printf("%s\n", chaine);

    return 0;
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
2/RECUPERER UNE CHAINE DE CHARACTERES VIA UN SCANF:
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    char prenom[100];

    printf("Quel est votre prénom ?\n");
    scanf("%s", prenom);

    printf("Ravie de faire votre connaissance %s !\n", prenom);

     return 0;
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
3/MANIPULER DES CHAINES A L AIDE DE FONCTIONS: [Inclure la bibliothèque string.h -> #include <string.h>]
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
strlen  : pour calculer la longueur d une chaine 
strcpy  : pour copier une chaine dans une autre
strcat  : pour concaténer 2 chaines [ajoute une chaine a la suite d une autre]
strcmp  : pour comparer 2 chaines
strchr  : pour rechercher un caractère
strpbrk : pour rechercher le premier charactère de la liste
strstr  : pour rechercher une chaine dans une autre
sprintf : pour écrire dans une chaine 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



strlen  : pour calculer la longueur d une chaine [Prototype : size_t strlen(const char *chaine);]
////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char chaine[] = "Salut";
    int longueurChaine = 0;

    // On récupère la longueur de la chaîne dans longueurChaine
    longueurChaine = strlen(chaine);

    // On affiche la longueur de la chaîne
    printf("La chaîne %s fait %d caractères de long\n", chaine, longueurChaine);

    return 0;

}



strcpy  : pour copier une chaine dans une autre [Prototype : char *strcpy(char *copieDeLaChaine, const char *chaineACopier);]
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    /* On crée une chaîne "chaine" qui contient un peu de texte et une copie (vide) de taille 100 pour être sûr d'avoir la place pour la copie */
    char chaine[] = "Texte", copie[100] = {0};

    strcpy(copie, chaine); // On copie "chaine" dans "copie"

    // Si tout s'est bien passé, la copie devrait être identique à chaine
    printf("%s\n", chaine);
    printf("%s\n", copie);

    return 0;

}



strcat  : pour concaténer 2 chaines [Prototype : char *strcat(char *chaine1, const char *chaine2);]
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    /* On crée 2 chaînes. chaine1 doit être assez grande pour acceuillir le contenu de chaine2 en plus, sinon risque de plantage */
    char chaine1[100] = "Salut ", chaine2[] = "Manu";

    strcat(chaine1, chaine2); // On concatène chaine2 dans chaine1

    // Si tout s'est bien passé, chaine1 vaut "Salut Manu"
    printf("chaine1 vaut : %s\n", chaine1);

    // chaine2 n'a pas changé
    printf("chaine2 vaut toujours : %s\n", chaine2);

    return 0;

}



strcmp  : pour comparer 2 chaines [Prototype : int strcmp(const char *chaine1, const char *chaine2);]
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char chaine1[] = "Texte de test", chaine2[] = "Texte de test";

    if (strcmp(chaine1, chaine2) == 0) // Si chaînes identiques
    {
        printf("Les chaînes sont identiques\n");
    }
    else
        printf("Les chaînes sont différentes\n");


    return 0;

}



strchr  : pour rechercher un caractère [Prototype : char *strchr(const char *chaine, int caractereARechercher);]
/* Il existe une fonction "strrchr", identique sauf qu'elle renvoie un pointeur vers le dernier caractère qu'elle à trouvé dans la chaîne, plutot que vers le premier.*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char chaine[] = "Texte de test", *suiteDeChaine = NULL;

    suiteDeChaine = strchr(chaine, 'd');
    if (suiteDeChaine != NULL) // Si on a trouvé quelque chose
    {
        printf("Voici la fin de la chaîne à partir du premier d : %s\n", suiteDeChaine);
    }

    return 0;

}



strpbrk : pour rechercher le premier charactère de la liste [Prototype : char *strpbrk(const char *chaine, const char *lettreARechercher);]
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *suiteChaine;

    // On cherche la premiere occurence de x, d ou s dans "Texte de test"
    suiteChaine = strpbrk("Texte de test", "xds");

    if(suiteChaine != NULL)
    {
        printf("Voici la fin de la chaîne à partir du premier des caractères trouvés : %s\n", suiteChaine);
    }
    
    return 0;

}



strstr  : pour rechercher une chaine dans une autre [Prototype : char *strstr(const char *chaine, const char *chaineARechercher);]
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *suiteChaine;

    // On cherche la premiere occurence de "test" dans "Texte de test" :
    suiteChaine = strstr("Texte de test", "test");
    if(suiteChaine != NULL)
    {
        printf("Première occurence de test dans Texte de test : %s\n", suiteChaine);
    }
    
    return 0;

}



sprintf : pour écrire dans une chaine [Cette fonction ce trouve dans #include <stdio.h>]
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char chaine[100];
    int age = 15;

    // On écrit tu as 15 ans dans chaine
    sprintf(chaine, "Tu as %d ans !", age);

    // On affiche chaine pour verifier qu'elle contient bien cela :
    printf("%s\n", chaine);
    
    
    return 0;

}


