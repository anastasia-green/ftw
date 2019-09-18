//Ana Green
//4/13/15
//Dr. Kuykendall
//Comp Sci and Info Tech
//Game
#include<stdio.h>
int disobedience(void);
void west(int *shield, int *fight);
void east(int *code, int *fight);
int south(int *game);
void swordmaster(int *sword, int *fight);
void kanye(void);
int skrillex(void);
void north(int *money, int *sneople, int *can, int *fight);
void snake(int *money, int *snerson);
void cat(int *money, int *lolcat);
void assassin(int *money);
void shop(int *money, int *sword, int *shield, int *code);
void capital(int *sneople, int *can);
void beatles(void);
void ending(int *sword, int *shield, int *code, int *fight, int *game);
int main(void)
{
    int num, money, sword, shield, code, sneople, can, fight, game, dummy;
    money=3;
    sword=0;
    shield=0;
    code=0;
    sneople=0;
    can=0;
    fight=0;
    do
    {
    game=5;
    printf("FIGHT THE WORLD\n");
    printf("\n");
    printf("Enter any command to start.\n");
    scanf("%d",&num);
    if(num==420)
         printf("dank\n\n");
    printf("It is the distant future. The world is ruled with an iron fist by the EVIL MEMELORD. ");
    printf("It's up to you alone to stop this tyrant. Everyone else is far too scared and/or doesn't care enough. ");
    printf("Eh, I can't really blame them.\n");
    printf("Will you take up this challenge? Enter 1 for yes and 0 for no.\n");
    scanf("%d",&num);
    if(num!=1&num!=0)
         num=disobedience();
    if(num==0)
    {
         printf("Wow, okay. You're a real baby, huh? But if you don't stop the evil memelord then who will? ");
         printf("You're going on this adventure whether you like it or not.\n");
         printf("\n");
    }
    printf("Your adventure begins in your hometown. You're ready to begin your quest when you run into an innocent bystander.\n");
    printf("Enter 1 to ask for directions, enter 0 to FIGHT HIM.\n");
    scanf("%d",&num);
    if(num!=1&num!=0)
         num=disobedience();
    if(num==1)
    {
         printf("You ask the bystander for directions to the capital building. ");
         printf("He says that no one knows exactly where it is, but he thinks that it's in the far west. ");
         printf("Although, he recalls that he heard from a friend that it was in the far east.\n");
         printf("Enter 3 to ignore him and go to the south, enter 2 to go to the far east, enter 1 to go to the far west, ");
         printf("and enter 0 to FIGHT THE BYSTANDER AND HIS FRIEND.\n");
         scanf("%d",&num);
         if(num!=3&num!=2&num!=1&num!=0)
              num=disobedience();
         if(num==3)
              num=south(&game);
              if(game==1)
                   break;
              if(game==0)
                   break;
         if(num==2)
              east(&code, &fight);
         if(num==1)
              west(&shield, &fight);
    }
    if(num==0)
    {
         fight=fight+1;
         printf("You FIGHT the innocent bystander and WIN. Turns out he was a government spy. ");
         printf("He tells you that the capital building is in the far north, but you'll never survive without a sword. ");
         printf("Because in the distant future, people went back to using swords. Swords are really cool. ");
         printf("You know theres a sword shop downtown. But you don't need a sword, do you? You don't need anything but your FISTS.\n");
         printf("Enter 1 to go get a sword, enter 0 to go straight to the north.\n");
         scanf("%d",&num);
         if(num==1)
              swordmaster(&sword, &fight);
    }
    north(&money, &sneople, &can, &fight);
    printf("Upon gazing on the massive building, you get a bit apprehensive. ");
    printf("Perhaps you meager skills won't be enough to defeat the Evil Memelord. ");
    printf("And you still have some money left. Maybe you should visit the shop first, to get a few supplies.\n");
    printf("Enter 1 to go to the shop, and enter 0 to go into the capital building to FIGHT THE EVIL MEMELORD.\n");
    scanf("%d",&num);
    if(num!=1&num!=0)
          num=disobedience();
    if(num==1)
          shop(&money, &sword, &shield, &code);
    printf("You once again gaze out onto the large capital building before you. You've finally made it. ");
    printf("It was a long journey, but it's not ever yet. The Evil Memelord is at the top of the capital building. ");
    printf("You have to survive the journey up there if you want to face the tyrant.\n");
    printf("Enter 1 to go inside, and enter 0 to stay outside for a little while.\n");
    scanf("%d",&num);
    printf("\n");
    while(num==0)
    {
               printf("You decide to stay out here for a little while longer.\n");
               printf("...\n");
               printf("...\n");
               printf("...\n");
               printf("Well, that was fufilling.\n");
               printf("Enter 1 to go inside now, and enter 0 to stay outside for a little while longer.\n");
               scanf("%d",&num);
               if(num!=1&num!=0)
                    num=disobedience();
    }
    capital(&sneople, &can);
    ending(&sword, &shield, &code, &fight, &game);
    }while(game==1);
    scanf("%d",dummy);
    return 0;
}

