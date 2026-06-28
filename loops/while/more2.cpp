#include <iostream>
int main(){
    int row{1};
    while (row<=4) {
        int hashtag{1};
        while (hashtag<=3) {
            std::cout<<"# ";
            hashtag++;
        }
        std::cout<<'\n';
        row++;
    }
}