#include <iostream>

using namespace std;

class racional{
private:
    int x;
    int y;
public:
    racional(int _x=0,int _y=0);
    racional operator+(racional z);
    racional operator-(racional z);
    racional operator*(racional z);
    racional operator/(racional z);
    int asignar_x();
    int asignar_y();
    void muestra();
    void muestra2();

};
racional::racional(int _x,int _y){
x=_x;
y=_y;
}
int racional::asignar_x(){
cout<<"digite el valor para x :"<<endl;
cin>>x;
cout<<endl;
}
int racional::asignar_y(){
cout<<"digite el valor para y :"<<endl;
cin>>y;
cout<<endl;
}

racional racional::operator+(racional z){
    racional suma;
    suma.x=(x*z.y)+(y*z.x);
    suma.y=y*z.y;
    return suma;
}
racional racional::operator-(racional z){
    racional resta;
    resta.x=(x*z.y)-(y*z.x);
    resta.y=y*z.y;
    return resta;
}
racional racional::operator*(racional z){
    racional multiplicacion;
    multiplicacion.x=x*z.x;
    multiplicacion.y=y*z.y;
    return multiplicacion;
}
racional racional::operator/(racional z){
    racional division;
    division.x=x*z.y;
    division.y=y*z.x;
    return division;
}
void racional::muestra(){
    cout<<"el resultado de la operacion es :"<<x<<"/"<<y<<endl;

}
void racional::muestra2(){
    double mu;
    mu=x/y;
    cout<<"la fraccion es "<<mu<<endl;
}



int main()
{
   racional a,b,c,d;
   b.asignar_x();
   b.asignar_y();
   b.muestra();
   //c=a.operator/(b);
   //c.muestra();
   d.asignar_x();
   d.asignar_y();
   d.muestra();
   c=b.operator+(d);
   c.muestra();
   c.muestra2();

    return 0;
}
