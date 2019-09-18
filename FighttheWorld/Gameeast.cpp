#include<stdio.h>
int disobedience(void);
int skrillex(void);

void east(int *code, int *fight)
{
     int num;
     printf("You decide to go to the East.\n");
     printf("The east is war-torn area, and is mostly large lakes and rivers with cities built around them. ");
     printf("After the great meme war, the east got the brunt of society's changes. ");
     printf("It is now a heavily populated urban area, filled with many modern memes.\n");
     printf("\n");
     printf("The place abosolutely disgusts you.\n");
     printf("\n");
     printf("Enter 1 to look for some people and enter 0 to look for some transportation.\n");
     scanf("%d",&num);
     if(num!=1&num!=0)
         num=disobedience();
     if(num==1)
     {
         printf("You look around and see a figure in the distance. ");
         printf("Why, it's Bingle, the basil salesmen. He asks you if you would like any basil from his bindle, ");
         printf("or perhaps some basil on a bagle, to which you reply that you would love some, ");
         printf("but are too busy with your quest at the moment and will come back later.\n");
         printf("Bingle asks you which crazy quest you're going on this time, to which you reply that you're going to FIGHT the Evil Memelord. ");
         printf("Bingle laughs and says that if you want to do that, you'd better take a cruise north to the capital building.\n");
         printf("Enter 1 to go on a cruise, and enter 0 to FIGHT BINGLE.\n");
         scanf("%d",&num);
         if(num!=1&num!=0)
              num=disobedience();
         if(num==0)
         {
              *fight=*fight+1;
              printf("No, you could never fight Bingle. Bingle has done nothing wrong, and doesn't deserve any harm. ");
              printf("You feel ashamed for even thinking such a thing, so instead you buy a bagel with a bit of bindle basil from Bingle ");
              printf("and continue your quest.\n");
              printf("Enter 1 to continue.\n");
              scanf("%d",&num);
         }
     }
     printf("You decide that the docks are probably the quickest way to get some info on the location of the Evil Memelord's capital building, ");
     printf("so you head down there to look for a boat to take you to the capital building.\n");
     printf("\n");
     printf("Once there, you see a large cruise ship. ");
     printf("You buy a ticket and hop aboard.\n");
     printf("\n");
     printf("Once on the boat, you see Leonardo Dicaprio.\n");
     printf("Enter 1 to make a bad titantic joke, enter 0 to FIGHT HIM.\n");
     scanf("%d",&num);
     if(num!=1&num!=0)
          num=disobedience();
     if(num==1)     
          printf("You make a bad titanic joke. Leonardo Dicaprio throws you overboard.\n");
          printf("\n");
     if(num==0)
     {
          printf("You FIGHT Leonardo Dicaprio. You lose and he throws you overboard before crying about how he does not have an oscar. That poor man.\n");
          *fight=*fight+1;
     }
     printf("Well, you're stuck in the ocean now. Nice going.\n");
     printf("Enter 1 to continue.\n");
     scanf("%d",&num);
     *code=skrillex();
     printf("Well, you're back on shore now. ");
     printf("You continue on north, to the Evil Memelord's capital building.\n");
}
