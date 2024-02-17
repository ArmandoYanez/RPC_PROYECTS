//
// Created by Armando Yañez and Esdras Garcia
//
#include <iostream>

int main(){
    int Nino = 0, Dulces = 0;
    std::cin >> Nino;

    for(int i = 0; i != Nino; i++){
         Dulces += (i+1);
    }

    std::cout<<Dulces<<std::endl;

    return 0;
}