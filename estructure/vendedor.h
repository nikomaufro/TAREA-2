#include <iostream>
#include <cstdio>
#include <string>
#include "list.h"

using namespace std;

class Vendedor {
private:
    string id;
    string cuenta;
    string nombre;
    string apellido;
    string rut;
    string telefono;
    string direccion;
    string edad;
    string profesion;
    string deuda;
    string fechaDePago;
public:
    ListaClientes clientes;

    Vendedor() {   // CONSTRUCTOR DE VENDEDOREs
    }

    Vendedor(const string &id, const string &cuenta, const string &nombre, const string &apellido, const string &rut,
             const string &telefono, const string &direccion, const string &edad, const string &profesion,
             const string &deuda
//             ,
//             const string &fechaDePago, const ListaClientes &clientes
             ) :
            id(id),
            cuenta(cuenta),
            nombre(nombre),
            apellido(apellido),
            rut(rut),
            telefono(telefono),
            direccion(direccion),
            edad(edad),
            profesion(profesion),
            deuda(deuda)
//            fechaDePago(fechaDePago)
//            clientes(clientes) {}
            {}

    string toString() {
        return cuenta + "," + nombre + "," + apellido + "," + rut + "," + telefono + "," + direccion + "," +
               edad + "," + profesion + "," + deuda + "," + fechaDePago + stringClientes(clientes)+"\n";
    }


    void setClientes(const ListaClientes &clientes) {
        Vendedor::clientes = clientes;
    }

    void setId(const string &id) {
        Vendedor::id = id;
    }

    void setCuenta(const string &cuenta) {
        Vendedor::cuenta = cuenta;
    }

    void setNombre(const string &nombre) {
        Vendedor::nombre = nombre;
    }

    void setApellido(const string &apellido) {
        Vendedor::apellido = apellido;
    }

    void setRut(const string &rut) {
        Vendedor::rut = rut;
    }

    void setTelefono(const string &telefono) {
        Vendedor::telefono = telefono;
    }

    void setDireccion(const string &direccion) {
        Vendedor::direccion = direccion;
    }

    void setEdad(const string &edad) {
        Vendedor::edad = edad;
    }

    void setProfesion(const string &profesion) {
        Vendedor::profesion = profesion;
    }

    void setDeuda(const string &deuda) {
        Vendedor::deuda = deuda;
    }

    void setFechaDePago(const string &fechaDePago) {
        Vendedor::fechaDePago = fechaDePago;
    }

/*
* Nombre de la función: getters.
* Tipo de función: vacia.
* Parámetros: la direccion de memoria de los atributos del vendedor
* Dato de retorno: el valor de la variable solicitada
* Descripción de la función: retorna el valor de la variable solicitada
*/


    const string &getId() const {
        return id;
    }

    const string &getCuenta() const {
        return cuenta;
    }

    const string &getNombre() const {
        return nombre;
    }

    const string &getApellido() const {
        return apellido;
    }

    const string &getRut() const {
        return rut;
    }

    const string &getTelefono() const {
        return telefono;
    }

    const string &getDireccion() const {
        return direccion;
    }

    const string &getEdad() const {
        return edad;
    }

    const string &getProfesion() const {
        return profesion;
    }

    const string &getDeuda() const {
        return deuda;
    }

    const string &getFechaDePago() const {
        return fechaDePago;
    }

    const ListaClientes &getClientes() const {
        return clientes;
    }
};










