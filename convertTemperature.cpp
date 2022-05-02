#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect ={1,2,3};
    vect.push_back(20);
    cout<<vect.size();
    vector<double> celcius;
    for(int i=0;i<1;i++){
         int val;
        cout<<"ingrese el valor en celcius :";
        cin>>val;
        celcius.push_back(val);
    }

    double farenheit;
    farenheit=(celcius[0]*1.8+32);

    cout<<"la temperatura en farenheit es "<<farenheit;

}
