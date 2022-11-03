#include <iostream>
#include <cstdio>
#include <list>
#include <fstream>
#include <sstream>
#include "listVendedor.h"
//213,billy,adae,adsas,123,31,asd3,13,123,31





void guardarVendedor(Vendedor vendedor) {
    ofstream fichero("ventas.txt", ifstream::app);
    string buffer = vendedor.toString();            // contiene todos los datos de vededores.h y se almacena en ventas.txt
    if (!fichero.fail()) {
        fichero << buffer;    //se le asigna a ficheros lo que esta en toString()
        fichero.close();
    } else {
        printf("Error de Archivo\n");
    }
}


/*
* Nombre de la función: guardarTodo.
* Tipo de función: vacia.
* Parámetros: ninguno.
* Dato de retorno: ninguno;
* Descripción de la función: La función borra lo que esta en el archivo binario y luego guarda los datos que queremos al
 *                           llamar la funcion.
*/
void guardarTodo(ListaVendedores vendedores) {
    remove("ventas.txt");
    for (int i = 0; i < fin(vendedores) + 1; ++i) {
        guardarVendedor(recupera(i, vendedores));
    }
}

ListaClientes crearClientes(string datos) {
    ListaClientes lista;
    stringstream cliente(datos);
    for (std::string line; getline(cliente, line,
                                   ';');)  //guarda la linea ubicada en el stream input en la variable line
    {
        stringstream ss(line);
        Cliente nuevo;
        string c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
        getline(ss, c1, ':');
        getline(ss, c2, ':');
        getline(ss, c3, ':');
        getline(ss, c4, ':');
        getline(ss, c5, ':');
        getline(ss, c6, ':');
        getline(ss, c7, ':');
        getline(ss, c8, ':');
        getline(ss, c9, ':');
        getline(ss, c10, ':');
        cout<<c1;

        inserta(Cliente(c1, c2, c3, c4, c5, c6, c7, c8, c9, c10), fin(lista), lista);
    }
    return lista;
}


ListaVendedores leerVendedores() {
    ListaVendedores vendedores;
    ifstream input( "ventas.txt" );
    int index=0;
    for( std::string line; getline( input, line ); )
    {   Vendedor nuevo;
        string n,n2,n3,n4,n5,n6,n7,n8,n9;
        stringstream  ss(line);
        getline( ss,n, ',');
        getline( ss,n2, ',');
        getline( ss,n3, ',');
        getline( ss,n4, ',');
        getline( ss,n5, ',');
        getline( ss,n6, ',');
        getline( ss,n7, ',');
        getline( ss,n8, ',');
        getline( ss,n9, ',');
        nuevo.setCuenta(n);
        nuevo.setNombre(n2);
        nuevo.setApellido(n3);
        nuevo.setRut(n4);
        nuevo.setTelefono(n5);
        nuevo.setDireccion(n6);
        nuevo.setEdad(n7);
        nuevo.setProfesion(n8);
        nuevo.setDeuda(n9);



//        printf("%s\n", line.c_str());                        PRUEBA DE CODIGO
//        printf("%s\n",nuevo.telefono.c_str());
//        printf("%s\n",nuevo.nombre.c_str());

        inserta(nuevo, fin(vendedores), vendedores);

    }
    input.close();
    return vendedores;
}


