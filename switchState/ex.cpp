//using break, with switch statements

#include <iostream>
using namespace std;
void printDigitName(int x){
    
    switch (x) 
    {

        case 1:
        
            cout<<"One\n";
            break;
        case 2:
            cout<<"Two\n";
            break;
        case 3:
            cout<<"Three\n";
            break;

        case 4:
            cout<<"four\n";
            break;

        case 5:
            cout<<"five\n";
            break;

        default:
            cout<<"Unknown\n";
            break;
    }
    cout<<"Ah-ah-ah";
}
int main(){
    printDigitName(3);
    return 0;
}