#include <iostream>
int main(){
    int row{1};
    while (row<=5) {
        int star{1};
        while (star<=5) {
            std::cout<<"*";
            star++;
        }
        std::cout<<'\n';
        row++;
    }
}