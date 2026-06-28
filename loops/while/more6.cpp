#include <iostream>

int main(){
    int row{1};
    
    while (row<=5) {
        
        int column{1};
        while (column<=row) {
            std::cout<<column;
            column++;
        
        }
        std::cout<<'\n';
        row++;
    }
}