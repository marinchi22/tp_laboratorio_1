#include <stdio.h>
#include <stdlib.h>

int menuDeOpciones();
int suma();
int resta();
int division();
int multiplicacion();

int main()
{
    menuDeOpciones();
    return 0;
}


int menuDeOpciones()
{
    char opcion;
    char salir;

    do
    {
        int operador1=0;
        int operador2=0;

        printf("\n ---------- Menu De Opciones ---------- \n");
        printf("valores Actuales A= %d  B = %d ",operador1,operador2);
        printf("\n 1. Ingresar 1er Operando ");
        printf("\n 2. Ingresar 2do Operando  ");
        printf("\n 3. Calcular todas las operaciones ");
        printf("\n  a) Calcular la suma de (A + B) ");
        printf("\n  b) Calcular la resta de (A - B) ");
        printf("\n  c) Calcular la division de (A / B) ");
        printf("\n  d) Calcular la multiplicacion de (A * B) ");
        printf("\n 4. Informar resultados ");
        printf("\n 5. Salir\n");
        scanf("%c",&opcion);
        fflush(stdin);

        switch(opcion)
        {
        case '1':
            system("cls");
            printf("\n Ingresando el 1er operando : ");
            scanf("%d",&operador1);
            fflush(stdin);

            break;
        case '2':
            system("cls");
            printf("\n Ingresando el 2do operando : ");
            scanf("%d",&operador2);
            fflush(stdin);
            break;
        case '3':
            printf("\n Calculando todas las Operaciones \n");
            fflush(stdin);
            break;
        case 'a':
            printf("\n elegiste sumar");
            fflush(stdin);
            printf(" %d ",suma(operador1,operador2));
            break;
            system("cls");
        case 'b':
            printf("\n elegiste restar");
            fflush(stdin);
            printf(" %d ",resta(operador1,operador2));
            break;
        case 'c':
            printf("\n elegiste dividir");
            fflush(stdin);
            printf(" %d ",division(operador1,operador2));
            break;
        case 'd':
            printf("\n elegiste multiplicar");
            fflush(stdin);
            printf(" %d ",multiplicacion(operador1,operador2));
            break;
        case 'e':
            printf("\n elegiste factorial");
            fflush(stdin);
            break;
        case '4':
            printf("Eligio mostrar los resultados");
            printf(" %d ", suma(operador1,operador2));
            fflush(stdin);
            break;
        case '5':
            printf("Usted eligio salir");
            printf("\n Esta seguro? presione (s) para salir o (n) para continuar operando \n \n ");
            scanf("%c",&salir);
            break;
        default:
            printf(" \n Error, no ingreso una opcion valida");
            fflush(stdin);
            break;
        }

    }
    while( salir != 's' );
    return 0;
}


int suma(int operador1,int operador2)
{
    int suma=operador1+operador2;
    printf("\n El resultado de %d + %d es: ",operador1,operador2);
    return suma;
}
int resta(int operador1,int operador2)
{
    int resta=operador1-operador2;
    printf("\n El resultado de %d - %d es: %d",operador1,operador2, resta);
    return resta;
}
int division(int operador1,int operador2)
{
    int division=operador1/operador2;
    printf("\n El resultado de %d / %d es: %d",operador1,operador2, division);
    if(operador1== 0 || operador2==0)
    {
        printf("\n ATENCION : No es posible dividir por 0 \n");
    }
    else
    {
        division= (float) operador1/operador2;
        printf(" \n La division de %d y %d da como resultado : %d \n",operador1,operador2,division);
    }
    return division;
}
int multiplicacion(int operador1,int operador2)
{
    int multiplicacion=operador1*operador2;
    printf("\n El resultado de %d - %d es: %d",operador1,operador2, multiplicacion);
    if( operador1== 0 || operador2==0)
    {
        printf("\n ATENCION: Todo numero multiplicado por 0 es igual a 0 \n");
    }
    else
    {
        multiplicacion= (float) operador1*operador2;
        printf("\n La multiplicasion de %d y %d da como resultado : %d \n",operador1,operador2,multiplicacion);
    }
    return multiplicacion;
}



