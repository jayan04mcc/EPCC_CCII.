#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> valores_totales;
int n;
cout<<"cuantos valores va a tener mi cadena";
cin >> n;
while(n > 0) {
    int val;
    cout<<"ingrese el numero :";
    cin >> val;
    valores_totales.push_back(val);
    n = n - 1;

}
cout<<("ORDENANDO DE FORMA ASCENDENTE");
int aux;
   for (int i=n; i>=0; i--){
      for (int j=0; j<=i; j++){
         if (valores_totales[j] > valores_totales[j+1])
          {
            aux = valores_totales[j];
            valores_totales[j]= valores_totales[j+1];
            valores_totales[j+1]= aux;
           }
      }
   }
cout<<endl;
cout<<"MOSTRANDO MI VECTOR"<<endl;
for (size_t k = 0; k< valores_totales.size(); ++k) {

        cout<< valores_totales.at(k)<<endl;
    }
}
