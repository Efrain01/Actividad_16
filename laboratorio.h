#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"
#include <vector>

class Laboratorio{
    private:
        vector<Computadora> computadoras;
    public:
        Laboratorio();
        void agregarFinal(const Computadora &p);
        void mostrar();
        void respaldar_tabla();
        void respaldar();
        void recuperar();

        void insertar(const Computadora &p, size_t pos);
        void inicializar(const Computadora&p, size_t n);
        size_t size();
        void eliminar(size_t pos);
        void eliminar_ultimo();
        void ordenar();
        Computadora* buscar(const Computadora &p);

    friend Laboratorio& operator<<(Laboratorio &v, const Computadora &p){
        v.agregarFinal(p);
        return v;
    }

};

#endif