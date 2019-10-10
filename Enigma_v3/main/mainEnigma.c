#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include"menus.h"
#include"../Maquina/interfaz.h"

int main()
{
    system(" title Proyecto Integrador V.3");/*cambia el titulo de la consola*/
    srand((unsigned)time(NULL));
    gestionMenuPrincipal (); /*llamada a la funcion gestionmenuprincipal*/
    return 0;
}
