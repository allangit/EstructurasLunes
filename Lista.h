#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "Libro.h"

typedef struct Nodo{

    Libro libro;
    struct Nodo *siguiente;
}Nodo;

typedef struct Lista{

    Nodo *cabeza;
    int longitud;
}Lista;

#endif // LISTA_H_INCLUDED
