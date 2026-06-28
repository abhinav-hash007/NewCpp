#include <iostream>

int main(){
    int i{1};
    while (i<=20) {
        if (i%2==0) {
            std::cout<<i<<'\n';
            i++;
            
        }else if (i%2!=0) {
            i++;
        }
    }
}