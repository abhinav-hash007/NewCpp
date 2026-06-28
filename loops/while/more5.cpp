#include <iostream>

int main(){
    int row{1};
    while (row<=5) {
        int star{5};
        while (star>=row) {
            std::cout<<"* ";
            star--;
        }

        row++;
        std::cout<<'\n';
        
    
    }
    return 0;
}