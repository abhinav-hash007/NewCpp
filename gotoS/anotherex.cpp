#include <iostream>

void printCat(bool skip){
    if (skip)
        goto end; //pointed to end

    std::cout<<"Cats\n";

    end:
    ;
}

int main(){
    printCat(false);
    printCat(true);

    return 0;
}