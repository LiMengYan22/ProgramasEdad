#include <stdio.h>
#include <conio.h>
int main()
{
    int edad;
    printf( "\n   Introduzca edad: " );
    scanf( "%d", &edad );
    if ( edad >= 0 && edad <= 120 )
        if ( edad < 2 )
            printf( "\n   BEB%c", 144 );
        else
            if ( edad < 13 )
                printf( "\n   NI%cO", 165 );
            else
                if ( edad < 18 )
                    printf( "\n   ADOLESCENTE" );
                else
                    if ( edad < 31 )
                        printf( "\n   JOVEN");
                    else
                        if ( edad < 65 )
                            printf( "\n   ADULTO" );
                        else
                            printf( "\n   ANCIANO" );
    else
        printf( "\n   ERROR: Edad incorrecta." );
    getch(); /* Pausa */
   
    return 0;
}   
 //funcion bisiesto
int Bisiesto(int anyo)
{
int error=0;
if ( ((anyo%4==0) && (anyo%100!=0) || (anyo%400==0) )
error=0;
else
error=1;
return error;
}
