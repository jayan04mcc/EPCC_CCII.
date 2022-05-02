#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int numero,val;
   srand(time(NULL));
   numero=1+rand()%(101-1);

   cout<<"estoy pensado en un numero entre el 1 y e l00"<<endl;
   cout<<"puedes adivinar este numero?";
   cout<<"este numero es"<<endl;
   cin>>val;
    if (val==numero){
        cout<<"lo lograste !!!!!!";
    }
    else{
        cout<<"el numero era :"<<numero<<endl;
        if(val>numero){
            cout<<"te fuiste por :"<<val-numero<<endl;
        }
        else{
            cout<<"te fuiste por :"<<numero-val<<endl;
        }
    }

}
