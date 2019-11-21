//Esta es una tienda que vende productos de Platzi en la terminal
#include <stdio.h>
#include <string.h>

int op;
int totalGorras=0;
int cantGorras;
int seguirComprando = 1;
int totalCamisetas=0;
int cantCamisetas;
int a,b,c,d,e,f;

void main()
{

    while(seguirComprando == 1)
    {
        printf("\n");
        printf("*****************************\n");
        printf("* Bienvenido a Platzi Store *\n");
        printf("*****************************\n");
        printf("\n");
        printf("Elije el producto que buscas\n");
        printf("\n");
        printf("1- Gorras.\n");
        printf("2- Camisetas.\n");
        printf("\n");
        scanf("%d", &op);
        printf("\n");

        switch(op)
        {
            case 1:
              printf("Precio: $500, cuantas desea?.\n");
              scanf("%d", &cantGorras);
              printf("\n");
              totalGorras = totalGorras + (cantGorras*500);
              printf("El monto total de gorras es de $%d\n", totalGorras);
              printf("\n");

            case 2:
              printf("Precio: $800, cuantas desea?.\n");
              scanf("%d", &cantCamisetas);
              printf("\n");
              totalCamisetas = totalCamisetas + (cantCamisetas*800);
              printf("El monto total de camisetas es de $%d\n", totalCamisetas);
              printf("\n");
              break;

            default:
              printf("El producto especificado no se encuentra disponible\n");
              printf("\n");
              printf("1- Para elegir otro producto.\n");
              printf("Pulse una tecla para continuar.\n");
              scanf("%d", &seguirComprando);
              break;
        }

        printf("\n");
        printf("Gracias por elegirnos!\n");






 }//cierre del primer while
}
