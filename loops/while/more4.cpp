#include <iostream>

int main(){
    int row{1};
    while (row<=5) {
        int star{1};
        while (star<=row) {
            std::cout<<"* ";
            star++;
        }
        std::cout<<"\n";
        row++;
        
    }

    return 0;
}