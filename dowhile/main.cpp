#include <iostream>
int main(){
    int selection{};

    do{
        std::cout<<"Please make a selection: \n";
        std::cout<<"1) Addition\n";
        std::cout<<"2) substraction\n";
        std::cout<<"3) division\n";
        std::cout<<"4) multiplication\n";
    }
    while(selection<1||selection>4);
        std::cout<<"you've entered: "<<selection<<'\n';
    };
    // std::cout<<"Sike, that's a wrong call!\n";

    return 0;
}