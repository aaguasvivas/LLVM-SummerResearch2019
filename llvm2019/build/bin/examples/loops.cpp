#include <stdio.h>

void countUp(){
    int x = 0;
    while(x < 10){ 
        ++x;
    }
}

int addFunc(int a, int b) {
    return a+b;
}

int main(){
    printf("5+2=%d\n",addFunc(5,2));
    countUp();

    return 0;
}