#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include <math.h>
#include <time.h>

int main(){
    printf("\t\nWelcome to ROCK PAPER SCISSORS!");
    sleep(3);
    system("cls");
    printf("Choose rock (r) paper (p) scissors (s): ");
    char line[2],user;
    while(1){
        fgets(line, sizeof(line), stdin);
        user = line[0];
        if(user == 'r' || user == 'p' || user == 's') break;
        printf("wrong input\nTry again: ");
        getchar();
    }
    srand(time(NULL));
    int rannum = rand() % 3;
    char computer;
    if(rannum == 0) {
        computer = 'r';
        printf("The computer chose rock\t");
    }
    else if(rannum == 1) {
        computer = 'p';
        printf("The computer chose paper\t");
    }
    else {
        computer = 's';
        printf("The computer chose scissors\t");
    }

    if(user == computer) printf("IT'S DRAW");
    else if((user == 'r' && computer == 's')||
            (user == 's' && computer == 'p')||
            (user == 'p' && computer == 'r')){
        printf("YOU WON!");
    }
    else{
        printf("YOU LOST!");
    }
    return 0;
}