#include <iostream>
using namespace std;
namespace constants {
    constexpr int minRidingheight{140};
}

int main(){
    cout<<"Enter your height (cm): ";
    int Pheight{};

    cin>>Pheight;

    if(Pheight>=constants::minRidingheight){
        cout<<"you're able to ride, Enjoy!\n";
    }else{
        cout<<"sorry, you're unable to ride.\n";
    }

    return 0;
}