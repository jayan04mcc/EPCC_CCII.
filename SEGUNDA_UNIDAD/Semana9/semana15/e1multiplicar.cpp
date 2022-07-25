#include <iostream>

using namespace std;

void multiplicar(int (&m)[3][4][2],int dato) {
    for (int i=0;i<3;i++) {
        for (int j=0;j <4;j++) {
            for (int k=0;k<2;k++) {
                m[i][j][k]= m[i][j][k]*dato;
            }
        }
    }
}


int main() {
    int x[3][4][2] = {{{1, 2}, {4, 5}, {7, 8}, {1, 2}},
         {{10, 11}, {13, 14}, {16, 17}, {1, 2}},
         {{19, 20}, {22, 23}, {25, 26}, {1, 2}}};


    multiplicar(x,4);

    for (int i = 0; i < 3;i++) {
        for (int j = 0; j < 4;j++) {
            for (int k = 0; k < 2;k++) {
                cout <<"["<<x[i][j][k]<<"]"<<",";
            }
        }
        cout<<endl;
    }
    return 0;
}
