
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
NOMBRES PREMIERS
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Les nombres premiers sont des nombres entiers qui ne sont divisibles que par 1 et par eux-mêmes.
En d autres termes, un nombre premier est un nombre qui n a pas de diviseurs autres que 1 et lui-même.

Par exemple, 2 est un nombre premier car il ne peut être divisé que par 1 et 2. 
3 est également un nombre premier car il ne peut être divisé que par 1 et 3.
En revanche, 4 n est pas un nombre premier car il peut être divisé par 1, 2 et 4.


EXEMPLE


#include <stdio.h>

int estPremier(int n);


int main(int argc, char *argv[])
{
	int nombreEntre;

	printf("Veuillez entrer un nombre :\n");
	scanf("%d", &nombreEntre);

	if(estPremier(nombreEntre))
	{
		printf("Le nombre entré est premier\n");
	}
	else
	{
		printf("Le nombre entré n'est pas premier\n");
	}

	return 0;
}


int estPremier(int n)
{
	int i;

	if(n < 2)
	{
		return 0;
	}

	for(i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}

	return 1;
	
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
FACTORIELLE D UN NOMBRE
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

La factorielle d un nombre entier positif n, représentée par n!, est le produit de tous les entiers positifs inférieurs ou égaux à n.
En d autres termes, n! est égal à :
n! = 1 * 2 * 3 * ... * n

Par exemple, 5! est égal à 1 * 2 * 3 * 4 * 5, soit 120.

La factorielle peut également être calculée de manière récursive. 
La définition récursive de la factorielle est la suivante :

n! = n * (n-1)!

avec la condition de base :

0! = 1

Par exemple, 5! peut être calculé de la manière suivante :

5! = 5 * 4!
= 5 * 4 * 3!
= 5 * 4 * 3 * 2!
= 5 * 4 * 3 * 2 * 1!
= 5 * 4 * 3 * 2 * 1
= 120

La factorielle est utilisée dans de nombreux domaines des mathématiques et de l informatique, notamment pour le calcul de combinaisons, de permutations et pour l analyse des algorithmes.



EXEMPLE:



#include <stdio.h>


int factorielleNombreEntre(int nombreDonne);

int main(int argc, char *argv[])
{
	int nombreEntre;
	int resultat;
	
	printf("Entrez un nombre entier :\n");
	scanf("%d", &nombreEntre);

	resultat = factorielleNombreEntre(nombreEntre);

	printf("La factorielle du nombre %d est %d\n", nombreEntre, resultat);

	return 0;
}

int factorielleNombreEntre(int nombreDonne)
{
	int factNombre = 1;
	int i = 1;

	for (i = 1; i <= nombreDonne; i++)
	{
		factNombre = i * factNombre;
		printf("%d\n", factNombre);    // sans printf le décompte avant le resultat ne s'affiche pas.
	}

	return factNombre;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////