#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template<class tipo>
class histograma{
private:
    vector<tipo> coleccion;
    tipo intervalo;
public:
    histograma(vector<tipo> n,tipo);
    ~histograma(){};
    void mostrar();
    void distribuir();
};
template<class tipo>
histograma<tipo>::histograma(vector<tipo> n,tipo _intervalo){
	intervalo=_intervalo;
	for (int i=0; i<n.size(); i++)
    	coleccion.push_back(n[i]);
}
template<class tipo>
void histograma<tipo>::mostrar(){
	sort(coleccion.begin(),coleccion.end());
	for(int i = 0; i < coleccion.size(); i++)
        cout << coleccion.at(i) << " ";
}
template<class tipo>
void histograma<tipo>::distribuir(){
	vector<int> res;
	int c=0,v=0;
	sort(coleccion.begin(),coleccion.end());
	tipo inicial=coleccion[0];
	tipo siguiente=inicial+intervalo;
	for(int k= 0; k< coleccion.size(); k++){
		v=0;
		for(int i=0; i< coleccion.size(); i++){

			if(inicial<=coleccion[i] && coleccion[i]<siguiente){
				c++;
			}
			v++;
		}
		if(c!=0){res.push_back(c);}
		c=0;
		inicial=siguiente;
		siguiente=inicial+intervalo;
	}
	for(int i = 0; i < res.size(); i++)
        cout << res.at(i) << " ";
}

int main(){
    vector<int> prueba={10, 2, 9, 7, 5, 6, 1, 8, 4,8};
	histograma<int> p1(prueba,2);
	cout<<"Lista inicial"<<endl;
    for(int i = 0; i < prueba.size(); i++){
        cout << prueba.at(i) << ",";
    }
    cout<<endl;
    cout<<"Lista ordenada por el metodo sort "<<endl;
    p1.mostrar();
    cout<<endl;
    cout<<" histograma "<<endl;
    p1.distribuir();

	return 0;
}
