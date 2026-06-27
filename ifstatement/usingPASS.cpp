#define PASS

void foo(int x, int y){
    if(x>y){
        PASS;
    }else{
        PASS;
    }

    
}

int main(){
    foo(6,7);

    return 0;
}