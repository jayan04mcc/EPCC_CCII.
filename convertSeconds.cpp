#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int seg;
    cout<<"ingrese la cantidad de segundos"<<endl;
    cin>>seg;

    vector<int> reloj;

    float hora;
    hora =seg/3600;
    reloj.push_back(hora);
    float minutos;
    minutos=(seg-hora*3600)/60;
    reloj.push_back(minutos);
    float seg_restantes;
    seg_restantes=seg-(reloj[0]*3600+reloj[1]*60);
    reloj.push_back(seg_restantes);
    cout<<reloj[0]<<" hora con "<<reloj[1]<<" minutos y "<<reloj[2]<<" segundos ";

}
