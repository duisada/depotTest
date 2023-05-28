//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* DIRECTIVES DE PREPROCESSEUR */

    1/DEFINIR LA TAILLE DES TABLEAUX AVEC #DEFINE
    2/FAIRE DE CALCULS DANS LES #DEFINE
    3/UTILISER #DEFINE POUR DECLARER UN TABLEAU
    
    4/LES MACROS (pour remplacer un mot par un code source)
    4.1/PLUSIEURS LIGNES DE CODES PAR MACROS SONT POSSIBLES
    4.2/MACROS AVEC PARAMETRES
    
    5/REALISER DES CONDITIONS EN LANGAGE PREPROCESSEUR
    5.1/IF/ELIF/ENDIF
    5.2/ #ifdef
    5.3/#ifndef


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* NOTES */

    Utilisez #include pour inclure un fichier dans un autre.
    Utilisez #define pour associer une valeur à un mot (Les  #define sont généralement placés dans des .h, à côté des prototypes).

    Pour inclure un fichier .h se trouvant dans le dossier où est installé votre IDE, vous devez utiliser les chevrons : < > .
    Pour inclure un fichier .h se trouvant dans le dossier de votre projet, vous devez utiliser les guillemets : " " . 

    Constantes prédéfinies par le procésseur (double underscore avant et après) :  __LINE__  donne le numéro de la ligne actuelle.
                                                                                   __FILE__  donne le nom du fichier actuel.
                                                                                   __DATE__  donne la date de la compilation.
                                                                                   __TIME__  donne l heure de la compilation. 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




1/DEFINIR LA TAILLE DES TABLEAUX AVEC #DEFINE
/////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX    1000

int main(int argc, char *argv[])
{
    char chaine1[TAILLE_MAX], chaine2[TAILLE_MAX];
}

// Qui se traduit par :

#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX    1000

int main(int argc, char *argv[])
{
    char chaine1[1000], chaine2[1000];
}




2/FAIRE DE CALCULS DANS LES #DEFINE
///////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define LARGEUR_FENETRE  800
#define HAUTEUR_FENETRE  600
#define NOMBRES_PIXELS  (LARGEUR_FENETRE * HAUTEUR_FENETRE)

int main(int argc, char *argv[])
{
    printf("Le nombre de pixel pour cette fenetre est de : %d\n", NOMBRES_PIXELS);

    return 0;
}



3/UTILISER #DEFINE POUR DECLARER UN TABLEAU
///////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define TAILLE_TABLEAU   6

int main(int argc, char *argv[])
{
    int tableau[TAILLE_TABLEAU] = {1, 2, 3, 4, 5, 6};

    printf("La taille du tableau est de : %d\n", TAILLE_TABLEAU);

    return 0;
}



4/LES MACROS (pour remplacer un mot par un code source)
///////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define COUCOU() printf("Coucou\n"); // Attention aux parenthèses après COUCOU


int main(int argc, char *argv[])
{
    COUCOU()  // Le COUCOU() est remplacé par printf("Coucou") écrit plus haut dans le préprocesseur, pas besoin de ';' à la fin .
 
   return 0;
   
}



4.1/PLUSIEURS LIGNES DE CODES PAR MACROS SONT POSSIBLES, EXEMPLE:
////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

// Ne pas oublier le '\' avant chaque nouvelle ligne de commande !
#define RACONTER_SA_VIE()   printf("Coucou, je m'appelle Brice\n"); \
                            printf("je viens de Nice\n"); \
                            printf("j'aime la glisse\n");

int main(int argc, char *argv[])
{
    RACONTER_SA_VIE()  // Le COUCOU() est remplacé par tous les printf écrit plus haut dans le préprocesseur
 
   return 0;
   
}

// Attention a ne pas oublier le '\' après chaque ligne de code sauf pour la dernière



4.2/MACROS AVEC PARAMETRES:
//////////////////////////


#include <stdio.h>
#include <stdlib.h>

#define MAJEUR(age) if (age >= 18) \
                    printf("Vous êtes majeur\n"); \
                    else \
                    printf("Vous êtes mineur\n");

int main(int argc, char *argv[])
{
    MAJEUR(35)

    return 0;
}



EGALEMENT POSSIBLE AVEC PLUSIEURS PARAMETRES:


#include <stdio.h>
#include <stdlib.h>

#define MAJEUR(age, nom) if (age >= 18) \
                    printf("Vous êtes majeur %s\n", nom); \
                    else \
                    printf("Vous êtes mineur %s\n", nom);

int main(int argc, char *argv[])
{
    MAJEUR(35, "Manu") // Mettre la chaîne de caractères entres guillemets

    return 0;
}



5/REALISER DES CONDITIONS EN LANGAGE PREPROCESSEUR:
//////////////////////////////////////////////////


5.1/IF/ELIF/ENDIF: 
(#elif signifie "else if", la condition s arrete lorsque vous inserez un #endif)
//////////////////////////////////////////////////////////////////////////////////////////////////


#if condition
    /* Code source à compiler si la condition est vraie */
#elif condition 2
    /* Sinon si la condition2 est vraie compiler ce code source */
#endif



5.2/ #ifdef:
///////////
#ifdef pour dire << Si la constante est définie >>
#ifndef pour dire << Si la constante n'est pas définie >>


Exemple:

#define WINDOWS

#ifdef WINDOWS
    /* Code source pour windows */
#endif

#ifdef LINUX
    /* Code source pour Linux */
#endif

#ifdef MAC
    /* Code source pour Mac */
#endif

(Sert à compiler un programme en fonction de la plateforme sur laquelle on se trouve, il suffit de changer le #define WINDOWS pars LINUX ou MAC pour cet exemple, puis compiler).



5.3/#ifndef:
///////////
#ifndef est utilisé dans les '.h' pour éviter les inclusions infinies

EXEMPLE:

#ifndef DEF_NOMDUFICHIER // Si la constante n'a pas été définie le fichier n'a jamais été inclus
#define DEF_NOMDUFICHIER // On définit la constante pour que la prochaine fois le fichier ne soit pas inclus

/* Contenu de votre fichier .h (autres include, prototypes, define...) */

#endif

/* Pour bien comprendre:
Imaginez que le fichier .h soit inclus pour la premiere fois.
Le préprocesseur lit la condition : "Si la constante DEF_NOMDUFICHIER n'a pas été definie".
Comme c'est la premiere fois que le fichier est lu, la constante n'est pas définie, donc le préprocesseur entre à l'intèrieur du if.

La première instruction qu'il rencontre est justement :
#define DEF_NOMDUFICHIER

Maintenant la constante est definie.
La prochaine fois que le fichier sera inclus, la condition ne sera plus vraie donc le fichier ne risque plus d'être inclus à nouveau.