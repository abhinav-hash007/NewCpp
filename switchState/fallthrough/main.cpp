//example;
//without any break or return statement, the program does overflow.

#include <iostream>

int main(){
    switch (2) {
        case 1:
        std::cout<<"one"<<'\n';
        case 2:
        std::cout<<"two"<<'\n';
        case 3:
        std::cout<<"three"<<'\n';
        default:
        std::cout<<"four"<<'\n';
    }
    return 0;
}

