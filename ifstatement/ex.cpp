#include <iostream>

int main(){
    using namespace std;

    cout<<"Enter an int: ";
    int num1{};
    
    cin>>num1;

    if(num1>2){
        std::cout<<"yes\n";
    }
    else{
        cout<<"No\n";
    }
    return 0;

}
    