#include <iostream>
#include <cstdio>
#include <list>
#include <string>
#include <utility>

using namespace std;


class Cliente {

private:
    string nombre;
    string apellido;
    string rut;
    string telefono;
    string direccion;
    string edad;
    string profesion;
    string deuda;
    string fechaCobro;
    string numerovendedor;
public:
    Cliente(){

    }

    Cliente(string nombre, string apellido, string rut, string telefono,
            string direccion, string edad, string profesion, string deuda,
            string fechaCobro, string numerovendedor) : nombre(std::move(nombre)), apellido(std::move(apellido)), rut(std::move(rut)),
                                                                      telefono(std::move(telefono)), direccion(std::move(direccion)),
                                                                      edad(std::move(edad)), profesion(std::move(profesion)), deuda(std::move(deuda)),
                                                                      fechaCobro(std::move(fechaCobro)),
                                                                      numerovendedor(std::move(numerovendedor)) {}

    const string &getRut() const {
        return rut;
    }

    const string &getNombre() const {
        return nombre;
    }

    const string &getApellido() const {
        return apellido;
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

    const string &getFechaCobro() const {
        return fechaCobro;
    }

    const string &getNumerovendedor() const {
        return numerovendedor;
    }

    string toString() {
        return nombre + "," + apellido + "," + rut + "," + telefono + "," + direccion + "," + edad + "," +
               profesion + "," + deuda + "," + fechaCobro  +  "," + numerovendedor + "\n";
    }


};



