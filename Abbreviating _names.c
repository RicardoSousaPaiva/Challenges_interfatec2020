 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nome[100];
    int esp=0,col=0;
    printf("\n\n Escreva um nome: \n\n  ");
    fgets(nome,100,stdin);
    printf("\n\n");
    for(col=0;nome[col]!='\n';col++)
        if(nome[col]==' ')
            esp++;
    col=0;
    printf("  ");
    if(esp<=1)
        printf("\nNao ha nomes intermediarios");
    else
    {
        while(nome[col]!=' ')
        {
            printf("%c",nome[col]);
            col++;
        }
        while(esp>1)
            if((nome[col+1]=='d') && (nome[col+2]=='a' nome[col+2]=='o'nome[col+2]=='e'))
             {
                 if(nome[col+3]==' ')
                   {
                     printf(" %c%c",nome[col+1],nome[col+2]);
                     col+=3;
                     esp--;
                   }
                 else
                   if(nome[col+3]=='s'&&nome[col+4]==' ')
                     {
                       printf(" %c%c%c",nome[col+1],nome[col+2],nome[col+3]);
                       col+=4;
                       esp--;
                     }
             }
               else
            {
              col++;
              printf(" %c.",nome[col]);
              esp--;
              while(nome[col]!=' ')
                 col++;
            }
            col++;
            printf(" ");
            while(nome[col]!='\n')
            {
            printf("%c",nome[col]);
            col++;
            }

        }
    }