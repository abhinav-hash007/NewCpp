#include <iostream>

int main(){
    constexpr double gravity{9.8};

    if constexpr (gravity==9.8) {
        std::cout<<"yes\n";
    }else{
        std::cout<<"No\n";
    }

    return 0;
}