	 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* STRUCTURES ET ENUMERATIONS */

    1/DEFINIR UNE STRUCTURE
    2/PLACER DES TABLEAUX DANS UNE STRUCTURE
    3/UTILISER UNE STRUCTURE DANS UNE FONCTION 

 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


1/DEFINIR UNE STRUCTURE:
///////////////////////


Une structure est un assemblage de variables qui peuvent avoir différents types.

Contrairement aux tableaux qui vous obligent à utiliser le même type dans tout le tableau, vous pouvez créer une structure comportant des variables de types long  , char  , int et double à la fois.

Les structures sont généralement définies dans les fichiers .h  , au même titre que les prototypes et les define  .


Pour définir une structure, il suffit de :

    commencer par taper  struct ;

    puis écrire le nom de la structure ;


ASTUCE : nommez vos structures en suivant les mêmes règles que pour les noms de variables, sauf que vous mettez la première lettre en majuscule pour pouvoir faire la différence.

Du coup, en regardant mon code, si vous voyez quelque chose comme :

    ageDuCapitaine , vous saurez qu il s agit d une variable car cela commence par une lettre minuscule ;

    MorceauAudio , vous saurez qu il s agit d une structure (un type personnalisé) car cela commence par une majuscule.


    ouvrir ensuite les accolades et les fermer plus loin, comme pour une fonction ;


Attention, ici c est particulier : vous DEVEZ mettre un point-virgule après l accolade fermante. C est obligatoire. Si vous ne le faites pas, la compilation plantera.


EXEMPLE:
///////

struct NomDeVotreStructure
{
    int variable1;
    int variable2;
    int autreVariable;
    double nombreDecimal;
};



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


2/PLACER DES TABLEAUX DANS UNE STRUCTURE:
////////////////////////////////////////


EXEMPLE:
///////

struct Personne
{
    char nom[100];
    char prenom[100];
    char adresse[1000];
    
    int age;
    int etudiant; // Booléen : 1 = etudiant, 0 = non etudiant
};


Cette structure est composée de cinq sous-variables. 
Les trois premières sont des chaînes qui stockeront le nom, le prénom et l adresse de la personne.
Les deux dernières stockent l âge et le statut étudiant de la personne (c est un booléen, 1 = vrai = étudiant ; 0 = faux = pas étudiant).

Il n y a pas de limite au nombre de variables dans une structure.



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


3/UTILISER UNE STRUCTURE DANS UNE FONCTION:
//////////////////////////////////////////









