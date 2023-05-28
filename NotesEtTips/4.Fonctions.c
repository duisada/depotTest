//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* FONCTIONS */

    1/FONCTION ECRITE AVANT LE MAIN
    2/FONCTION ECRITE APRES LE MAIN
    3/FONCTION QUI NE RETOURNE RIEN
    4/FONCTION DE CALCUL

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* NOTES */

Règle pour le nom de la fonction : Ne pas commencer par un chiffre, pas de caractères spéciaux, pas d espace, (_) underscore autorisé.

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





1/FONCTION ECRITE AVANT LE MAIN:
///////////////////////////////
    

#include <stdio.h>
    

int initialisationDeLaBalle(int positionX)                // Type de la fonction(ce qu elle retourne)pas systématique, nom de la fonction, le nom de la variable et le type ci besoin.
{
    positionX = 0;

    return positionX;                                      // return ci il y a un type à retourner.
} 


int main(int argc, char *argv[])
{
    int balle = 150;     


    printf("La position de la balle est à : %d\n", balle);  // Une partie se joue et la balle finit à la position 150

     
    balle = initialisationDeLaBalle(balle);                 // On reinitialise la position grace cette fonction 
    printf("La position de la balle est à : %d\n", balle);

    
    balle = 250;                                            // Une partie se joue à nouveau et la balle termine à la position 250
    printf("La position de la balle est à : %d\n", balle);

    
    balle = initialisationDeLaBalle(balle);                 // On reinitialise à nouveau la position grace à la fonction
    printf("La position de la balle est à : %d\n", balle);

    return 0;

}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


2/FONCTION ECRITE APRES LE MAIN : [il faut donc écrire le prototype de la fonction avant le main, et ne pas oublier le ";" à la fin]
///////////////////////////////


#include <stdio.h>

    

int initialisationDeLaBalle(int positionX);               // Prototype de la fonction, le nom de la variable(positionX) n'est pas obligatoire, le type l'est.


int main(int argc, char *argv[])
{
    int balle = 150;     


    printf("La position de la balle est à : %d\n", balle);  // Une partie se joue et la balle finit à la position 150

     
    balle = initialisationDeLaBalle(balle);                 // On reinitialise la position grace cette fonction 
    printf("La position de la balle est à : %d\n", balle);

    
    balle = 250;                                            // Une partie se joue à nouveau et la balle termine à la position 250
    printf("La position de la balle est à : %d\n", balle);

    
    balle = initialisationDeLaBalle(balle);                 // On reinitialise à nouveau la position grace à la fonction
    printf("La position de la balle est à : %d\n", balle);

    return 0;

}


int initialisationDeLaBalle(int positionX)                // Type de la fonction(ce qu elle retourne)pas systématique, nom de la fonction, le nom de la variable et le type ci besoin.
{
    positionX = 0;

    return positionX;                                      // return ci il y a un type à retourner.
} 



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


3/FONCTION QUI NE RETOURNE RIEN:
///////////////////////////////


#include <stdio.h>


void bonjour(void)
{
    printf("Bonjour !\n");
}


int main(int argc, char *argv[])
{
    bonjour();

    return 0;
}



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


4/AVEC FONCTION DE CALCUL:
/////////////////////////


#include <stdio.h>


int moyenneDesNombres(int nombre1, int nombre2, int nombre3);

int main(int argc, char *argv[])
{
    int nombre1;
    int nombre2;
    int nombre3;
    int resultat;


    printf("Veuillez entrer 3 nombres : \n");
    scanf("%d %d %d", &nombre1, &nombre2, &nombre3);

    resultat = moyenneDesNombres(nombre1, nombre2, nombre3); // ou resultat = moyenneDesNombres(resultat); 

    {
        printf("La moyenne de ces 3 nombres est : %d\n", resultat);
    }

    return 0;
}

int moyenneDesNombres(int nombre1, int nombre2, int nombre3)
{
    int moyenne = (nombre1 + nombre2 + nombre3) / 3;

    return moyenne; 
}





