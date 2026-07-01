#include <iostream>
#include <cstdlib>

using namespace std;
void cleanUp(){
    cout<<"cleaned!\n";
}

int main(){
    std::cout<<1<<'\n';
    cleanUp();

    std::exit(0); //this would terminate the programm and returns 0 to the OS

    cout<<2<<'\n'; //will never prints 

    return 0;
}