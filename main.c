#include <stdio.h>
#include <stdlib.h>

void saisir(int *n)
{
    printf("donner la taille du tableau : ");
    scanf("%d",n);
}
void remplir(int *T,int n)
{
    int *p=T;
    for (p=T;p<T+n;p++)
    {
        printf("T[%d]=",p-T);
        scanf("%d",p);
    }
}
void afficher(int *T,int n)
{
    int *p=T;
    for (p=T;p<T+n;p++)
    {
        printf("%d | ",*p);
    }
    printf("\n");
}
void inserer(int *T,int n)
{
    int *p=T;
    int x,r;
    printf("donner l element a inserer : ");
    scanf("%d",&x);
    printf("donner la position ou vous souhaitez inserer votre element : ");
    scanf("%d",&r);
    n++;
    for (p=T+n;p>T+r;p--)
    {
        *p=*(p-1);
    }
    *(p+r)=x;
    printf("le tableau apres insertion est : ");
    for (p=T;p<T+n;p++)
    {
        printf("%d | ",*p);
    }
    printf("\n");
}
void supprimer(int *T,int n)
{
    int *p=T;
    int r;
    printf("donner la position de l element que vous souhaitez supprimer : ");
    scanf("%d",&r);
    for (p=T+r;p<T+n;p++)
    {
        *p=*(p+1);
    }
    n--;
    printf(" le tableau apres suppression est :\n");
    for (p=T;p<T+n;p++)
    {
        printf("%d | ",*p);
    }
}
int recherche(int *T,int n)
{
    int *p=T;
    int x;
    printf("donner l element a rechercher");
    scanf("%d",x);
    for (p=T;p<T+n;p++)
    {
        if (*p==x)
            return(p);
    }
    return 0;
}
void inverser(int *T,int n)
{
    int *d=T;
    int *f=T+(n-1);
    int aux;
    while(*d<*f)
    {
        aux=*d;
        *d=*f;
        *f=aux;
        d++;
        f--;
    }
}
int main()
{
    int n;
    int T;
    saisir(&n);
    T=malloc(n*sizeof(int));
    remplir(T,n);
    afficher(T,n);
    inserer(T,n);
    supprimer(T,n);
    recherche(T,n);
}
