//using goto

#include <cmath>
#include <iostream> 

int main(){
    double x{};
    tryAgain://this is a label, which we'll need to set a point where we want out goto statement to point at.
        std::cout<<"Enter a non-zero interger: ";
        std::cin>>x;

        if(x<0.0){
            goto tryAgain;//pointing at tryAgain.
        }

        std::cout<<"The square root of "<<x<<" is "<<std::sqrt(x)<<'\n';

        return 0;
        
}