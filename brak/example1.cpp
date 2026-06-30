#include <iostream>
using namespace std;
int main(){
    while(true){
        cout<<"Enter a non-zero value: ";
        int num{};
        cin>>num;

        if(num<=0){
            break;
        }

        cout<<"We're out";

        return 0;
        
        
    }
}