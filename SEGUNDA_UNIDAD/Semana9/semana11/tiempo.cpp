#include <iostream>

using namespace std;
class tiempo{

private:
    int hora;
    int minutos;
    int segundos;
public:
    tiempo(int _hora=0,int _minutos=0,int _segundos=0);
    tiempo operator+(tiempo p1);
    tiempo operator-(tiempo p1);
    tiempo operator==(tiempo p1);
    tiempo operator>=(tiempo p1);
    tiempo operator<=(tiempo p1);
    tiempo operator!=(tiempo p1);
    void imprimir();
    void mostrar();


};
tiempo::tiempo(int _hora,int _minutos,int _segundos){
    hora=_hora;
    minutos=_minutos;
    segundos=_segundos;

}
tiempo tiempo::operator==(tiempo p1){
    tiempo asignar_tiempo;
    asignar_tiempo.hora=p1.hora;
    asignar_tiempo.minutos=p1.minutos;
    asignar_tiempo.segundos=p1.segundos;
    return asignar_tiempo;
}
tiempo tiempo::operator+(tiempo p1){
tiempo suma_tiempo;
suma_tiempo.hora= hora+p1.hora;
suma_tiempo.minutos=minutos+p1.minutos;
suma_tiempo.segundos=segundos+p1.segundos;
int cont=0;
int cociente;
int cociente2;
if (suma_tiempo.segundos>60 ){
        cociente=(suma_tiempo.segundos-suma_tiempo.segundos%60)/60;
        suma_tiempo.minutos=suma_tiempo.minutos+cociente;
        suma_tiempo.segundos=segundos+p1.segundos-60*cociente;
}
if(suma_tiempo.minutos>60){
        cociente2=(suma_tiempo.minutos-suma_tiempo.minutos%60)/60;
        suma_tiempo.hora=suma_tiempo.hora+cociente2;
        suma_tiempo.minutos=minutos+p1.minutos-60*cociente2;
}
while(suma_tiempo.segundos>60 && suma_tiempo.minutos>60){
        suma_tiempo.segundos=suma_tiempo.segundos-60;
        suma_tiempo.minutos=suma_tiempo.minutos=60;
        cont++;
        return suma_tiempo;
}
if(suma_tiempo.segundos<60 && suma_tiempo.minutos<60){
            suma_tiempo.segundos=suma_tiempo.segundos;
            suma_tiempo.minutos=suma_tiempo.minutos+cont;
}
return suma_tiempo;
}
tiempo tiempo::operator-(tiempo p1){
tiempo resta_tiempo;

resta_tiempo.hora=hora-p1.hora;
resta_tiempo.minutos= minutos-p1.minutos;
resta_tiempo.segundos=segundos- p1.segundos;

return resta_tiempo;
}
tiempo tiempo::operator>=(tiempo p1){
tiempo mayor_tiempo;

if(hora>=p1.hora){
    mayor_tiempo.hora=hora;
}else{
    mayor_tiempo.hora=p1.hora;
}
if(minutos>=p1.minutos){
    mayor_tiempo=minutos;
}else{
    mayor_tiempo=p1.minutos;
}
if(segundos<=p1.segundos){
    mayor_tiempo.segundos=segundos;

}else{
    mayor_tiempo.segundos=p1.segundos;
}

return mayor_tiempo;
}
tiempo tiempo::operator<=(tiempo p1){
tiempo menor_tiempo;

if(hora<=p1.hora){
    menor_tiempo.hora=hora;
}else{
    menor_tiempo.hora=p1.hora;
}
if(minutos<=p1.minutos){
    menor_tiempo=minutos;
}else{
    menor_tiempo=p1.minutos;
}
if(segundos<=p1.segundos){
    menor_tiempo.segundos=segundos;
}else{
    menor_tiempo.segundos=p1.segundos;
}

return menor_tiempo;
}
tiempo tiempo::operator!=(tiempo p1){
tiempo diferente_tiempo;
if(hora!=p1.hora){
    diferente_tiempo.hora=hora;
}else{
    diferente_tiempo.hora=p1.hora;
}
if(minutos!=p1.minutos){
    diferente_tiempo=minutos;
}else{
    diferente_tiempo=p1.minutos;
}
if(segundos!=p1.segundos){
    diferente_tiempo.segundos=segundos;
}else{
    diferente_tiempo.segundos=p1.segundos;
}

return diferente_tiempo;


}
void tiempo::imprimir(){
    if(hora>12){
        cout<<"la solucion a la operacion es "<<hora<<"/"<<minutos<<"/"<<segundos<<"PM"<<endl;
    }
    else{
       cout<<"la solucion a la operacion es "<<hora<<"/"<<minutos<<"/"<<segundos<<"AM"<<endl;
    }
}
void tiempo::mostrar(){
cout<<"mi hora actual es "<<hora<<"/"<<minutos<<"/"<<segundos<<endl;
}
int main()
{
    tiempo t1(11,34,41);
    tiempo t2(6,50,20);
    tiempo prueba;
    t1.mostrar();
    t2.mostrar();
    prueba=t1.operator+(t2);
    prueba.imprimir();


    return 0;
}
