#include<stdio.h>
int disobedience(void);

void ending(int *sword, int *shield, int *code, int *fight, int *game)
{
    int num;
    do
    {
    printf("You continue up to the door of the Evil Memelord's throne room. Unfortunately, it's locked, you need a secret code to enter.\n");
    printf("Enter 1 to use the secret code, and enter 0 to try and break the lock.\n");
    scanf("%d",&num);
    if(num!=1&num!=0)
         num=disobedience();
    if(num==1&&*code==1)
    {
         printf("You use your secret code and go inside.\n");
         printf("\n");
    }
    if(num==1&&*code!=1)
    { 
         printf("You do not have a secret code. Looks like you made a bad decision somewhere along your quest. ");
         printf("Well, this is it. You can't fight the Evil Memelord if you cannot reach the Evil Memelord.\n");
         printf("The sjw police take you to the dungeon. You tried so hard, and got so far, but in the end, it doesn't even matter.\n");
         printf("\n");
         printf("\n");
         printf("BAD END: En-CRYPT-tion\n");
         *game=0;
         break;
    }
    if(num==0)
    {
         if(*sword==1)
         {
              printf("You attempt to jam your sword in the lock. It works, but now your sword is all dented and broken.\n");
              *sword=10;
         }
         else
         {
             if(*code==1)
                  printf("You cannot break the lock. You use the secret code instead.\n");
             else
             {
                 printf("You cannot break the lock. Looks like this is it. You can't fight the Evil Memelord if you cannot reach the Evil Memelord.\n");
                 printf("The sjw police take you to the dungeon. You tried so hard, and got so far, but in the end, it doesn't even matter.\n");
                 printf("\n");
                 printf("\n");
                 printf("BAD END: En-CRYPT-tion\n");
                 printf("\n");
                 *game=0;
                 break;
             }
         }
    }
    printf("You've made it. You stand before the Evil Memelord at the top of the capital building. ");
    printf("The Evil Memelord congratulates you for getting this far, and says that not many have what it takes to face them. ");
    printf("So the Evil Memelord offers you a deal.");
    printf("You can join the meme side, and have everything you've ever wanted, or to FIGHT the Evil Memelord, and risk losing it all.\n");
    printf("Enter 1 to join the meme side, and enter 0 to FIGHT THE EVIL MEMELORD.\n");
    scanf("%d",&num);
    if(num!=1&num!=0)
          num=disobedience();
    if(num==1)
    {
         printf("The Evil Memelord is right. You could never defeat a power as great as this. You were just fooling yourself. ");
         printf("You take the Evil Memelord's hand. It's time for you to take your rightful place among the meme side.");
         printf("You and the Evil Memelord tule side by side for the rest of your lives.");
         printf("Until years later, when the Evil Memelord poisons your caesar salad, and you die.\n");
         printf("\n");
         printf("\n");
         printf("BAD END: The Tragedy of Julius MEMER.\n");
         printf("\n");
         *game=0;
         break;
    }
    else
    {
         printf("After all you've been through, you can't stop here. ");
         printf("You came here to FIGHT the Evil Memelord, and that's just what you'll do. ");
         printf("You let out a battle cry as you refuse the Evil Memelord's offer and rush towards the tyrant.\n");
         printf("Enter 1 to continue.\n");
         scanf("%d",&num);
         if(*shield>=1)
         {
              printf("You FIGHT the Evil Memelord. ");
              printf("It's really quite the epic battle. And you're right in the middle of it.");
              printf("It's truly the greatest thing anyone will ever witness in their entire lives. It's really something. ");
              printf("You're almost jealous of specators, because they have the memory of this day seared in their minds forever. ");
              printf("You hope someone's filming this because the recording needs to be put in a museum under greatest battle of all time. ");
              printf("And passed down for generation. It needs to be mandetory in schools to watch it every day, because you have not truly lived until you see this battle, ");
              printf("and anyone who will never have the priviledge to see it will die an unfilled, empty shell of a human.\n");
              printf("\n");
              printf("Seriously, it's a really, really cool fight.\n");
              printf("Enter 1 to continue.\n");
              scanf("%d",&num);
              if(*sword==10&&*code==1)
                   printf("However, your sword was broken when you attempted to break the lock. ");
              if(*sword==0)
              {
                   printf("Without a sword, you are unable to finish off the Evil Memelord. ");
                   printf("The Evil Memelord kneels before you, nearly defeated, and begs you to spare them. ");
                   printf("However, may simply be a trick to get you to let your guard down.\n");
                   printf("Enter 1 to have mercy on the Evil Memelord, and enter 0 to FINISH HIM.\n");
                   scanf("%d",&num);
                   if(num!=1&&num!=0)
                        num=disobedience();
                        if(num==1)
                   {
                        printf("You have mercy and allow the Memelord to escape, banished from the Meme Kingdom. ");
                        printf("However, the Evil Memelord just goes downstairs to get the sjw police to arrest you. ");
                        printf("You shouldn't have trusted the Evil Memelord. You knew this would happen.");
                        printf("And now you're in the dungeon, where you will remain for eternity.\n");
                        printf("BAD END: ONE MILLION YEARS DUNGEON.\n");
                        printf("\n");
                        *game=0;
                        break;
                   }
              }
              printf("You've done it, you've defeated the evil memelord. What are you going to do now? The world is without a leader. ");
              printf("You take the crown from the defeated Evil Memelord. It's your responsibility now. Our journey ends here, my friend. ");
              printf("You're the leader now.\n");
              printf("...\n");
              printf("...\n");
              printf("...\n");
              if(*fight>=5)
              {
                   printf("...\n");
                   printf("...\n");
                   printf("...\n");
                   printf("...\n");
                   printf("Years later, you look down from your throne. ");
                   printf("You're the Evil Memelord now. Power has corrupted you. Your minions fear you, as they should. ");
                   printf("You now reign over the world with an evil regime far worse than your predesessor ever did. ");
                   printf("You walk outside to your balcony and gaze over your empire. It's truly beautiful. ");
                   printf("But, you grow tired with ruling over a kingdom of memes. They're all weak. Not like you. ");
                   printf("But it's lonely at the top. You long for someone to fight, as you once did. ");
                   printf("You look out upon the world. Your world. You look up at the sky. Wait...something's wrong.\n");                
                   printf("What's that? That big ball of fire in the sky. You don't like the way it's looking at you. ");
                   printf("You stare at it for a moment, and your eyes begin to hurt. ");
                   printf("Did that thing just hurt you? That's high treason, and you will not stand for it. ");
                   printf("You don't have to take this. You fought the Evil Memelord, and won. You can do anything you want. ");
                   printf("And you want that thing gone.\n");
                   printf("Enter any command to fight the sun.\n");
                   scanf("%d",&num);
                   printf("TRUE END: Reach for the stars.\n");
                   printf("\n");
                   *game=0;
                   break;
              }
              else
              {
                   printf("...On second thought, you don't really want to be a leader. ");
                   printf("You've come this far to liberate the world if an evil tyrant, so you don't want to risk becoming one yourself. ");
                   printf("You tried to fight as few people as you could on the way here, after all. ");
                   printf("You should probably talk with the sjw police about forming some kind of democracy, ");
                   printf("and maybe form a senate of sorts. You are a real diplomat. Which is cool, you guess. ");
                   printf("I mean, no one writes sci-fi novels about the wonders of democracy. ");
                   printf("This story just stopped being a cool adventure and is now something out of a history textbook. ");
                   printf("But hey, at least no one is going to get hurt this way. so you guess you did alright.\n");
                   printf("\n");
                   printf("\n");
                   printf("OKAY END: Write the MEME-a Carta.\n");
                   printf("\n");
                   *game=0;
                   break;
              }
         }
         else
         {
              printf("You FIGHT the evil memelord...but, you lack the equipment and experience to do so. ");
              printf("You rushed through your journey, made a couple of poor decisions, and were too quick to pick unecessary fights. ");
              printf("You are quickly defeated and thrown in the gay baby jail, where you will remain for the rest of your life. ");
              printf("Looks like you were a bit too aggressive and eager to fight. It's a metaphor, really. ");
              printf("You wanted to fight the world so badly, but now you're stuck in the gay baby jail, wheres there's nothing to do, ");
              printf("and no one to fight. And you will never fight anyone ever again.");
              printf("\n");
              printf("\n");
              printf("BAD END: Aggressive Irony.\n");
              printf("\n");
              *game=0;
              break;
         }
    }
    }while(*game>0);
    printf("\n");
    printf("Would you like to play again? Enter 1 for yes and 0 for no.\n");
    scanf("%d",&num);
    if(num!=1&num!=0)
          num=disobedience();
    if(num==1)
         *game=1;
    if(num==0)
         *game=0;
}
