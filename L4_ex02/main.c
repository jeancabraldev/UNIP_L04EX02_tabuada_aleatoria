#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Fa�a um programa onde o usu�rio informa qual tabuada ele deseja visualizar
     *e o programa deve exibir a tabuada do n�mero informado pelo usu�rio.
     */

     int x, num;

     printf("\nInforme qual tabuala deseja visualizar: ");
     scanf("%d", &num);

     for(x = 0; x <= 10; x++){
        printf("\n%d X %d = %d", num, x, x * num);
     }
     return 0;
}
