#include <iostream>
using namespace std;

int plusOne(){
    static int s_state{3}; //initialization
    ++ s_state;
    return s_state;
}

int main(){
    cout<<plusOne()<<'\n';
    cout<<plusOne()<<'\n';
    cout<<plusOne()<<'\n';
    return 0;
}