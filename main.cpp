#include <iostream>
#include <cstdio>
#include "estructure/utils.h"

#define Lista vendedores;

void eliminarPorRut();
void buscarPorRut();
void crearVendedor();



ListaVendedores vendedores;


int main() {
    vendedores=leerVendedores();
    int opcion;
    do {

        cout<<("ingrese su opcion: \n");
        cout<<("1) imprime\n");
        cout<<("2) Eliminar Vendedor por rut\n");
        cout<<("3) crear vendedor\n");
        cout<<("4) busca por rut Vendedor\n");
        cout<<("5) Salir\n");

        cout<< "Ingrese su opcion: " << "\n";
        cin >> opcion;

        switch (opcion) {
            case 1:
                imprime(vendedores);
                break;
            case 2:
                eliminarPorRut();
                break;
            case 3:
                crearVendedor();
                break;
            case 4:
                buscarPorRut();
                break;
            case 5:
                break;
            default:
                printf("Opcion incorrecta\n");
                break;
        }fflush(stdin);
    } while (opcion != 5);

    return 0;
}

void eliminarPorRut(){
    string n;
    cin >> n;
    suprime(localiza(n,vendedores), vendedores);
    fflush(stdin);
}

void buscarPorRut(){
//    todo if si no encuentra
    cout << "INGRESE EL Rut: " << "\n";
    string n;
    cin >> n;
    recupera(localiza(n,vendedores), vendedores);
    fflush(stdin);
}





void crearVendedor() {
    Vendedor nuevo;
    string n,n2,n3,n4,n5,n6,n7,n8,n9;
    printf("Ingrese la Cuenta Bancaria para el vendedor: \n");
    cin >> n;
    fflush(stdin);
    printf("Ingrese el nombre del vendedor: \n");
    cin >> n2;
    fflush(stdin);
    printf("Ingrese el Apellido del vendedor:  \n");
    cin >> n3;
    fflush(stdin);
    printf("Ingrese el Rut del vendedor:  \n");
    cin >> n4;
    fflush(stdin);
    printf("Ingrese el Telefono para el contacto:  \n");
    cin >> n5;
    fflush(stdin);
    printf("Ingrese la Direccion del vendedor:  \n");
    cin >> n6;
    fflush(stdin);
    printf("Ingrese la Edad para el contacto:  \n");
    cin >> n7;
    fflush(stdin);
    printf("Ingrese la Profesion del vendedor:  \n");
    cin >> n8;
    fflush(stdin);
    printf("Ingrese la Deuda del vendedor:  \n");
    cin >> n9;
    fflush(stdin);

    nuevo=Vendedor("1",n,n2,n3,n4,n5,n6,n7,n8,n9);

    guardarVendedor(nuevo);
}









