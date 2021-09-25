/*
-Game where user gueses a number between 1-10
-Menu displayed on screen
   -Press 1 to play a game
   -Press 2 to change the max number
   -Press 3 to quit
-If 1 is chosen prompt user to enter a number
-If correct, say they won and go back to menu
-Else, say if it was too high or too low and let them guess again
-Repeat until they win
-If q is entered quit the game and return to the menu
-If 2 is chosen prompt user to set the max number (no negatives or number higher than 10)
-If 3 is chosen thank the user for playing the game and end the game
-Create a new branch called "save_user_max_number"
-Save max number where the program is able to remember it the next time it starts
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game();
void changemax();

static int max = 10;

void main(){
   
   int i = 1;
   int input;

   while(i==1){
      printf("Press 1 to play a gane\n");
      printf("Press 2 to change the max number\n");
      printf("Press 3 to quit\n");
      scanf("%d", &input);
      if(input==1){
         game();
      }
      if(input==2){
         changemax();
      }
      if(input==3){
         i = 0;
      }
   }
   printf("Thank you for playing!\n");
}

void game(){
   int num;
   char guess[2];
   int guessNum;
   time_t t;
   int i = 1;

   srand((unsigned) time(&t));
   num = (rand() % max) + 1;
   while(i==1){
      printf("Enter a number: ");
      scanf("%s", &guess);
      if(guess[0]=='q'){
         i = 0;
      }
      else{
         guessNum = atoi(guess);
            if(guessNum==num){
            printf("Correct!\n");
            i = 0;
         }
         else if(guessNum<num){
            printf("The guess is too low.\n");
         }
         else if(guessNum>num){
            printf("The guess is too high.\n");
         }
      }
   }
}

void changemax(){
   int input;
   printf("Set the max value of the number: ");
   scanf("%d", &input);
   if(input<0 || input>10){
      printf("Invalid number\n");
   }
   else{
      max = input;
   }
}

