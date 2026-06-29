#include <iostream>

int main(){
    int sum{0};
    for (int count{0}; count<10; ++count){
        std::cout<<"Enter an int: ";
        int num{};
        std::cin>>num;

        if (num<=0){
            break;
            
            sum+=num;
        
    }
    std::cout<<"the sum is: "<<sum<<'\n';

    return 0;}
}