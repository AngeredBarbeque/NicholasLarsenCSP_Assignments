#include <stdio.h>

int main(void){
    int currentTime = 20;
    if (currentTime <= 12 && currentTime >= 6){
        printf("Good morning!");
    }
    else if (currentTime >= 13 && currentTime <= 18){
        printf("Good afternoon!");
    }
    else if (currentTime >= 19 && currentTime <= 24){
        printf("Good evening.");
    }
    else {
        printf("Why are you up right now?");
    }
    return 0;
}