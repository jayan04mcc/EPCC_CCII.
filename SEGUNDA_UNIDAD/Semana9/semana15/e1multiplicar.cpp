#include <iostream>

using namespace std;

void multiplicar(int ***&matriz,int dato) {
    for (int i=0;i<3;i++)
        {
        for (int j=0;j<4;j++)
         {
            for (int k=0;k<2;k++)
            {
                matriz[i][j][k]=matriz[i][j][k]*dato;
            }
        }
    }
}
int main() {
    int var=0;

    int ***prueba=new int**[3];
    for (int i = 0; i<3;i++)
        {
        prueba[i] = new int*[3];
        for (int j = 0;j< 4;j++)
        {
            prueba[i][j] = new int[4];
            for (int k= 0; k<2;k++)
            {
                prueba[i][j][k]=var;
                var++;
            }
        }
    }

    multiplicar(prueba,1);

    for (int i = 0; i < 3;i++)
    {
        for (int j = 0; j < 4;j++) 
        {
            for (int k = 0; k < 2;k++)
            {
                cout <<"["<<prueba[i][j][k]<<"]"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

