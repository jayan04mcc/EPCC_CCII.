#include<iostream>
using namespace std;
template<typename T,typename W,typename G>
T sumafi(W a, G b){
    return a + b;
}
template<typename T,typename W,typename G>
T restalf(W a, G b){
    return a - b;
}
template<typename T,typename W,typename G>
T multiplicaid(W a,G b){
    return a * b;
}
template<typename T,typename W,typename G>
T funcion(T(*operacion)(W,G), W a, G b){
    return operacion(a,b);
}

int main(){

    cout << "SUMA " << funcion<float>(sumafi<float>,4.0f,5) <<endl;
    cout << "RESTA" <<funcion<double>(restalf<double>, 4.0f, 5.0) <<endl;
    cout << "MULTIPLICACION " <<funcion<long>(multiplicaid<long>, 4, 5L) <<endl;


    return 0;
}
