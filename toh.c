#include<stdio.h>
#include<conio.h>

void TOH(int n, char source, char destination, char helper_t){

    if(n==0){
        return;
    }
    TOH(n-1, source, helper_t, destination);
    printf("\nMove disk %d from %c to %c", n, source, destination);
    TOH(n-1, helper_t, destination, source);
}

int main(){
    int n;
    TOH(4, 'A', 'B', 'C');
    return 0;
}