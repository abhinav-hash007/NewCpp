// #include <iostream>
int sumTo(int value)
{
    int total{ 0 };
    for (int i{ 1 }; i <= value; ++i)
        total += i;

    return total;
}
int main(){
    sumTo(30);
    return 0;
}


