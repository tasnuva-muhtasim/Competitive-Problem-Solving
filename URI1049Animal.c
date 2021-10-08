#include <stdio.h>
#include <string.h>
int main()
{
     char a[15],b[15],c[15],d;
    scanf("%s\n%s\n%s",a,b,c);
    char e1[15] = "vertebrado";
    char f1[15] = "ave";
    char f2[15] = "inseto";
    char g1[15] = "carnivoro";
    char g2[15] = "onivoro";
    char g3[15] = "hematofago";
    if( strcmp(a,e1) == 0)
    {
        if(strcmp(b,f1) == 0)
        {
            if (strcmp(c,g1) == 0)
            {
                printf("aguia\n");
            }
            else if (strcmp(c,"onivoro") == 0)
            {
              printf("pomba\n");
            }
        }
        else if(strcmp(b,"mamifero") == 0)
        { 
            if(strcmp(c,g2) == 0)
            {
               printf("homem\n");
            }
            else if(strcmp(c,"herbivoro") == 0)
            {
                printf("vaca\n");
            }
        }
    }
    else if(strcmp(a,"invertebrado") == 0)
    {
        if(strcmp(b,"inseto") == 0)
        {
            if (strcmp(c,g3) == 0)
            {
                printf("pulga\n");
            }
            else if(strcmp(c,"herbivoro") == 0)
            {
              printf("lagarta\n");
            }
        }
        else if (strcmp(b,"anelideo") == 0)
        { 
            if(strcmp(c,"hematofago") == 0)
            {
               printf("sanguessuga\n");
            }
           else if(strcmp(c,"onivoro") == 0)
           {
               printf("minhoca\n");
            }
        }
    }
    
    return 0;
}
