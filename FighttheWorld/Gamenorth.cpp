#include<stdio.h>
int disobedience(void);
void snake(int *money, int *snersonm, int *fight);
void cat(int *money, int *lolcat, int *fight);
void assassin(int *money);

void north(int *money, int *sneople, int *can, int *fight)
{
     int num, money2, sneople2, can2, fight2;
     money2=*money;
     sneople2=*sneople;
     can2=*can;
     fight2=0;
     printf("You now head north.\n");
     printf("\n");
     printf("Enter 1 to continue.\n");
     scanf("%d",&num);
     printf("The far north is a barren wasteland, mostly inhabited by the snake people (or Sneople) and compulsive memers. ");
     printf("You can't walk two feet without getting 'trolled' or 'memed on'. ");
     printf("It's a horrible place, and not many survive. The second-hand embarassment has been proven to be fatal. ");
     printf("It's the perfect place for the Evil Memelord's capital building.\n");
     printf("\n");
     printf("The place abosolutely disgusts you.\n");
     printf("\n");
     printf("Enter 1 to look for the capital building, and enter 0 to find a memer and FIGHT THEM.\n");
     scanf("%d",&num);
     if(num!=1&num!=0)
               num=disobedience();
     while(num==0)
     {
               *fight=*fight+1;
               printf("You find a random guy and punch him in the face. ");
               printf("You're now one step coser to achieving your goal. ");
               printf("You are truly an American hero.\n");
               printf("Now that you got that out of your system, you can go find the capital building....");
               printf("or, maybe ou could keep doing his for a while.\n");
               printf("Enter 1 to look for the capital building, an enter 0 to find another memer and FIGHT THEM TOO.\n");
               scanf("%d",&num);
               if(num!=1&num!=0)
                    num=disobedience();
     }
     printf("Uh, yeah, you WOULD do that. If you knew where the capital building even is. ");
     printf("You didn't exactly get the most reliable directions. ");
     printf("Time to look for a little assistance on your quest.\n");
     printf("Enter 1 to look for someone on the roads, and enter 0 to look for someone in the forest.\n");
     scanf("%d",&num);
     if(num!=1&num!=0)
         num=disobedience();
     if(num==1)
     {
          printf("You decide to look for someone on the streets.\n");
          printf("\n");
          snake(&money2, &sneople2, &fight2);
          *sneople=sneople2;
          *fight=*fight+fight2;
     }
     if(num==0)
     {
          printf("You decide to look for someone in the forest.\n");
          printf("\n");
          cat(&money2, &can2, &fight2);
          *can=can2;
          *fight=*fight+fight2;
     }
     printf("You begin to head over to the capital building when suddenly...\n");
     assassin(&money2);
     if(money2<*money)
          *money=*money-1;
     else
          *money=*money+1;
     printf("Now that that's over with, you find your way to the capital building.\n");
     printf("\n");
     printf("...\n");
}
