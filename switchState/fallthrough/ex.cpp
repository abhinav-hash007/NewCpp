// for intentional fallthrough we use [[fallthrough]] attribute
#include <iostream>
int main(){
    switch (2) {
        case 1:
        std::cout<<1<<'\n';
        case 2:
        std::cout<<2<<'\n';
        [[fallthrough]];//';' the semicolon indicates the null statement here.
        
        case 3:
        std::cout<<3<<'\n';
    }
}