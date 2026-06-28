#include <iostream>

int main(){
    int count{1};//initialization of count
    while(count<=50){//looping till 50
        if(count<10){//under 10
            std::cout<<'0';//if under 10, then precides with a zero
        }

        std::cout<<count<<' ';//then a space

        if(count%10==0){//if its divisible by 10 then prints a new line so that after that the numbers would be in a nw line
            std::cout<<'\n';
        }
        ++count;//pre-incrementing.
    }

    return 0;
}