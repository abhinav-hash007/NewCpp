#include <iostream>

int main(){//execution begins
    int row{1}; //initializing first row.
    while (row<=10) { //setting until 10th row.
        int dollar{1}; //initializing the sign to be printed.
        while (dollar<=5) { // 5 $ would be printing in one row. 
            std::cout<<"$ ";//with a single space. 
            dollar++; // incrementing the dollar variable to one ahead. 
        }
        row++; //moving onto the next row.
        std::cout<<'\n';//printing the new line
    }
}