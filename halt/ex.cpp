#include <cstdlib>
#include <iostream>

using namespace std;
void cleanup(){
    cout<<"cleaned\n";
}

int main(){
    std::atexit(cleanup);

    cout<<1<<'\n';

    std::exit(0);

    std::cout<<2<<'\n';


    return 0;
}