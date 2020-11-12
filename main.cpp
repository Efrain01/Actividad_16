#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){

    Laboratorio v;
    char op;
    do{
        system("cls");
        cout<<"1.- Agregar Personaje" <<endl;
        cout<<"2.- Mostrar" <<endl;
        cout<<"3.- Respaldar" <<endl;
        cout<<"4.- Recuperar" <<endl;
        cout<<"5.- Insertar" <<endl;
        cout<<"6.- Inicializar" <<endl;
        cout<<"7.- Eliminar" <<endl;
        cout<<"8.- Eliminar ultimo" <<endl;
        cout<<"9.- Ordenar" <<endl;
        cout<<"0.- Buscar" <<endl;
        cout<<"s.- Salir" <<endl<<endl;
        cout<<"Opcion: ";
        cin>>op;
        switch(op){
            case '1':{
                Computadora c;
                cin>>c;
                v.agregarFinal(c);
                system("pause");
                break;
            }

            case '2':{
                v.mostrar();
                system("pause");
                break;
            }

            case '3':{
                v.respaldar();
                system("pause");
                break;
            }

            case '4':{
                v.recuperar();
                system("pause");
                break;
            }
                

            case '5':{
                Computadora c;
                cin>>c;
                size_t pos;
                cout<<"Posicion: ";
                cin>>pos; cin.ignore();
                if(pos>= v.size()){
                    cout<<"Posicion no valida"<<endl;
                }else{
                    v.insertar(c, pos);
                }
                system("pause");
                break;
            }

            case '6':{
                Computadora c;
                cin>>c;
                size_t n;
                cout<<"n: ";
                cin >> n; cin.ignore();
                v.inicializar(c, n);
                system("pause");
                break;
            }

            case '7':{
                size_t pos;
                cout<<"Posicion: ";
                cin>>pos; cin.ignore();

                if(pos>= v.size()){
                    cout<<"Posicion no valida"<<endl;
                }else{
                    v.eliminar(pos);
                }
                system("pause");
                break;
            }

            case '8':{
                v.eliminar_ultimo();
                system("pause");
                break;
            }

            case '9':{
                v.ordenar();
                system("pause");
                break;
            }
            
            case '0':{
                Computadora c;
                cin>>c;
                Computadora *ptr = v.buscar(c);
                if(ptr == nullptr){
                    cout<<"No encontrado"<<endl;
                }else{
                    cout<<*ptr<<endl;
                }
                system("pause");
                break;
            }

            case 's':{
                cout<<"Saliendo. ";
                system("pause");
                break;
            }
            
            default:{
                cout<<"Opccion invalida . . .";
                system("pause");
                break;
            }
        }
    }while(op!='s');

    return 0;
}