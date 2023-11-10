#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inicioSesion(int cuenta[], char pass[]);

void main()
{
    int numeroCuenta[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 999};
    char contrasenia[10]= {"pass1", "pass2", "pass3", "pass4", "pass5", "pass6", "pass7", "pass8", "pass9", "pass99"};
    char nombres[10]= {"Matias Rambado", "Nair Gracia", "Carlos Ramirez", "Valeria Perez", "Marcelo Denis", "Nicolas Canil", "Cristian Rodriguez", "Celeste Plano", "Leonela Oricain", "Anita Zapata"};
    float saldo[10]= {450000, 598000, 700000, 999000, 190000, 267000, 350987, 123000, 98000, 568098};
    int estadoCuenta[10] = {1, 1, 1, 1, 1, 1, 1, 0, 0, 1};
   
   do
   {
    inicioSesion(numeroCuenta, contrasenia);


   } while (/* condition */);
   














    system("pause");
}

void inicioSesion(int cuenta[], char pass[])
{
    do
    {
       printf("Ingrese su n%cmero de cuenta:\t",163);
       scanf("%d", &cuenta);
       printf("Ingrese contrase%ca:\t",164);
       scanf("%d", &pass);

       
    } while (cuenta == cuenta[] );
    
}