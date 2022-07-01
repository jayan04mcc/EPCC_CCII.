#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <string>
#include <stdlib.h>
using namespace std;
class propio{
public:
    string Cadena(const auto& cad)
    {
        stringstream cout_s;
        cout_s<< to_string(cad);
        string cad_salida;
        cout_s>>cad_salida;
        return cad_salida;
    }
};

class contenedor{
public:
string Cadena(const auto& aa)
 {
    string cad_salida1,cad_salida2;
    string zz;
    ostringstream cout_o;

    for (const auto& r : aa)
    {

        stringstream(to_string(r.first)) >>cad_salida1;
        stringstream(to_string(r.second)) >>cad_salida2;
        cout_o<<" ["<<cad_salida1<<"] ; ["<<cad_salida2<<"] // ";
        zz=cout_o.str();
    }

    return zz;


}

};
string Cadena(vector < auto > & prueb)
 {

    string cad_salida_s;
    string z;
    ostringstream cout_c;

    for (int i=0;i<prueb.size();++i)
    {
        stringstream(to_string(prueb[i])) >>cad_salida_s;
        cout_c<<" {"<<cad_salida_s<<"} ,";
        z=cout_c.str();
    }

    return z;
}
int main(){
    propio prueba_intrinseco;
    char x1='h';
    cout<<endl;
    cout<<"prueba en intrinsecos :"<<endl;
    cout <<prueba_intrinseco.Cadena(x1)<<endl;
    vector <int>vector_prueba{1,3,5,7};
    cout<<endl;
    cout <<Cadena(vector_prueba)<<endl;
    cout<<"*********************************"<<endl;
    cout<<"prueba en contenedores :"<<endl;
    contenedor prueba_cont;
    map<char,float>carpeta;
    carpeta['a']=23.5;
    carpeta['b']=12.45;
    carpeta['c']=42.2;
    cout <<prueba_cont.Cadena(carpeta) << endl;
    return 0;
    system("pause");
}
