#include <iostream>
using namespace std;

int main(){
    for (int i{}; i<=20; ++i){
        if ((i%4)) {
            continue;
        }
        cout<<i<<'\n';
    }
    return 0;
}