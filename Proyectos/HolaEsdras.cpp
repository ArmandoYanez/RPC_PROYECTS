//
// Created by Armando Yañez and Esdras Garcia
//
#include <iostream>

using namespace std;

int main(){
    int Nino = 0, Dulces = 0;
    cin >> Nino;

    for(int i = 0; i != Nino; i++){
         Dulces += (i+1);

    }

    cout<<Dulces<<endl;

    return 0;
}