#include<stdio.h>
#include<stdlib.h>
int sort_bubble_dinam(int n)
{
    int i,gasit,aux;
    int *tab;
    if((tab=(int*)malloc(n*sizeof(int)))==NULL)// Alocarea dinamica 
    {
        printf("Erroare la alocarea dinamica !");
        exit(1);
    }
    for(i=0;i<n;i++)//Citirea elementelor vectorului (prima parcurgere)!!
    {
        printf("tab[%d]=",i);
        scanf("%d",&tab[i]);
    }
    printf("VECT:");//Afisarea vectorului nesortat !!
    for(i=0;i<n;i++)
    {
        printf("%d ",tab[i]);
    }
    do{
        gasit=1;
        for(i=0;i<n;i++)
        {
            if(tab[i]>tab[i+1])      // De la Do INCEPE SORTAREA!!
            {
                aux=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=aux;
                gasit=0;
            }}}while(gasit!=1);    //Se termina sortarea!!
            printf("\n");
            printf("VECT ORD:");
            for(i=0;i<n;i++)
            {
                printf("%d ",tab[i]); //Primul 0 sa se ignore !!!! :)) Afisarea vectorului sortat !!!
            }
            printf("\n");
            printf("ADRESE:");       //Pointerii !!! (Adresele)
            for(i=0;i<n;i++)
            {
                printf("%p ",tab);
            }
            free(tab); //Eliberearea memoriei !!
            return 0;
        }
        int main()
        {
            int a;
            printf("N="); //Apelul Functiei !!!!
            scanf("%d",&a);
            sort_bubble_dinam(a);
        }




