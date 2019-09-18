#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int disobedience(void);
int south(int *game);
void swordmaster(int *sword, int *fight);
void kanye(void);
int skrillex(void);
void snake(int *money, int *snerson, int *fight);
void cat(int *money, int *lolcat, int *fight);
void assassin(int *money);
void shop(int money, int *sword, int *shield, int *code);
int beatles(void);

int south(int *game)
{
     int num;
     num=0;
     printf("You decide to not listen to the bystander, who's probably just trying to lead you astray. ");
     printf("You head to the far south instead. ");
     printf("However, as soon as you do this, you find out that it was a very bad idea, as there is nothing in the south but desert. ");
     printf("No people, no memes, no nothing. There's just nothing. It's quite the sobering place. No one's here. ");
     printf("You wonder if you're alone in the world. Or even the universe. You would never know out here. ");
     printf("You begin to get kind of sad. You're all alone, and what have you accomplished? Nothing. ");
     printf("Your whole quest is probably pointless. While you briefly ponder your existance, you see a figure in the distance. ");
     printf("There's not suppose to be anyone down here but you. You know no one is crazy enough to actually LIVE down here. ");
     printf("As the figure approaches, you can make out who it is.\n");
     printf("Enter 1 to continue.\n");
     scanf("%d",&num);
     printf("Why, it's Danny Devito.\n");
     printf("You ask why he's here, but he shushes you. ");
     printf("He's the guardian of the South, here to turn away anyone who dares enter this miserable wasteland. ");
     printf("He offers you a nice egg in this trying time. ");
     printf("He also offers you a choice. To head East or West.\n");
     printf("Enter 2 to go East, enter 1 to go West, and enter 0 to FIGHT Danny Devito.\n");
     scanf("%d",&num);
     if(num!=2&num!=1&num!=0)
         num=disobedience();
     if(num==0)
     {
         printf("You FIGHT Danny Devito. He smiles at you. He knows you don't want to do this. But you must. ");
         printf("There's no rules down in the South. You can do anything you want. You can kill Danny Devito if you want to. ");
         printf("Danny Devito just keeps smiling, though, he's proud of you, even if no one else ever is. ");
         printf("You kill Danny Devito, and he dies with a smile on his face.");
         printf("You're a monster, but it had to be done.\n");
         printf("Your journey ends here, friend. Before it even could truly begin.\n");
         printf("\n");
         printf("\n");
         printf("BAD END: Danny Defeato.\n");
         printf("\n");
         printf("Would you like to play again? Enter 1 for yes and 0 for no.\n");
         scanf("%d",&*game);
         if(*game==1)
         {
              printf("You know what, on second thought, no, you don't get to play again. ");
              printf("Why should you? You just killed Danny Devito, you monster. ");
              printf("You don't get to play again. You get to sit here and think about what you've done. I hope you're happy.\n");
         }
     }
     return num;
}

void swordmaster(int *sword, int *fight)
{
    int num;
    num=0;
    printf("You go to the sword shop. You go inside, and meet the swordmaster. ");
    printf("He tells you that if you want to FIGHT the Evil Memelord, you need some proper training with a blade first. ");
    printf("He refuses to sell you a sword unless you accept his training. ");
    printf("But you don't need training, you're already a master swordfighter.\n");
    printf("Enter 2 to accept his training, enter 1 to refuse and leave, and enter 0 to FIGHT HIM. RIGHT NOW. IN THE SHOP.\n");
    scanf("%d",&num);
    if(num!=2&num!=1&num!=0)
         num=disobedience();
    if(num==2)
    {
              printf("You accept his training, and the sword master provides you with a free basic sword and a few lessons. ");
              *sword=1;
    }
    if(num==1)
              printf("You decide to leave the sword master. You don't need him. All you need is your FISTS and your DETERMINATION.");
    if(num==0)
    {
              printf("You FIGHT the sword master. You win easily. You told him you were already a master. ");
              printf("He respects you initiative and gifts you with a very powerful enchanted sword that is very durable.\n");
              *sword=2;
              *fight=*fight+1;
    }
}

void kanye(void)
{
     int num;
     printf("Kanye West!!\n");
     printf("Now what is he doing here? ");
     printf("He tells you that he is the keeper of the West, Kanye West. ");
     printf("And that he's been watching you on your Kanye Quest. ");
     printf("And your courage has brought a tear to his eye and a feeling to his Kanye Chest. ");
     printf("So he thought he'd better put your moves to the Kanye Test. ");
     printf("And that he will never Kanye Rest until he has been proven the Kanye Best. ");
     printf("He hopes that you're feeling Kanye Blessed because you're probably going to get pretty Kanye Stressed ");
     printf("when he wipes out this Kanye Pest.\n");
     printf("Enter 1 to have an epic rap battle with Kanye West, and enter 0 to just FIGHT HIM.\n");
     scanf("%d",&num);
     if(num!=1&num!=0)
         num=disobedience();
     if(num==1)
    {
         printf("You have an epic rap battle with Kanye West. It's quite the event, you're not terrible at rapping, ");
         printf("and Kanye West is Kanye West. But it's clear that you're the underdog. The furry dj seems to be favoring Kanye, ");
         printf("and giving him the sickest of beats. You need to think of something, and quick.\n");
         printf("Enter 1 to call upon the gods of rap for assistance, and enter 0 to FIGHT Kanye West.\n");
         
         scanf("%d",&num);
         if(num!=1&num!=0)
              num=disobedience();
         if(num==1)
         {
              printf("You need to a little help here, so you call upon the gods of rap to give you guidence. ");
              printf("You see a bright light from above. Have your prayers been answered? ");
              printf("Snoop Dogg decends from the heavens. He asks if you are the one with the noble quest. You reply yes. ");
              printf("Snoop Dogg says very well, he will assist you in this rap battle. ");
              printf("Snoop walks over to Kanye West, and begins to throw down the sickest of rhymes, and the hottest of beats. ");
              printf("You shield your eyes, you are not worthy to be witnessing such a battle. ");
              printf("Kanye fought hard, but no one can survive an onslaught from Snoop Dogg himself. ");
              printf("After defeating Kanye, Snoop wishes you luck on your quest, you ask him to say hello to Nicki Manaj, ");
              printf("and he says 'aight dog', and ascends back up to the heavens. ");
              printf("The display brings a tear to your eye.\n");
         }
         if(num==0)
         {
              printf("You can't fight Kanye, not now. You started this rap battle and you have to see it through to the end. ");
              printf("You continue to rap, but you're obviously losing. You're a FIGHTER, to a rapper. ");
              printf("You get significantly burned, and lose to Kanye West. You're not physically hurt, but you self-esteem took a hit. ");
              printf("Kanye West seems disappointed that you lost the rap battle, but decides you give you another chance. ");
              printf("He realized that you're a FIGHTER, and decided that he'll let you pass if you can beat him in a real fight. ");
              printf("Now's your time to shine.\n");
              printf("\n");
              printf("You FIGHT Kanye West. It's truly quite the battle. Kanye has the ability to switch his microphone to battle mode, ");
              printf("Which makes his sick raps deadly. Kanye fights hard, but in the end he can't best you in a fight. ");
              printf("You take his microphone, without which he is powerless. You have won.\n");
         }
    }
    if(num==0)
    {
         printf("You FIGHT Kanye West. It's truly quite the battle. Kanye has the ability to switch his microphone to battle mode, ");
         printf("Which makes his sick raps deadly. Kanye fights hard, but in the end he can't best you in a fight. ");
         printf("You take his microphone, without which he is powerless. You have won.\n");
    }
    scanf("%d",&num);
    printf("You have defeated Kanye West. He says that you have truly been proven the Kanye Best, that now he has to Kanye Rest. ");
    printf("He grants you safe passage to the north, where the Evil Memelord's capital building awaits.\n");
    printf("\n");
}

int skrillex(void)
{
     int num, code;
     code=0;
     printf("You look around for help. You see a small boat off in the distance. ");
     printf("It just so happens to be none other than Skrillex. ");
     printf("He tells you that he's the keeper of the East, but is on vacation right now. ");
     printf("He deicded to try fishing, but he's not very good at it because he always drops the\n");
     printf("\n");
     printf("...salmon.\n");
     printf("\n");
     printf("You swim up to his boat. ");
     printf("Skrillex waves hello, and politely asks if you would to join him in fishing.\n");
     printf("Enter 2 to join him, enter 1 to fight him, and enter 0 to DROP THE BASS.\n");
     scanf("%d",&num);
     if(num!=2&num!=1&num!=0)
         num=disobedience();
     if(num==2)
    {
         printf("You climb into Skrillex's boat and join him in fishing. ");
         printf("He's really a sweet guy and not at all like you expected him to be. ");
         printf("The whole experience was really quite enjoyable, and he even gives you a gift. ");
         printf("It's a secret code that he says will help you get into the Evil Memelord's capital building. ");
         printf("You ask him how he got this, and he simply replies that he knows people. ");
         printf("He wishes you luck on your journey and takes you to the nearest shore.");
         printf("Enter 1 to continue.\n");
         scanf("%d",&num);
         code=1;
    }
    if(num==1)
    {
         printf("You fight Skrillex. Or at least, you try to. You punch him in the face and he starts crying. ");
         printf("You feel kind of bad now. You just beat up a scrawny emo kid. He didn't deserve this. ");
         printf("He was just being nice to you. You're a real monster. ");
         printf("You don't really know how to deal with this. You jump back in the water and swim to shore yourself.");
         printf("Enter 1 to continue.\n");
         scanf("%d",&num);
    }
    if(num==0)
    {
         printf("You take Skrillex's BASS and DROP IT BACK IN THE WATER. ");
         printf("He asks you why you did that. He says that it took him all day to catch that bass. ");
         printf("He calls you a real jerk, but still gives you a ride back to shore. The ride is really awkward though.\n");
         printf("Enter 1 to continue.\n");
         scanf("%d",&num);
    }
    return code;
}

void snake(int *money, int *snerson, int *fight)
{
     int num, aggressive;
     printf("You look around see a snake person off in the distance. ");
     printf("Enter 1 to ponder why there is a snake person??? Enter 0 to FIGHT THE SNAKE.\n");
     scanf("%d",&num);
     if(num!=1&num!=0)
          num=disobedience();
     if(num==1)
     {
          printf("In the future, snake people (or Sneople) are very common in the north. Not to be confused with furries, ");
          printf("Sneople are really no different from any of us. ");
          printf("Snake-Americans have full rights, and live peacefully amongst humans in the north. ");
          printf("However, not everyone likes the peaceful Sneople. ");
          printf("Years of predjudices have caused the Sneople to grow a bit defensive towards humans.\n");
          printf("Enter 2 to stay away from the possibly aggressive snake person, (or snerson), ");
          printf("enter 1 to risk approaching and ask for advice, and enter 0 to FIGHT THE SNAKE.\n");
          scanf("%d",&num);
          if(num!=2&num!=1&num!=0)
               num=disobedience();
          if(num==2)
          {
               printf("It's probably too dangerous to go near the snerson. ");
               printf("You don't really want to fight a giant snake, and the snerson was just minding their own business anyway.\n");
               printf("Time to continue on your quest.\n");
               printf("\n");
          }
          if(num==1)
          {
               printf("You approach the snerson, asking for advice on your quest.\n");
               printf("\n");
               srand(time(0));
               aggressive=rand() % 2 + 1;
               if(aggressive==2)
               {
                    printf("Fortunately, this snerson is friendly. ");
                    printf("You ask the snerson about the location of the capital building. ");
                    printf("The snerson replies that the Sneople control the government on the highest level, ");
                    printf("so of course he knows the exact location.\n");
                    printf("He directs you to the capital building, and wishes you luck on your quest.\n");
                    printf("Enter 1 to continue.\n");
                    scanf("%d",&num);
               }
               if(aggressive==1)
               {
                    printf("Unfortunately, the snerson happens to not like humans very much, and actually sort of likes the Evil Memelord. ");
                    printf("He says that if you answer a riddle correctly, then he won't beat you up and steal all your money. ");
                    printf("You kind of think riddles are stupid, but you also don't really want to fight a giant anthopomorphic snake.\n");
                    printf("The snerson's riddle is this:\n");
                    printf("\n");
                    printf("What is the first Pokemon?\n");
                    printf("\n");
                    printf("1) Bulbbasaur\n");
                    printf("2) Arceus\n");
                    printf("3) Mew\n");
                    printf("4) Ekans\n");
                    scanf("%d",&num);
                    if(num!=1&num!=2&num!=3&num!=4)
                         num=disobedience();
                    if(num<4)
                    {
                         printf("Wrong! The snerson scolds you for being dumb and not getting such an easy riddle. ");
                         printf("He then beats you up and takes all your money. ");
                         printf("(You actually got the riddle right, but what did you expect? ");
                         printf("You're dealing with a snerson that you already know doesn't like humans. ");
                         printf("Of COURSE he wouldn't actually let you win.)\n");
                         printf("Enter 1 to continue.\n");
                         scanf("%d",&num);
                         }
                    }
                    if(num==4)
                    {
                         printf("Correct! Of course Ekans was the first Pokemon. It's literally snake spelled backwards, ");
                         printf("and snakes came before ALL. ");
                         printf("The snerson tells you the location of the capital building, ");
                         printf("and wishes you luck on your noble quest for snake kind (or snind). ");
                         printf("He also teaches you a snake call, and tells you that if you ever need help from the Sneople to use it.\n");
                         printf("Enter 1 to continue.\n");
                         scanf("%d",&num);
                         *snerson=1;
                    }
               }
          }

     if(num==0)
     {
          *fight=*fight+1;
          printf("You FIGHT the snake person. And wow, that was a big mistake. ");
          printf("You don't fight giant anthopomorphic snake, are you crazy? ");
          printf("He beats you up, and takes all your money. Nice going.\n");
          scanf("%d",&num);
          *money=1;
     }
}

void cat(int *money, int *lolcat, int *fight)
{
     int num, darkness;
     printf("You look around in the forest when suddenly, the ground starts to shake. ");
     printf("A hole in the ground opens up before you. You look down it. You cannot see the bottom.");
     printf("You notice the hole is oddly person shaped, and draws you toward it.\n");
     printf("This is your hole. ");
     printf("This hole was made for you. ");
     printf("Enter 1 to jump down the hole, and enter 0 to not do that.\n");
     scanf("%d",&num);
     if(num!=1&num!=0)
          num=disobedience();
     if(num==1)
     {
          printf("You jump down the hole.\n");
          printf("...\n");
          printf("Enter 1 to continue.\n");
          scanf("%d",&num);
     }
     if(num==0)
     {
          printf("Why would you jump down the hole? Seems dangerous to you, and besides, you have a quest to get back to. ");
          printf("Unfortunately, an aftershock of the earthquake just so happens to throw you into the hole anyway.\n");
          printf("Enter 1 to continue.\n");
          scanf("%d",&num);
     }
     printf("Well, that was stupid. You're just in a hole now. ");
     printf("You try to jump out, but it's too late. You're stuck. Looks like this is your home now, and you're Homestu--\n");
     printf("No, we're not going there. Never again. Shut up.\n");
     printf("You look around. This hole was a lot bigger than you thought it was. ");
     printf("Looks to you like it's actually some kind of underground catacomb system. ");
     printf("You found a way in, so there must be a way out, right?\n");
     printf("Enter 1 to call for help, enter 0 to look for another way out.\n");
     scanf("%d",&num);
     if(num!=1&num!=0)
          num=disobedience();
     if(num==1)
     {
          printf("You call for help, but it doesn't do much. ");
          printf("No one can hear you down here. Or, so you thought.\n");
          printf("Suddenly, you hear a loud noise coming from all around you. ");
          printf("It sounds like...hundreds, no, thousands, of cats. ");
     }
     if(num==0)
     {
          printf("You look around for another way out. You think you see a light in the distance, so you head towards it." );
          printf("Something soft brushes up against your leg. When you go to touch it, you hear the subtle noise of...purring?\n");
     }
     printf("My god, it's worse than you thought. You're not in any normal catacombs, but the CATacombs. ");
     printf("This is where all cat memes go once they stop being popular. They live hear, in harmony, with other old cat memes. ");
     printf("The small felines have you surrounded. ");
     printf("This is terrible. You have to get out of here.\n");
     printf("Ceiling cat pokes it's head out of the ceiling and meows at you.\n");
     printf("\n");
     printf("On second thought, this is adorable, and the exact opposite of a problem.\n");
     printf("Enter 1 to look for the eternal lolcat sages, enter 0 to FIGHT A CAT.\n");
     scanf("%d",&num);
     if(num!=1&num!=0)
         num=disobedience();
     if(num==0)
     {
          *fight=*fight+1;
          printf("Are you crazy? Why on Earth would you want to fight a cat? They're so soft and cute, and they aren't bothering anybody. ");
          printf("Besides, you would probably lose anyway. There's like 5000 of them and they're all kinda dangerous when provoked.\n");
          printf("\n");
     }
     printf("You ask the cats if their leaders, the eternal lolcat sages, are here.");
     printf("Most of them don't really speak English though. And the ones that do mostly speak really broken English, ");
     printf("such as 'has cheezberger' and such. It's kind of hard to understand them, but man are they adorable.\n");
     printf("Enter 1 to continue.\n");
     scanf("%d",&num);
     printf("After a few moments of asking around and deciphering broken cat-english, you find the eternal lolcat sages.\n");
     printf("\n");
     printf("You approach them cautiously, asking for advice on your quest. Unsure of whether or not they will help you on your quest.");
     printf("They are memes, so does that mean that they would like the memelord? ");
     printf("But, they're harmless, and have been around since long before the memelord took control of the world.\n");
     printf("Enter 1 to continue.\n");
     scanf("%d",&num);
     srand(time(0));
     darkness=rand() % 2 + 1;
     if(darkness==1)
     {
          printf("Luckily, the lolcat sages think that your quest is noble, and that the memelord has tainted the good name of memes. ");
          printf("Memes like the lolcats wish to live in peace, on 40 year old suburban moms' facebook pages. ");
          printf("The lolcats want no part of the meme wars that the Evil Memelord has started.");
          printf("They lead you out of the CATacombs and wish you luck on your quest.\n");
          printf("Enter 1 to continue.\n");
          scanf("%d",&num);
     }
     if(darkness==2)
     {
          printf("Unfortunately, even though the lolcat sages dislike the Memelord, they sense darkness in your heart. ");
          printf("You assure them that you only have the world's best interests at heart. ");
          printf("However, they want to test you. To see if you really know your memes. ");
          printf("The lolcat's test is this:\n");
          printf("\n");
          printf("Who are all your base belong to?\n");
          printf("1)Us\n");
          printf("2)Them\n");
          printf("3)You\n");
          printf("4)Me\n");
          scanf("%d",&num);
          if(num!=1&num!=2&num!=3&num!=4)
               num=disobedience();
          if(num==1)
          {
               printf("Correct!\n");
               printf("The lolcats approve of your extensive knowledge of old memes. ");
               printf("The lolcats give you a sacred can of cat food. They say that whenever you open it, ");
               printf("any cats in the area will rush to your side to assist you in your quest. ");
               *lolcat=1;
               printf("You thank the sages, and they take you out of the CATacombs.\n");
               printf("\n");
          }
          if(num!=1)
          {
               printf("Incorrect!\n");
               printf("The lolcat sages refuse to help you, but will at least show you out of the CATacombs.");
               printf("\n");
          }
     }
     printf("You make it out of the CATacombs alive. You have been freed.\n");
     printf("Time to continue on your quest.\n");
     printf("Enter 1 to continue.\n");
     scanf("%d",&num);
}  

void assassin(int *money)
{
     int num;
     printf("You hear a sound behind you. You peer behind you and see rustling in the bushes. ");
     printf("It was just as you suspected. The Evil Memelord sent an assassin to off you before you could reach the capital building. ");
     printf("What a coward. But you can no doubt deal with whatever terrible meme that has been sent your way.\n");
     printf("Enter 1 to continue.\n");
     scanf("%d",&num);
     num=rand() % 4;
     switch(num)
     {
               case 0:
               printf("Rick Astley jumps out of the bushes.\n");
               printf("You hide quickly. You're not an idiot. Just being in his presence is enough to Rickroll you. ");
               printf("But Rick assures you that no matter where you run, or where you hide, ");
               printf("he's never going to give you up, never going to let you down, never going to run around, and desert you. ");
               printf("But he is going to make you cry, tell a lie, and hurt you. Now say goodbye.\n");
               printf("Enter 1 to fight Rick Astley, and enter 0 to sing a duet with him in a dramatic rock opera.\n");
               scanf("%d",&num);
               if(num!=1&num!=0)
                    num=disobedience();
               if(num==1)
               {
                    printf("You FIGHT Rick Astley and WIN. He was weak and no match for you. His funky moves cannot save him now.\n");
                    printf("Enter 1 to continue.\n");
                    scanf("%d",&num);
               }
               if(num==0)
               {
                    printf("You sing a duet with Rick Astley. He is truly touched by your singing voice. ");
                    printf("He forgets his mission and gives you all the money the Evil Memelord paid him to come after you. ");
                    printf("What a swell guy.\n");
                    printf("Enter 1 to continue.\n");
                    scanf("%d",&num);
                    *money=10;
               }
               break;
          case 1:
               printf("Mitt Romney, or RMONEY as he is now referred to in the future, jumps out of the bushes. ");
               printf("He continues to school you about his disinterest in the middle class and ignorance of the average american's lifestyle.\n");
               printf("Enter 1 to bring up his loss of the 2012 election, and enter 0 to FIGHT RMONEY.\n");
               scanf("%d",&num);
               if(num!=1&num!=0)
                    num=disobedience();
               if(num==1)
               {
                    printf("You mention RMONEY's loss of the 2012 election, and he stops rapping. A single tear falls from his eye as he ");
                    printf("as he whispers the words 'Thank Obama...' before running away to go see the newest Twilight movie.\n");
                    printf("Wow, that was weird, but it's time to continue your quest.\n");
                    printf("Enter 1 to continue.\n");
                    scanf("%d",&num);
               }
               if(num==0)
               {
                    printf("You FIGHT RMONEY. This is the greatest idea you've ever had. RMONEY fights by throwing money at you.");
                    printf("You pretend to die as RMONEY throws money at your corpse and leaves.\n");
                    printf("Enter 1 to continue.\n");
                    scanf("%d",&num);
                    *money=10;
               }
               break;
          case 2:
               printf("Every single Pokemon ever collectively jumps out of the bushes. ");
               printf("You briefly ponder how hundreds of them could all stay so well hidden. ");
               printf("You also wonder if they even count as a meme. ");
               printf("Like, some of them were, like you think Mudkip was like a thing, ");
               printf("But really? The Memelord sent ALL of them after you? ");
               printf("How did the Evil Memelord even GET every single Pokemon ever? ");
               printf("Do you know how hard some of those legendaries are to catch? ");
               printf("Either way, you're totally not afraid to punch a Beedril. Four foot tall bee? Bring it on.\n");
               printf("Enter 1 to try and catch em' all, and enter 0 to FIGHT EVERY SINGLE POKEMON AT ONCE.\n");
               scanf("%d",&num);
               if(num!=1&num!=0)
                    num=disobedience();
               if(num==1)
               {
                    printf("You try to catch em' all, like you've always dreampt of. ");
                    printf("However, as many before you have already proven, you simple cannot catch em' all. It's just impossible. ");
                    printf("I mean, there are like, what, 700 of those things? Not to mention that some of them are basically deities. ");
                    printf("You needlessly watse a lot of money on countless pokeballs, just to be disappointed in the end.\n");
                    printf("Enter 1 to continue.\n");
                    scanf("%d",&num);
                    *money=0;
               }
               if(num==0)
               {
                     printf("Well, okay, that was a bad idea .");
                     printf("I mean, there are like, what, 700 of these things? Not mention that some of them are like deities. ");
                     printf("You guess this is the end for you. But wait, what's this? ");
                     printf("It seems like a rogue Snorlax is helping you escape. ");
                     printf("That's awfully nice of it. Looks like this Snorlax is on your side. ");
                     printf("You high five the Snorlax, and promise to come back and save it from the Evil Memelord's tyranny.\n");
                     printf("Enter 1 to continue.\n");
                     scanf("%d",&num);  
               }
               break;
          case 3:
               
               printf("Waluigi jumps out of the bushes. ");
               printf("You should have guessed. You've dealt with Waluigi before, it would only makes sense for the Memelord to send him after you.\n");
               printf("Enter 1 to SCREAM at Waluigi, and enter 0 to FIGHT Waluigi.\n");
               scanf("%d",&num);
               if(num!=1&num!=0)
                    num=disobedience();
               if(num==1)
               {
                    printf("You SCREAM at Waluigi. ");
                    printf("He admires your screaming, and screams back at you. ");
                    printf("You just sort of scream at each other for a while. ");
                    printf("Eventually Waluigi backs down, and says that you are a worthy advarsary, and that he cannot kill you ");
                    printf("like the Memelord hired him to. He leaves.\n");
                    printf("Enter 1 to continue.\n");
                    scanf("%d",&num);
               }
               if(num==0)
               {
                    printf("You FIGHT Waluigi. ");
                    printf("But Waluigi doesn't want to fight you. He's not the fighting type. He preferrs sports, and he's more of a schemer. ");
                    printf("So of course, he schemes to steal your money, so he does.\n");
                    printf("Drat.\n");
                    printf("Enter 1 to continue.\n");
                    scanf("%d",&num);
                    *money=0;
               }
               break;
          
          case 4:
               printf("An entire swARM OF BEES JUMPS OUT AT YOU. ");
               printf("THEY AREN'T A MEME BUT WHO CARES IT'S LITERALLY A SWARM A BEES. ");
               printf("Enter 1 to RUN enter 0 to PUNCH A BEE.\n");
               scanf("%d",&num);
               if(num!=1&num!=0)
                    num=disobedience();
               if(num==1)
               {
                    printf("You run away from the bees, like anyone with any common sense would. That was a close one.\n");
                    printf("Enter 1 to continue.\n");
                    scanf("%d",&num);
               }
               if(num==0)
               {
                    printf("Are you crazy? Why would. Why would you do that? Do you have any common sense at all? ");
                    printf("Why would you want to punch a bee? Why would you possibly think that that was a good idea? ");
                    printf("You get attacked by the swarm of bees. However, you narrowly avoid death by throwing your money at the bees. ");
                    printf("Everone knows that bees in the future love money. Every since the honey business went dry, ");
                    printf("bees have to survive by playing the stock market. They take your bribe and leave you be, ");
                    printf("but warn you not to cross them again.\n");
                    printf("Enter 1 to continue.\n");
                    scanf("%d",&num);
                    *money=0;
               }
               break;
          }
}

void shop(int *money, int *sword, int *shield, int *code)
{
     int num;
     printf("You decide to visit a shop before entering the capital.\n");
     printf("You go over to the nearest shop and go inside. ");
     printf("It's full of many items, most of them useless to you. ");
     printf("You ask the merchant for something that would help you on your quest. ");
     printf("The merchant says that perhaps you could use a sword. You need a means of attack, after all. ");
     printf("Or, maybe a shield? You could never have too much defense. "); 
     printf("Or perhaps, a secret code? You never know when something like that could come in handy.\n");
     printf("\n");
     if(*money<3)
     {
          printf("Since you lost some of your money, you only have enough money for one thing, so you have to choose wisely. ");
          printf("And don't buy anything you already have.\n");
          printf("Enter 2 to get the sword, enter 1 to get the shield, and enter 0 to get the code.\n");
          scanf("%d",&num);
          if(num!=1&num!=0)
                    num=disobedience();
          switch(num)
          {
               case 0:
                    printf("You get the code. You hope you made the right choice.\n");
                    printf("\n");
                    *code=1;
                    break;
               case 1:
                    printf("You get the shield. You hope you made the right choice.\n");
                    printf("\n");
                    *shield=1;
                    break;
               case 2:
                    printf("You get the sword. You hope you made the right choice.\n");
                    printf("\n");
                    *sword=1;
                    break;
          }
               
          
     }
     else
     {
          printf("You only have enough money for two things, so you have to choose wisely. ");
          printf("And don't buy anything you already have.\n");
          printf("Enter 2 to get the sword and shield, enter 1 to get the sword and code, and enter 0 to get the shield and code.\n");
          scanf("%d",&num);
          switch(num)
          {
               case 0:
                    printf("You get the shield and the code. You hope you made the right choice.\n");
                    printf("\n");
                    *shield=1;
                    *code=1;
                    break;
               case 1:
                    printf("You get the sword and the code. You hope you made the right choice.\n");
                    printf("\n");
                    *sword=1;
                    *code=1;
                    break;
               case 2:
                    printf("You get the sword and the shield. You hope you made the right choice.\n");
                    printf("\n");
                    *sword=1;
                    *shield=1;
                    break;
          }
     }
}

int beatles(void)
{
     int num;
     printf("Oh wow, those ARE The Beatles! They're just standing behind the front gate. Waiting for people to enter. ");
     printf("That's kinda weird, you guess. But hey, it's such an honor to meet The Beatles! They're practically your HEROS and--\n");
     printf("Ringo Starr just punched you in the face.\n");
     printf("You have a tough decision ahead of you. Enter 1 to accept defeat at the hands of Ringo Starr and The Beatles, ");
     printf("and enter 0 to FIGHT THE BEATLES.\n");
     scanf("%d",&num);
     if(num!=1&num!=0)
              num=disobedience();
     if(num==0)
     {
          printf("Wow, okay, you just beat up The Beatles, you monster. ");
          printf("You think that fighting everyone gets you a prize? Well too bad, it doesn't. ");
          printf("It just gets you the guilt of having beat up music icons. ");
          printf("Whatever though, being realistic here, those probably weren't the real Beatles. I mean, probably anyway. ");
          printf("You can tell yourself that. Whatever helps you sleep at night.\n");
          printf("Time to continue on your quest.\n");
          printf("Enter 1 to continue.\n");
          scanf("%d",&num);
          num=0;
     }
     if(num==1)
     {
          printf("Wow, okay, you admit defeat, huh? ");
          printf("After all this, you just can't bear the thought of hurting the great and mighty 'Beatles'");
          printf("I bet you think you're about to win some prize for being so 'peaceful' and 'noble' for not fighting music legends.");
          printf("Well too bad, you don't. You could've taken them easy. I bet Paul McCartney can't even take a punch.\n");
          printf("George Harrison handcuffs you and leads you to gay baby jail, the dungeon.\n");
          printf("Enter 1 to continue.\n");
          scanf("%d",&num);
          num=1;
     }
     return num;
}

int disobedience(void)
{
    int num;
    printf("Oh ho ho! Looks like we got a speacial snowflake type here. Let me guess, you don't like to play by the rules, do you? ");
    printf("You didn't like any of the options, did you? ");
    printf("I bet you think your really clever, trying to fool a computer program. ");
    printf("Well I have news for you, buddy, people like you are just jerks, okay? ");
    printf("Would it kill you to just play along and enter one of the numbers your suppose to? Jeez. ");
    printf("Now let's try this again. Enter one of the numbers you were SUPPOSE to enter.\n");
    scanf("%d",&num);
    return num;
}
