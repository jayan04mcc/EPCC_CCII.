#include <iostream>

using namespace std;

bool areFactors (int val,int vec[]){

    int cont=0;
    for (int i=0; i<9; i++){
        if (val%vec[i]==0){
            cont++;
        }
    }
    if (cont==9){
        return true;
    }
    else if(cont<1){
    return false;
    }
}
int main(){
    int vector[9]={100,50,30,20,200,600,10,1000,2000};
    int valor=6000;
    if(areFactors(valor,vector)==true){
        cout<< "es verdadero :" ;
    }
    else{
        cout<< "es falso :" ;
    }
    system("pause");
    return 0;
}
