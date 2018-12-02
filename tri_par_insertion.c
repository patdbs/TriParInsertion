#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#define MAX 30
typedef int tab[MAX];

void generation(tab);
void affiche(tab,int);
void triParSelection(tab,int);
void triParInsertion(tab,int);
void maintientTrie(tab,int);

void affiche(tab t, int n)
{
        int i;
        for(i=0;i<n;i++)
        {
          printf("%d ", t[i]);
        }
        printf("\n");
}




void generation(tab t)
{
    int i,rd;
    for(i=0;i<MAX;i++)
    {
      if(i%2==0)
      {
          rd = i;
      }else{
        rd = -i;
      }
      t[i]=rd; 
    }
}

void triParInsertion(tab t, int N)/**Il parcourt le tableau à partir de n+1 et cherche les éléments supérieurs, si un élément est inférieur, il cherche sa position*/
{
        int i;
        for(i=1;i<N;i++)
        {
            maintientTrie(t,i);
        }
}

void maintientTrie(tab t, int i)
{
        bool trie;/**Condition d'arret quand on trouve un élément supérieur*/
        int tmp;
        trie=false;
        while((i>0)&&(!trie))
        {
            if(t[i]<t[i-1])
            {
                tmp = t[i-1];
                t[i-1]=t[i];
                t[i]=tmp;
            }else{
                trie = true;
            }
            i--;
        }
}


int main(const int argc, const char **argv) {
	tab letab2;
	int taille;
	taille = MAX;
    	generation(letab2);
    	printf("AFFICHAGE NORMAL \n");
    	affiche(letab2,taille);
    	triParInsertion(letab2,taille);
    	printf("AFFICHAGE TRI PAR INSERTION \n");
    	affiche(letab2,taille);
	return EXIT_SUCCESS;
}

