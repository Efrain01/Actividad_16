#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
using namespace std;

class Computadora{
    private:
        string os;
        int ram;
        int rom;
        string procesador;
    public:
        Computadora();
        Computadora(const string &os, int ram, int rom, const string &procesador);
        void setOs(const string &c);
        string getOs();
        void setRam(int c);
        int getRam();
        void setRom(int c);
        int getRom();
        void setProcesador(const string &c);
        string getProcesador();

        friend ostream & operator<<(ostream &out, const Computadora &p){
        out << left;
        out << setw(20) << p.os;
        out << setw(6) << p.ram;
        out << setw(6) << p.rom;
        out << setw(15) << p.procesador;
        out << endl;
        return out;
    }

    friend istream& operator>>(istream &in, Computadora &p){
        fflush(stdin);
        cout<< "Sistema Operativo: ";
        getline(cin, p.os);

        cout<< "RAM: ";
        cin >> p.ram;

        cout<< "ROM: ";
        cin >> p.rom;
        fflush(stdin);
        cout<< "Procesador: ";
        getline(cin, p.procesador);
    

        return in;
    }

    bool operator==(const Computadora& p){
        return (os == p.os);
    }

    bool operator==(const Computadora& p) const{
        return (os == p.os);
    }

    bool operator<(const Computadora& p){
        return os < p.os;
    }

    bool operator<(const Computadora& p) const{
        return os < p.os;
    }

};

#endif