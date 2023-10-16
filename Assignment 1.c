#include <stdio.h>

void main()
{

int price,rs_25=10,rs_15=10,rs_10=10,coins50=10,coins25=10,coins10=10,coins5=10,count25=0,count15=0,count10=0,money,balance,i;

printf("Welcome To Stamp Vending Machine!!!!!!\n");
printf("\nWe Can Help You To Get Stamps As You Wish\n");
do{
        printf("\nReminder!!!You can get 25,15,10 stamps only.\n");
        printf("\nHow much price a stamp do you need?\n");
        scanf("%d",&price);
        if(rs_25==0||rs_15==0||rs_10==0){
                printf("\nSorry!!You can't get Rs.%d stamp at this time.\n",price);
                printf("\n-------------------------------------------------------------\n");
                printf("\nAre you continue again ?\n If yes enter - 1 \n No enter - 0\n");
                scanf("%d",&i);
                printf("\n-------------------------------------------------------------\n");
                }

        else{
         if((price!=25) &&(price!=15) && (price!=10)){
            printf("\nSorry!!You can't get a stamp.\n");
            printf("\nRs.%d stamps not available in this machine.\n",price);
            printf("\n-------------------------------------------------------------\n");
            printf("\nAre you continue again ?\n If yes enter - 1 \n No enter - 0\n");
            scanf("%d",&i);
            printf("\n-------------------------------------------------------------\n");
}

        else{
          printf("\nNow you can drop your money in the machine.\n");
          printf("\nReminder!!! You can drop 50,25,10,5 coins only.You can't drop two coins at one time\n");
          printf("\nDrop your money:");
          scanf("%d",&money);
          if(money<price){
            printf("\nInsufficient amount tendered\n");
            printf("\nYou can't get your stamp\n");
            printf("\n-------------------------------------------------------------\n");
            printf("\nAre you continue again ?\n If yes enter - 1 \n No enter - 0\n");
            scanf("%d",&i);
            printf("\n-------------------------------------------------------------\n"); }
         else{
          if((money!=50) && (money!=25)&&(money!=10)&&(money!=5)){
                printf("\nInsufficient amount tendered\n");
                printf("\nYou can't get your stamps\n");
                printf("\n-------------------------------------------------------------\n");
                }
          else{
                if(price>=25){
                    count25+=1;
                    if(count25<=rs_25 ){
                          printf("\nYou can get Rs.%d stamp.\n",price);
                          balance=money-price;
                          if(money==50)
                            ++coins50;
                          if(money==25)
                            ++coins25;
                          if(balance==0)
                              printf("\ninsufficient balance\n");
                          else{
                            printf("\nYour balance is Rs.%d\n",balance);
                            if(coins25==0){
                                printf("\nNo change available\n");
                                printf("\nHere you entered coins back.\n");
                                printf("\nAvailable quantity of stamps: %d %d %d \n",rs_25,rs_15,rs_10);
                                if(money==50){
                                    coins50--;
                                    printf("\nAvailable quantity of coins: %d %d %d %d \n",coins50,coins25,coins10,coins5);
                                    printf("\n-------------------------------------------------------------\n");}
                                else{
                                    coins25--;
                                    printf("\nAvailable quantity of coins: %d %d %d %d\n ",coins50,coins25,coins10,coins5);
                                    printf("\n-------------------------------------------------------------\n");
                                    }
                                }

                            else{
                               rs_25-=1;
                               --coins25;
                               printf("\nYou can get your change is one 25 coin\n");
                               printf("\nAvailable quantity of stamps: %d %d %d \n",rs_25,rs_15,rs_10);
                               printf("\nAvailable quantity of coins: %d %d %d %d \n",coins50,coins25,coins10,coins5);
                               printf("\n-------------------------------------------------------------\n");
}
                            }}

                    else
                         printf("\nSorry!! You can't get Rs.%d stamp at this time.Rs.%d stamps are not available.\n",price,price);
                         printf("\n-------------------------------------------------------------\n");
                         printf("\nAre you continue again ?\n If yes enter - 1 \n No enter - 0\n");
                         scanf("%d",&i);
                         printf("\n-------------------------------------------------------------\n"); }
               else{
                 if(price>=15){
                    count15+=1;
                    if(count15<=rs_15){
                        printf("\nYou can get Rs.%d stamp.\n",price);
                        balance=money-price;
                        if(money==50)
                            ++coins50;
                        if(money==25)
                            ++coins25;
                        if(balance==0)
                            printf("\ninsufficient balance\n");
                        else{
                            printf("\nYour balance is Rs.%d\n",balance);
                            rs_15-=1;
                            if(coins50==0  || coins25==0 ){
                                    printf("\nNo change available\n");
                                    printf("\nHere you entered coins back.\n");
                                    printf("\nAvailable quantity of stamps: %d %d %d\n ",rs_25,rs_15,rs_10);
                                    if(money==50){
                                          coins50--;
                                          printf("\nAvailable quantity of coins: %d %d %d %d \n",coins50,coins25,coins10,coins5);
                                          printf("\n-------------------------------------------------------------\n");}
                                    else{
                                         coins25--;
                                         printf("\nAvailable quantity of coins: %d %d %d %d \n",coins50,coins25,coins10,coins5);
                                         printf("\n-------------------------------------------------------------\n"); }

                                    }
                            else{
                                    --coins25;
                                    --coins10;
                                    printf("\nYou can get your change is one 25 coin and one 10 coins\n");
                                     printf("\nAvailable quantity of stamps: %d %d %d \n",rs_25,rs_15,rs_10);
                                     printf("\nAvailable quantity of coins: %d %d %d %d \n",coins50,coins25,coins10,coins5);
                                     printf("\n-------------------------------------------------------------\n");
                       }
                          }
                             }
                    else
                              printf("\nSorry!! You can't get Rs.%d stamp at this time.Rs.%d stamps are not available.\n",price,price);
                              printf("\n-------------------------------------------------------------\n");
                              printf("\nAre you continue again ?\n If yes enter - 1 \n No enter - 0\n");
                              scanf("%d",&i);
                              printf("\n-------------------------------------------------------------\n");}

                else{
                       if(price>=10){
                            count10+=1;
                            if(count10<=rs_10){
                                  printf("\nYou can get Rs.%d stamp.\n",price);
                                  balance=money-price;
                                  if(money==50)
                                      ++coins50;
                                  if(money==25)
                                      ++coins25;
                                  if(money==10)
                                     ++coins10;
                                  if(balance==0)
                                     printf("\ninsufficient balance\n");
                                  else{
                                     rs_10-=1;
                                     printf("\nYour balance is Rs.%d\n",balance);
                                     if(coins25==0  || coins10==0 || coins5==0){
                                       printf("\nNo change available\n");
                                       printf("\nHere you entered coins back.\n");
                                       printf("\nAvailable quantity of stamps: %d %d %d \n",rs_25,rs_15,rs_10);
                                      if(money==50){
                                          coins50--;
                                          printf("\nAvailable quantity of coins: %d %d %d %d\n ",coins50,coins25,coins10,coins5);
                                          printf("\n-------------------------------------------------------------\n"); }
                                      else if(money==25){
                                          coins25--;
                                          printf("\nAvailable quantity of coins: %d %d %d %d\n ",coins50,coins25,coins10,coins5);
                                          printf("\n-------------------------------------------------------------\n");}
                                      else{
                                        coins10--;
                                        printf("\nAvailable quantity of coins: %d %d %d %d\n ",coins50,coins25,coins10,coins5);
                                        printf("\n-------------------------------------------------------------\n"); }
                                      }

                                     else{
                                        if(balance==40){
                                            --coins25;
                                            --coins10;
                                            --coins5;
                                            printf("\nYou can get one 25,one 10,one 5 coins.\n");
                                            printf("\nAvailable quantity of stamps: %d %d %d \n ",rs_25,rs_15,rs_10);
                                            printf("\nAvailable quantity of coins: %d %d %d %d \n",coins50,coins25,coins10,coins5);
                                            printf("\n-------------------------------------------------------------\n");
}
                                        if(balance==15){
                                            --coins10;
                                            --coins5;
                                            printf("\nYou can get one 10,one 5 coins.\n");
                                            printf("\nAvailable quantity of stamps: %d %d %d \n",rs_25,rs_15,rs_10);
                                            printf("\nAvailable quantity of coins: %d %d %d %d\n",coins50,coins25,coins10,coins5);
                                            printf("\n-------------------------------------------------------------\n");
}
                                            }
}
}
                             else
                                  printf("\nSorry!! You can't get Rs.%d stamp at this time.Rs.%d stamps are not available.\n",price,price);
                                  printf("\n-------------------------------------------------------------\n");
                                  }
                }
}}
            }
}
        /*printf("\nAre you continue again ?\n If yes enter - 1 \n No enter - 0\n");
        scanf("%d",&i);
        printf("\n-------------------------------------------------------------\n");*/


}}
while(i==1);
printf("\nThank You Come Again!!!!\n");
printf("\n-------------------------------------------------------------\n");
}






