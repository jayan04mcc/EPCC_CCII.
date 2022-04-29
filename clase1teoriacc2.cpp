#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> puntos_equipos;
    int numEquipos;
    cout<<"ingrese el numero de datos del vector"<<endl;
    cin >> numEquipos;
    while(numEquipos > 0) {
        int puntos;
        cin >> puntos;
        puntos_equipos.push_back(puntos);
        numEquipos = numEquipos - 1;

    }
    cout<<"la lista contiene "<<puntos_equipos.size()<<" elementos";
}
