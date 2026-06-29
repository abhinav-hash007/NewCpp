#include <iostream>

//3 = fizz
// 5 = buzz
// 3 && 5 = fizzbuzz

void fizzbuzz(int value){
    for (int i{}; i<=value; ++i){
        if(i%3==0 && i%5==0){
            std::cout<<"fizz\n";
        }else if(i%3==0){
            std::cout<<"buzz\n";
        }else if (i%5==0) {
            std::cout<<"fizzbuzz\n";
        }else if (i%7==0) {
            std::cout<<"pop\n";
        
        }else {
            std::cout<<i<<'\n';
        }       
    }
}


int main(){
    fizzbuzz(15);
    return 0;
}