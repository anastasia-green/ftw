#include<stdio.h>
int disobedience(void);
void kanye(void);

void west(int *shield, int *fight)
{
     int num;
     printf("You decide to go to the West.\n");
     printf("The west is a dry, mountainous area, with little life. ");
     printf("When the world was taken over by the Evil Memelord, the west retained it's aged feel, ");
     printf("while still keeping modern meme influences. The result, a classy area of older memes.\n");
     printf("\n");
     printf("The place abosolutely disgusts you.\n");
     printf("\n");
     printf("Enter 1 to go through the mountains, and enter 0 to find some townsfolk.\n");
     scanf("%d",&num);
     if(num!=1&num!=0)
         num=disobedience();
     if(num==0)
     {
         printf("You spy a town just up the road and venture in. ");
         printf("However, upon coming closer to the town, you see that no one is around. ");
         printf("You go into a saloon, and you see a crowd of people all gathered in the center of town. ");
         printf("They seem to all be gathered for some event or sorts.\n");
         printf("\n");
         printf("You see a girl leaning up against a wall, who looks utterly disgusted by all this commotion.\n");
         printf("Enter 1 to ask her what's up, and enter 0 to fight her.\n");
         scanf("%d",&num);
         if(num!=1&num!=0)
              num=disobedience();
         if(num==0)
         {
              printf("No.\n");
              scanf("%d",&num);
              *fight=*fight+1;
         }
         printf("You ask the girl what the deal is with this crowd. ");
         printf("She rolls her eyes and says that ever since the Evil Memelord took over the world, ");
         printf("everyone in this town started to GATHER to play some MAGIC card game all day long. ");
         printf("But she says that she can't stand the game, and would much rather play Yu-Gi-Oh instead. ");
         printf("You tell her of your quest to defeat the Evil Memelord, ");
         printf("and she says that she'll do anything to help ban this stupid game and get everyone acting like normal again. ");
         printf("She gifts you with a shield to aid you in your battles. It's pink. You think it's quite pretty. ");
         printf("She wishes you luck and advises you go up Brokeback mountain, as it is the quickest way to the capital building.\n");
         printf("Enter 1 to continue.\n");
         scanf("%d",&num);
         *shield=2;
     }
     printf("You decide to head up Brokeback mountain.\n");
     printf("\n");
     printf("Brokeback mountain is dangerous area of the west, highly populated by giant anthopomorphic animals, known as furries. ");
     printf("You think they're really weird, and kinda creepy looking. You try to stay away from them.\n");
     printf("\n");
     printf("You try to avoid the furries and just climb the mountain, but they keep glaring at you. ");
     printf("You wonder if your jacket is like, made of some animal or something and is offending them.\n");
     printf("Enter 1 to keep climbing, and enter 0 to FIGHT A FURRY.\n");
     scanf("%d",&num);
     if(num!=1&num!=0)
          num=disobedience();
     if(num==1)
     {
          printf("You try to keep climbing, but the furries attack you anyway. ");
          printf("You wonder what the deal is with them. They probably just plain don't like humans climbing their mountain.\n");
     }
     printf("You have no choice but to FIGHT the furries. ");
     printf("Or, well, you try to, but it's very hard to fight giant wolf/tiger creatures while hanging onto a mountain. ");
     printf("And besides, attempting to fight them only makes them angrier, because 'YOU CAN'T FIGHT HATE WITH HATE'\n");
     printf("They push you off the mountain, but at the last minute, as you're falling to your death, ");
     printf("a hand reaches down and saves you from certain death.\n");
     printf("You look up at your savior, thankful, only to realize that you were saved by none other than...\n");
     printf("(Enter 1 to continue.)\n");
     scanf("%d",&num);
     *fight=*fight+1;
     kanye();
}
