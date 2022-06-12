#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
template<class tipo>
class simulador_robot{
private:
    vector<tipo>valor;
public:
    simulador_robot(vector<tipo>llenar);
    void moverse();
};
template<class tipo>
simulador_robot<tipo>::simulador_robot(vector<tipo>llenar){
    for (int i=0; i<llenar.size(); i++){
    	valor.push_back(llenar[i]);
    }

}
template<class tipo>
void simulador_robot<tipo>::moverse(){
    vector<int>prueba={0,0};
    int contx=0;
    int conty=0;

    //string plano={"norte","sur","este","oeste"};
    for(int i=0;i<valor.size();i++){
        if (valor.at(i)=="D"){
            cout<<" giro a la derecha "<<endl;
            if(valor.at(i)=="A"){
                cout<<" avanzo una posicion "<<endl;
                contx++;
            }
        }
        else if(valor.at(i)=="I"){
            cout<<" giro  a la izquierda "<<endl;
            if(valor.at(i)=="A"){
                cout<<" avanzo una posicion "<<endl;
                conty++;
            }
        }
        else if(valor.at(i)=="A"){
            cout<<" avanzo una posicion "<<endl;
            contx++;
            conty++;
        }
        else if((valor.at(i)!="A") ||(valor.at(i)!="I") ||(valor.at(i)!="D")){
            cout<<" comando no valido "<<endl;
        }


    }
    cout<<contx<<","<<conty;
}
int main()
{
    vector<string>cod={"D","A","A","I"};
    simulador_robot<string> pp(cod);
    pp.moverse();
    return 0;
}
