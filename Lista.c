
#include "Lista.h"
#include <stdlib.h>
#include <stdio.h>

Nodo *CrearNodo(Libro* libro){

    Nodo *nodo=(Nodo *)malloc(sizeof(Nodo));
    nodo->libro.name=libro->name;
    nodo->libro.price=libro->price;
    nodo->siguiente=NULL;

    return nodo;
}

void Destroy_Node(Nodo* nodo){

    free(nodo);
}

void Add_firts_listaNode(Lista* lista, Libro* libro){

    Nodo *nodo=CrearNodo(libro);
    nodo->siguiente=lista->cabeza;
    lista->cabeza=nodo;
    lista->longitud++;
}

void Add_final_listaNode(Lista* lista,Libro* libro){


    Nodo *nodo=CrearNodo(libro);
    Nodo *puntero=lista->cabeza;

    if (lista->cabeza==NULL){

        lista->cabeza=nodo;
    }else{

        while(puntero->siguiente){

            puntero=puntero->siguiente;
        }

        puntero->siguiente=nodo;
    }
    lista->longitud++;
}

void Add_Any_position_listaNode(int n, Lista *lista, Libro *libro){


    Nodo *nodo=CrearNodo(libro);
    Nodo *puntero=lista->cabeza;
    int posicion=0;

    if (lista->cabeza==NULL){

        lista->cabeza=nodo;
    }else{

        if(n==0){

            puntero->siguiente=lista->cabeza;
            lista->cabeza=nodo;

        }

        while(posicion <n && puntero->siguiente){


            puntero=puntero->siguiente;
            posicion++;
        }

        nodo->siguiente=puntero->siguiente;
        puntero->siguiente=nodo;
    }
    lista->longitud++;
}

Libro *GetLibro(int n, Lista *lista){

    Nodo *puntero=lista->cabeza;
    int pos=0;

    if(lista->cabeza=NULL){

        return NULL;

    }else{

        while(pos <n && puntero->siguiente){

            puntero=puntero->siguiente;
            pos++;
        }
        if(pos!=n){

            return NULL;
        }else{

            return &puntero->libro;
        }
    }
}

int Contar(Lista *lista){

    return lista->longitud;
}

void Is_Cow(Lista *lista){

    return lista->cabeza==NULL;
}

void delete_first_listaNode(Lista *lista){

    Nodo *eliminar=lista->cabeza;
    lista->cabeza=lista->cabeza->siguiente;
    Destroy_Node(eliminar);
    lista->longitud--;
}

void Delete_lastNode(Lista *lista){

    Nodo *puntero=lista->cabeza;
    if(lista->cabeza){

        while(puntero->siguiente->siguiente){

                puntero=puntero->siguiente;
        }

        Nodo *eliminar=puntero->siguiente;
        puntero->siguiente=NULL;
        Destroy_Node(eliminar);
        lista->longitud--;
    }
}

void Delete_Any_element(int n, Lista *lista){


    Nodo *puntero=lista->cabeza;
    int pos=0;
    if(lista->cabeza){

        if(n==0){

            Nodo *eliminar=lista->cabeza;
            lista->cabeza=lista->cabeza->siguiente;
            Destroy_Node(eliminar);
            lista->longitud--;

        }else if (n <lista->longitud){


             while(pos < n-1){

            puntero=puntero->siguiente;
            pos++;
            }

            Nodo *eliminar=puntero->siguiente;
            puntero->siguiente=eliminar->siguiente;
            Destroy_Node(eliminar);
            lista->longitud--;

        }
    }
}
