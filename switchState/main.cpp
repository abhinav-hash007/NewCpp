//using switch

#include <iostream>
using namespace std;
void printDigitName(int x){
    
    switch (x) 
    {

        case 1:
        
            cout<<"One\n";
            return;
        case 2:
            cout<<"Two\n";
            return;
        case 3:
            cout<<"Three\n";
            return;

        case 4:
            cout<<"four\n";
            return;

        case 5:
            cout<<"five\n";
            return;

        default:
            cout<<"Unknown\n";
            return;
    }
}
int main(){
    printDigitName(3);
    return 0;
}