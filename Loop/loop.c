#include <stdio.h>

int main(void){
    int i;
    char family[6][10] = {"Zack", "Nick", "Sam", "Beth", "Tim", "Sandi"};
    for (i=0; i <5; i++) {
        printf("Hello %s\n", family[i]);
    }
    return 0;
}
