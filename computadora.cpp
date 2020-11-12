#include "computadora.h"

Computadora::Computadora(){ }

Computadora::Computadora(const string &os, int ram, int rom, const string &procesador){
    this->os = os;
    this->ram = ram;
    this->rom = rom;
    this->procesador = procesador;
}

void Computadora::setOs(const string &c){
    os=c;
}
string Computadora::getOs(){
    return os;
}

void Computadora::setRam(int c){
    ram=c;
}
int Computadora::getRam(){
    return ram;
}

void Computadora::setRom(int c){
    rom=c;
}

int Computadora::getRom(){
    return rom;
}

void Computadora::setProcesador(const string &c){
    procesador=c;
}
string Computadora::getProcesador(){
    return procesador;
}