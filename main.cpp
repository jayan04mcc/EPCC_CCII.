#include <iostream>
#include <map>
#include <random>
#include <unistd.h>
#include <string.h>
using namespace std;
using std::cout; using std::cin;
using std::endl; using std::map;
using std::string;
using std::array;
/*
void crear_robot(){
    map<string,int> robot;
    cout<<




}

map<string,int> mapa1;
void menu(){
    do{
    int cant;
    cout<<"1.Ingrese el num de robots "<<endl;
    cin>>cant;
    cout<<endl;
    cout<<"2.Mostrar robots "<<endl;
    switch(cant){
        case 1:

            cout<<endl;
            system("pause");
            break;
                }
    }

}
*/
int aleatorio_en_rango(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void cadena_aleatoria(int longitud, char *destino) {
    char muestra[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int x = 0; x < longitud; x++) {
        int indiceAleatorio = aleatorio_en_rango(0, (int) strlen(muestra) - 1);
        destino[x] = muestra[indiceAleatorio];
    }
}
int main()
{
    string codigo;
    int serie;
    map<string,int>robot;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(100,999);
    #define LONGITUD_DESEADA 2
    srand(getpid());
    char destino[LONGITUD_DESEADA + 1] = "";
    cadena_aleatoria(LONGITUD_DESEADA, destino);


    for (int i = 0; i <100;i++) {
         cadena_aleatoria(LONGITUD_DESEADA, destino);
        robot.insert(std::pair<string,int>(destino,dist(gen)));
    }
    map<string, int>::iterator iterador;

    for (iterador = robot.begin(); iterador != robot.end(); iterador++){

                string clave = iterador->first;
                int valor = iterador->second;
                cout << "el robot de codigo " << clave << " y numero de serie " << valor<<endl;
                cout<<"["<<clave<<","<<valor<<"]"<<endl;
            }
    return EXIT_SUCCESS;

}
