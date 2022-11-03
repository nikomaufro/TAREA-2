#include <stdio.h>
#include "cliente.h"


#define tipoDato Cliente


struct nodo {
    tipoDato dato;
    struct nodo *next;

    nodo() {
        next = NULL;
    }

    nodo(tipoDato x) {
        nodo();
        dato = x;
    }
};


struct ListaClientes {
    struct nodo *primero;

    ListaClientes() {
        primero = NULL;
    }

};


/* Prototipos */

bool vacia(ListaClientes lista);

int primero(ListaClientes lista);

int primero(ListaClientes lista);

int anterior(int p, ListaClientes lista);

int siguiente(int p, ListaClientes lista);

int fin(ListaClientes lista);

void inserta(tipoDato x, int p, ListaClientes &lista);

tipoDato recupera(int p, ListaClientes lista);

int localiza(tipoDato x, ListaClientes lista);

//void imprime(ListaClientes lista);

void suprime(int p, ListaClientes &lista);

void anula(ListaClientes &lista);


bool vacia(ListaClientes lista) {
    return fin(lista) == primero(lista);
}

int primero(ListaClientes lista) {
    return 1;
}

int anterior(int p, ListaClientes lista) {
    return p - 1;
}

int siguiente(int p, ListaClientes lista) {
    return p + 1;
}

int fin(ListaClientes lista) {
    int c = 1;
    nodo *aux = lista.primero;
    while (aux != NULL) {
        aux = aux->next;
        c++;
    }
    return c;
}

void inserta(tipoDato x, int p, ListaClientes &lista) {
    nodo *nuevo = new nodo(x);
    nodo *aux = lista.primero;
    if (primero(lista) == p) {
        nuevo->next = lista.primero;
        lista.primero = nuevo;
    } else {
        for (int i = 0; i < p - 2; i++)
            aux = aux->next;
        nuevo->next = aux->next;
        aux->next = nuevo;
    }
}

tipoDato recupera(int p, ListaClientes lista) {
    nodo *aux = lista.primero;
    for (int i = 1; i < p; i++)
        aux = aux->next;
    return aux->dato;
}

int localiza(string x, ListaClientes lista) {
    for (int i = primero(lista); i < fin(lista); i = siguiente(i, lista))
        if (recupera(i, lista).getRut() == x)
            return i;
    return fin(lista);
}
string stringClientes(ListaClientes clientes){
    string string;
    for (int i = primero(clientes); i < fin(clientes); i++) {
        tipoDato x = recupera(i, clientes);
        string+=x.toString();
    }
    return string ;
}

void imprime(ListaClientes clientes) {
    for (int i = primero(clientes); i < fin(clientes); i++) {
        tipoDato x = recupera(i, clientes);

        cout
             << x.getNombre() << "\n"
             << x.getApellido() << "\n"
             << x.getRut() << "\n"
             << x.getTelefono() << "\n"
             << x.getDireccion() << "\n"
             << x.getEdad() << "\n"
             << x.getProfesion() << "\n"
             << x.getDeuda() << "\n";
    }
    printf("-------\n");
}


//void imprime(ListaClientes lista) {
//    for (int i = primero(lista); i < fin(lista); i = siguiente(i, lista)) {
//        tipoDato x = recupera(i, lista);
//        printf("[%d]-> ", x);
//    }
//    printf("*\n");
//}

void suprime(int p, ListaClientes &lista) {
    nodo *aux = lista.primero;
    if (primero(lista) == p)
        lista.primero = aux->next;
    else {
        nodo *aux2 = lista.primero;
        for (int i = 0; i < p - 2; i++)
            aux2 = aux2->next;
        aux = aux2->next;
        aux2->next = aux->next;
    }
    aux->next = NULL;
    delete aux;
}

void anula(ListaClientes &lista) {
    while (!vacia(lista))
        suprime(primero(lista), lista);
}

//
//
//
//
//
//




