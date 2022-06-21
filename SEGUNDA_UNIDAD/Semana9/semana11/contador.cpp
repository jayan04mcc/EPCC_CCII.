#include <iostream>
using namespace std;
class contador{

private:
    int cont;
public:
    contador(int _cont=0);
    int valor();
    void imprimir();
    contador operator+(contador prefijo);
    ~contador();

};

contador::contador(int _cont){
cont=_cont;
}
contador::~contador(){}
int contador::valor(){
cout<<"ingrese el valor a sumar :"<<endl;
cin>>cont;
return cont;
}
void contador::imprimir(){
cout<<"el contador es :"<<cont<<endl;

}
contador contador::operator+(contador prefijo){
    contador posfijo;
    posfijo.cont=cont+prefijo.cont;
    return (posfijo);
}


int main(){
    contador a,b,c,d;
    b.valor();
    c=a.operator+(b);
    c.imprimir();
    d.valor();
    c=c.operator+(d);
    c.imprimir();


}
