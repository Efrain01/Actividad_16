#include "laboratorio.h"
#include <fstream>
#include <algorithm>
Laboratorio::Laboratorio(){}

void Laboratorio::agregarFinal(const Computadora &p){
    computadoras.push_back(p);
}

void Laboratorio::mostrar(){
    cout << left;
    cout <<setw(20) << "Sistema Operativo";
    cout <<setw(6) << "RAM";
    cout <<setw(6) << "ROM";
    cout <<setw(15) << "Procesador";
    cout << endl;
    for (size_t i = 0; i < computadoras.size(); i++){
        Computadora &p = computadoras[i];
        cout<< p;
        cout<<endl;
    }
    
}

void Laboratorio::respaldar_tabla(){
    ofstream archivo("computadora_tabla.txt");
    if(archivo.is_open()){
        archivo << left;
        archivo <<setw(20) << "Sistema Operativo";
        archivo <<setw(6) << "RAM";
        archivo <<setw(6) << "ROM";
        archivo <<setw(15) << "Procesador";
        archivo << endl;
        for (size_t i = 0; i < computadoras.size(); i++){
            Computadora &p = computadoras[i];
            archivo << p;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar(){
    ofstream archivo("computadora.txt");
    if(archivo.is_open()){
        for (size_t i = 0; i < computadoras.size(); i++){
            Computadora &p = computadoras[i];
            archivo << p.getOs()<<endl;
            archivo << p.getRam()<<endl;
            archivo << p.getRom()<<endl;
            archivo << p.getProcesador()<<endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar(){
    ifstream archivo("computadora.txt");
    if(archivo.is_open()){
        string temp;
        int ram, rom;
        Computadora p;

        while (true){
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            p.setOs(temp);

            getline(archivo, temp);
            ram = stoi(temp);
            p.setRam(ram);

            getline(archivo, temp);
            rom = stoi(temp);
            p.setRom(rom);

            getline(archivo, temp);
            p.setProcesador(temp);

            agregarFinal(p);
        }
        
    }
    archivo.close();
}

void Laboratorio::insertar(const Computadora &p, size_t pos){
    computadoras.insert(computadoras.begin()+pos,p);
}

void Laboratorio::inicializar(const Computadora&p, size_t n){
    computadoras = vector<Computadora>(n,p);
}

size_t Laboratorio::size(){
    return computadoras.size();
}

void Laboratorio::eliminar(size_t pos){
    computadoras.erase(computadoras.begin()+pos);
}

void Laboratorio::eliminar_ultimo(){
    computadoras.pop_back();
}

void Laboratorio::ordenar(){
    sort(computadoras.begin(), computadoras.end());
}

Computadora* Laboratorio::buscar(const Computadora &p){
    auto it = find(computadoras.begin(), computadoras.end(),p);
    if(it == computadoras.end()){
        return nullptr;
    }else{
        return &(*it);
    }
}