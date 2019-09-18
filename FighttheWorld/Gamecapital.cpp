#include<stdio.h>
int disobedience(void);
int beatles(void);

void capital(int *sneople, int *can)
{
     int num, jail;
     printf("'Every journey begins with a single step.' You feel like someone important said that. You step inside.\n");
     printf("Wait, are those the Beatles?\n");
     printf("\n");
     jail=beatles();
     if(jail==1)
     {
          printf("You are now in gay baby jail, the dungeon.\n");
          printf("Well this sure does stink. You haven't been in the capital building for 5 minutes and you already got caught.\n");
          printf("Enter 1 to try and work together with the other prisoners, and enter 0 to FIGHT another prisoner.\n");
          scanf("%d",&num);
          if(num!=1&num!=0)
               num=disobedience();
          while(num==0)
          {
               printf("You FIGHT another prisoner. Nothing really happens though. You fight him, but there's no real lasting effect.");
               printf("That's probably some kind of commentary on how the prison system works, ");
               printf("but you don't really feel like thinking about it too deeply.\n");
               printf("Enter 1 to try and work together with the other prisoners, and enter 0 to FIGHT another prisoner.\n");
               scanf("%d",&num);
               if(num!=1&num!=0)
                    num=disobedience();
          }
          if(num==1)
          {
               printf("Since you're stuck in gay baby jail with a bunch of hardened war criminals, teamwork is probably the best idea. ");
               printf("You stand up on a table and call everyone's attention. ");
               printf("You begin to make an inspiring speech about teamwork and how you all want to destroy the evil memelord, ");
               printf("so why not do it together. The speech is really quite inspiring. ");
               printf("You rally your troops and storm the guards.\n");
               printf("\n");
               printf("You quest is coming to an end, and the final battle is almost upon you.\n");
               printf("Enter 1 to continue.\n");
               scanf("%d",&num);
          }
     }
     printf("You fight your way though hoards of Memeguards. You are fueled by your passion and hatred for the Evil Memelord. ");
     printf("Measley Memeguards are no match for your power--\n");
     printf("Oh no, is that...?\n");
     printf("\n");
     printf("It is. It's the social justice warrior police. The Evil Memelord's last line of defense.\n");
     printf("Enter 1 to FIGHT the sjw police, and enter 0 to remember something important.\n");
     scanf("%d",&num);
     if(num!=1&num!=0)
          num=disobedience();
     if(num==1)
     {
          printf("You FIGHT the sjw police.\n");
          printf("You win. Wow, that was a lot easier than you thought it would be. ");
          printf("But you suppose that that's because this battle was virtually pointless in the grand scheme of things, ");
          printf("and that at this point everyone's just waiting for the final battle with the Evil Memelord. ");
          printf("You try not to dwell on this, and continue ahead.\n");
          printf("Enter 1 to continue.\n");
          scanf("%d",&num);
     }
     if(num==0)
     {
          if(*sneople==1)
          {
               printf("You remember the snerson who told you that if you needed help, to call. ");
               printf("You make the sneople call. ");
               printf("Suddenly, illuminati agents unmask themsevles and surround you. ");
               printf("They were here the whole time, disguised as prisoners and Memeguards. ");
               printf("Even the sjw police has been infiltrated. ");
               printf("The illuminati signal to you that they will take care of the sjw police, and that you can move on.\n");
               printf("Enter 1 to continue.\n");
               scanf("%d",&num);
          }
          else
          {
          if(*can==1)
          {
               printf("You remember the can that the lolcat sages gave you. ");
               printf("You open it, and the sound of the can opening mixed with the smell of the catfood inside summons all the cats in the area. ");
               printf("They are out for blood. They will fight for you. ");
               printf("You tell the cats to fight the sjw police, who cannot fight back because, well, they're cats. ");
               printf("You set the can down on the floor and continue on ahead.\n");
               printf("Enter 1 to continue.\n");
               scanf("%d",&num);
          }
          else
          {
               printf("You can't remember what you were trying to remember. ");
               printf("This means that you probably did not make the right choice on your quest. ");
               printf("You just fight the sjw police. Yeah, you could have done that all along, but it was more fun to do it in a cool way. ");
               printf("You continue on.\n");
               printf("Enter 1 to continue.\n");
               scanf("%d",&num);
          }
          }
     }
}
