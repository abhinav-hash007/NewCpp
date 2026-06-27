#include <iostream>

int main(){
    std::cout<<"enter an int: ";
    int num{};
    std::cin>>num;

        if(num>=0){
            if(num<=20){
                std::cout<<num<<" is between 0 to 20\n";
            }
            else{
                std::cout<<num<< " is above 20\n";
            }
        }
        else{
            std::cout<<num<< " is negative\n";
        }

        return 0;
}