


	+ (adition)
	- (soustraction)
	* (multiplication)
	/ (division)
	% (modulo) exemple -> 5 % 2 = 1


	/*OPERATEURS DE COMPARAISON:*/
	== : égal à
	!= : différent de
	<  : plus petit que
	>  : plus grand que
	<= : plus petit ou égal à
	>= : plus grand ou égal à

	&& : ET    (Pour que cela fonctionne les deux conditions doivent etre validés)
	|| : OU    (Pour que cela fonctionne une seul des deux conditions doit etre validé)
	!  : NOT
    () : ce qui est mis entre parenthese est prioritaire    exemple : ((age >= 1 && age <= 100) ||  age == 375)

	-= exemple(A = A - X -> "A -= X") //--------->    <variable> = <variable> + X     -->     <variable> += X
	+= exemple(A = A + X -> "A += X")
	*= exemple(A = A * X -> "A *= X")
	/= exemple(A = A / X -> "A /= X")


	nomDeVariable++    (incrémentation, nomDeVariable + 1)
	nomDeVariable--    (decrémentation, nomDeVariable - 1)
	nomDeVariable += 5 (nomDeVariable + 5)
	nomDeVariable -= 5 (nomDeVariable - 5)


	%d : nombre entier (int) "1"
	%f : nombre flottant (float) "1.5" // Astuce : %.2f pour un resultat affiché avec seulement 2 chiffres apres la virgule, %.3f pour 3 chiffres etc...
	%c : charactère (char) "A"
	%s : chaine de charactère (texte) 


	 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* VARIABLES */ 

 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////













	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	/* FONCTIONS */

	Règle pour le nom de la fonction : Ne pas commencer par un chiffre, pas de caractères spéciaux, pas d espace, (_) underscore autorisé.

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




	/* EXEMPLE 1 */ Fonction ecrite avant le main

	/////////////////////////////////////////////////////////////////////////////////////


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




	/////////////////////////////////////////////////////////////////////////////////////

	/* EXEMPLE 2 */ Fonction écrite après le main (il faut donc écrire le prototype de la fonction avant le main, et ne pas oublier le ";" à la fin)




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


	/////////////////////////////////////////////////////////////////////////////////////

	/* EXEMPLE 3 */ Fonction qui ne retourne rien



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



/////////////////////////////////////////////////////////////////////////////////////

	/* EXEMPLE 4 */ Avec fonction de calcul



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




 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* CONDITIONS */ 

 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    /* IF, ELSE IF, ELSE */ 

    int age = 10                                                                                                                                                                                                                           
                                                                           
    if (age < 1)                                                                                                                    
    {
    	printf("Tu es un bébé\n");
    }
    else if (age == 10)                      | else if (age >= 1 && age <= 100)
    {                                        | {   
    	printf("tu as 10 ans !\n");          | 		printf("Tu as un age compris entre 1 et 100 ans\n");
    }                                    ou  | }
    else                                     | else
    {                                        | {
    	printf("Age : %d\n", age);           | 		printf("Wahh, tu as plus de 100 ans !!!\n");
    }                                        | }
    
    

    return 0; 
    / Un seul if, un seul else, et entre les deux un ou plusieurs else if

/////////////////////////////////////////////////////////////////////////////////////

    /* SWITCH */ Valable uniquement pour les chiffres 
	
	int age = 375;

	switch(age)
	{
		case 0:
			printf("Tu as 0 an\n");
			break

		case 15:
		printf("Tu as 15 ans\n");

		default:
			printf("Tu n'as ni 0 an, ni 15 ans\n", );
			break;

	}

	return 0;

	/////////////////////////////////////////////////////////////////////////////////////

	/* TERNARY */

	int age = 15;

	(age == 15) ? printf("Tu as 15 ans.\n") : printf("Tu n'as pas 15 ans.\n");

	return 0;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	/* BOUCLES */ 
	break; pour sortir d une boucle

 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	/* WHILE */

	int i = 0;

	while(i < 20)
	{
		printf("Alerte, les zombies nous envahissent !\n");
		i++; // a chaque boucle i prend + 1 grace au ++
	}

	return 0;

//////////////////////////////////////////////////////////////////////////////////////

	/* DO WHILE */

	int i = 0;

	do
	{
		printf("Aya !!\n");
		i++
	}
	while(i < 5);

	return 0;

//////////////////////////////////////////////////////////////////////////////////////

	/* FOR */

	int i;

	for(i = 0 ; i < 5 ; i++) // explication de la parenthèse (initialisation du i ; tant que i est inferieur à 5 ; ajouter 1 à i)
	{
		printf("Aya !!\n");
	}

	return 0;

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	/* POINTEURS */

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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


  
  EXEMPLE 1 :

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




  EXEMPLE 2 :

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



EXEMPLE 3 :

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


	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	/* TABLEAUX */



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

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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



/* Pour afficher la liste du tableau avec un FOR */
///////////////////////////////////////////////////
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

/* POUR INITIALISER UN TABLEAU */
//////////////////////////////////////////////////////////////////////////////////////

/* En faisant une boucle */
//////////////////////////

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


/* Autre façon de faire */
/////////////////////////

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


/* Autre façon de faire */
/////////////////////////

int tableau[4] = {10, 23}; // Valeurs insérées 10, 23, 0, 0


/* Autre façon de faire */
/////////////////////////

int tableau[4] = {0}; // Toutes les cases du tableau seront initialisées à 0



	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	/* CHAINES DE CHARACTERES */

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


Créer et initialiser une chaîne:
///////////////////////////////



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



  Deuxième méthode:
 /////////////////


#include <stdio.h>


int main(int argc, char *argv[])
{
	char chaine[6] = {'S', 'a', 'l', 'u', 't', '\0'}; // ou char chaine[6] = {'S', 'a', 'l', 'u', 't', '\0'};

	printf("%s\n", chaine);

	return 0;
}



 Troisième méthode:
 /////////////////


#include <stdio.h>

int main(int argc, char *argv[])
{
	char chaine[] = "Salut !";   // La chaîne de charactères entres parenthèse pour indiquer au compilateur la taille du tableau nécessaire 

	printf("%s\n", chaine);

	return 0;
}



Récupérer une chaine de caractères via un scanf:
//////////////////////////////////////////////////////////////////////////////////////

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






	const /*(constante, noté lors de la déclaration de la variable,Nom de la variable en MAJUSCULE)*/  ex: const float PI = 3.14;

 