#include <iostream>

int gettingVar1(){
    std::cout<<"enter integer one: ";
    int int1{};
    std::cin>>int1;

    return int1;
}
int gettingVar2(){
    std::cout<<"enter integer two: ";
    int int2{};
    std::cin>>int2;

    return int2;
}
char gettingOp(){
    std::cout<<"Enter the operation you want to do\n (in char)(add = a, sub = s, div = d, remainder = r): ";
    char op{};
    std::cin>>op;

    return op;
}


int calculate(int x, int y, char operation){
    switch (operation) {
        case 'a':
        return x+y;
        case 's':
        return x-y;
        case 'd':
        return x/y;
        case 'r':
        return x%y;

        default:
        std::cout<<"What the fuck man!";
        return 0;
    }

    
}

int main(){
    int num1 = gettingVar1();
    int num2 = gettingVar2();
    char op = gettingOp();
    int result = calculate(num1, num2, op);

    std::cout<<"the result is: "<<result<<'\n';
    return 0;
}