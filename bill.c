/*
-Computes tax on a restaurant bill
-Computes tip on a restaurant bill
-Accept percentages from the command line
-Display: 
   -meal cost
   -tax amount 
   -tip amount 
   -total bill
-Meal cost randomly chosen from:
   -Salad: $9.95
   -Soup: $4.55
   -Sandwhich: $13.25
   -Pizza: $22.35
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(int argc, char *argv[]){
   char *eptr;
   double tax = strtod(argv[1], &eptr);
   double tip = strtod(argv[2], &eptr); 
   int i;
   time_t t;
   double meal, mealTax, mealTip, mealTotal;

   srand((unsigned) time(&t));
   i = rand() % 4;

   if(i==0){
      meal = 9.95;
   }
   if(i==1){
      meal = 4.55;
   }
   if(i==2){
      meal = 13.25;
   }
   if(i==3){
      meal = 22.35;
   }

   mealTax = meal*tax;
   mealTip = meal*tip;
   mealTotal = meal + mealTax + mealTip;

   printf("Meal cost: $%f\n", meal);
   printf("Tax amount: $%f\n", mealTax);
   printf("Tip amount: $%f\n", mealTip);
   printf("Total bill: $%f\n", mealTotal);
}