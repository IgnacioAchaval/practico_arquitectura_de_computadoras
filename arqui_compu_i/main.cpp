#include <iostream>
#include "conio.h"
#include <unistd.h>

using namespace std;

void mostrarEnBinario(unsigned char);
void choque();
void autoFantastico();
void funcion3();
void funcion4();


int main() {
    bool end = false;
    int eleccion;
    while(!end){
        cout<<"\n\nIngrese: "
            <<"\n1: Choque"
            <<"\n2: Auto Fantastico"
            <<"\n3: Secuencia 3"
            <<"\n4: Secuencia 4"
            <<"\n5: Finalizar"
            <<"\n\nEleccion_ ";
        cin>> eleccion;
        switch (eleccion) {
            case 1:
                choque();
                break;
            case 2:
                autoFantastico();
                break;
            case 3:
                funcion3();
                break;
            case 4:
                funcion4();

                break;
            case 5:
                end = true;
                break;
            default:
                cout<<"Comando incorrecto";
        }

    }


}

void choque(){
    char a;
    unsigned char tabla[7] = {0x81, 0x42, 0x24, 0x18, 0x18, 0x24, 0x42};
    while (!kbhit())
    {
        for (int i=0; i<7; i++)
        {
            mostrarEnBinario(tabla[i]);
            usleep(200);
        }
    }
    cout<<"\nPresione una tecla para regresar_";
    cin>> a;
}
void autoFantastico(){
    unsigned char a;
    int i;
    while(!kbhit()) {
//        for (a = 0x1; a != 0x0; a = a << 1) {
//            mostrarEnBinario(a);
//            _sleep(200);
//            cout << endl;
//        }
//        for (a = 0x40; a >= 0x2; a = a >> 1) {
//            mostrarEnBinario(a);
//            _sleep(200);
//            cout << endl;
//        }
        a = 0x1;
        for (i=0; i<8; i++) {
            mostrarEnBinario(a);
            sleep(200);
            cout << endl;
            a=a<<1;
        }
        a = 0x40;
        for (i=0; i<6; i++) {
            mostrarEnBinario(a);
            sleep(200);
            cout << endl;
            a=a>>1;
        }
    }


    cout<<"\nPresione una tecla para regresar_";
    cin>> a;
}
void funcion3(){
    char a;
    cout<<"Ejecuta funcion 3";
    cout<<"\nPresione una tecla para regresar_";
    cin>> a;
}
void funcion4(){
    char a;
    cout<<"Ejecuta funcion 4";
    cout<<"\nPresione una tecla para regresar_";
    cin>> a;
}

void mostrarEnBinario(unsigned char byteOriginal){
    for (unsigned char mask = 128; mask > 0; mask/=2)
    {
        if (byteOriginal&mask)
        {
            cout<<"*";
        }
        else
            cout<<"_";
    }
}