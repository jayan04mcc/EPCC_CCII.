#include <iostream>
using namespace std;
int main(){
cout<<"\t";
for(int i=1;i<=10;i++){
    cout<<i<<"\t";
}
cout<<endl<<endl;
for(int j=1;j<=10;j++){
    cout<<j<<"\n";

    cout<<"\t";
    for(int k=1;k<=10;k++){
        cout<<j*k<<"\t";
    }
    cout<<endl;
}
}
