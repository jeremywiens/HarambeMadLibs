/* This is a MAd lib

@authors- Bryson and Jeremy
@Producers- Swaggy Beans and Phony Hawk
Since- 2017-01-02
Version 1.1
*/

#include<stdio.h>
#include<ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define clear() printf("\033[H\033[J")

unsigned short getMenuChoice(void);
void harambeWhereIsHeNow(void);
void harambeVsDonald(void);
void grammarLesson(void);

	int main(void)
	{
	printf("PhattyWay presents... \n\n");
	unsigned short choice=getMenuChoice();


	switch(choice){
	case 1: 
		harambeWhereIsHeNow();
		break;
	
	case 2: 
		harambeVsDonald();
		break;
		
	case 3:
		grammarLesson();
		break;	
	
	case 4:
		exit(0);

		
	default:
		printf("Harambe can not be found at this moment.\n");			
	}
	getchar();
	clear();
	main();
	return 0;
	}


	unsigned short getMenuChoice(void)
	{

	unsigned short choice;
	int c;
		printf("            ================\n");
		printf("            Harambe Mad Libs\n");
		printf("            ================\n\n");
		printf("1 - Harambe: Where is he now\n");
		printf("2 - Harambe vs. Donald Trump\n");
		printf("3 - Quick Grammar Lesson\n");	
		printf("4 - Quit\n");
		printf("Choose a narrative [1-4]: ");
		
		while ( (scanf("%hu",&choice) != 1) || (choice <1) || (choice>5))
		{
			while ((c = getchar()) != '\n' && c != EOF) { }
			printf("Your input was no recoqnized, please try again: ");
		}

	
		return choice;			
	}


void harambeWhereIsHeNow(void)

{
	printf("\nIn light of the devastating events of 2016 the great Harambe \nhas settled into his afterlife. Life is different for Harambe. \nYou get the pleasure of visiting the great Ape in his supernatural \ndwelling place.\n");
	
	char *input[13];
	
	input[0] = malloc(50);
	printf("\nPlease enter the following 12 options.\n ");
	fgets(input[0], 50, stdin);
	
	input[1] = malloc(50);
	if (input[1] == NULL) {
        printf ("No memory available, exiting program..\n");
        sleep(1);
       exit(0);
    }
	printf("\nPlease enter an emotion: ");
	fgets(input[1], 50, stdin);
        	
        	
	input[2] = malloc(50);
	printf("\nPlease enter an article of clothing: ");
	fgets(input[2], 50, stdin);

	input[3] = malloc(50);
	printf("\nPlease enter an activity verb (ex. run): ");
	fgets(input[3], 50, stdin);


	input[4] = malloc(50);
	printf("\nPlease enter an adjective (ex. slimy): ");
	fgets(input[4], 50, stdin);

	input[5] = malloc(50);
	printf("\nPlease enter a body part: ");
	fgets(input[5], 50, stdin);

	input[6] = malloc(50);
	printf("\nPlease enter a noun or adjective: ");
	fgets(input[6], 50, stdin);

	input[7] = malloc(50);
	printf("\nPlease enter a celebrity's name: ");
	fgets(input[7], 50, stdin);

	input[8] = malloc(50);
	printf("\nPlease enter an object: ");
	fgets(input[8], 50, stdin);

	input[9] = malloc(50);
	printf("\nPlease enter a plural noun (ex. laptops): ");
	fgets(input[9], 50, stdin);
	
	input[10] = malloc(50);
	printf("\nPlease enter another object: ");
	fgets(input[10], 50, stdin);
	
	input[11] = malloc(50);
	printf("\nPlease enter another object: ");
	fgets(input[11], 50, stdin);
	
	
	printf("\nLast one\n"); 
	
	input[12] = malloc(50);
	printf("\nPlease enter your name: ");
	fgets(input[12], 50, stdin);
	
	int i;
	for(i=0;i<13;i++)
	{
		if ((strlen(input[i])>0) && (input[i][strlen (input[i]) - 1] == '\n'))
			input[i][strlen (input[i]) - 1] = '\0';
	}
	
	printf("All done! Processing story...\n"); 
	
	sleep(1);
	 
	printf("\n Squinting, you manage to open your eyes. \nThe bright light is all around you. \nYou feel weirdly %s, \nslowly a shape forms in the distance. \nIt is the King himself, Harambe, wearing a %s.\n\t He says to you 'Hi there, \nThis is my home now, I love to %s here.'\n\t Intrigued, you reply, 'Wow Harambe \nyou look way more %s than I remember.'\n\t 'Come stand on my %s and I'll show you\nmy supernatural abode.'\n As you ride on Harambe's %s, \nyou notice the walls are a shade of %s orange, \nand there are statues of %s holding a %s.\n In the corner of your eye you see a book\n called %s for dummies. You ask Harambe\n\t 'Why are you learning about %s?'\n Suddenly Harambe grabs a %s and \nuses it to explain %s to you. \nHarambe goes on and on about %s\n when suddenly everything goes silent\nand the only thing you can see is a %s.\n\t '%s, it's time for school!'\n It was all a dream.\n\n\nPress enter to clear screen and return to main menu", input[1], input[2], input[3], input[4], input[5], input[5], input[6], input[7], input[8], input[9], input[9], input[10], input[9], input[9], input[11], input[12]);

}

void harambeVsDonald(void)
{
	printf("    This is a tale of sincere origin. \nA legend lost to the horrors of 2016 has risen \nfrom the dead to save the White House from Donald Trump. \nYou have flown to Washington D.C. to watch the  spectacular \nbattle between Harambe and Donald, the winner of \nwhich will be inaugurated as the president of the United States. \n");

		char *input[14];
	
	input[0] = malloc(50);
	printf("\nPlease enter the following 13 options.\n ");
	fgets(input[0], 50, stdin);
	
	input[1] = malloc(50);
	if (input[1] == NULL) {
        printf ("No memory available, exiting program..\n");
        sleep(3);
       exit(0);
    }
	printf("\nPlease enter an emotion: ");
	fgets(input[1], 50, stdin);
        	
        	
	input[2] = malloc(50);
	printf("\nPlease enter an animal: ");
	fgets(input[2], 50, stdin);

	input[3] = malloc(50);
	printf("\nPlease enter an adjective: ");
	fgets(input[3], 50, stdin);


	input[4] = malloc(50);
	printf("\nPlease enter an object: ");
	fgets(input[4], 50, stdin);

	input[5] = malloc(150);
	printf("\nPlease enter a chant (ex. Lets go Seahawks!): ");
	fgets(input[5], 150, stdin);

	input[6] = malloc(150);
	printf("\nPlease enter a lame fight move (ex. pinky twist): ");
	fgets(input[6], 150, stdin);

	input[7] = malloc(50);
	printf("\nPlease enter a body part: ");
	fgets(input[7], 50, stdin);

	input[8] = malloc(50);
	printf("\nPlease enter an adjective: ");
	fgets(input[8], 50, stdin);

	input[9] = malloc(50);
	printf("\nPlease enter another body part: ");
	fgets(input[9], 50, stdin);
	
	input[10] = malloc(50);
	printf("\nPlease enter a action (ex. flip): ");
	fgets(input[10], 50, stdin);
	
	input[11] = malloc(150);
	printf("\nPlease enter an epic fight move: ");
	fgets(input[11], 150, stdin);
	
	input[12] = malloc(50);
	printf("\nPlease enter an adjective: ");
	fgets(input[12], 50, stdin);
		
	printf("\nLast one\n"); 
	
	input[13] = malloc(50);
	printf("\nPlease enter your city: ");
	fgets(input[13], 50, stdin);
	
	int i;
	for(i=0;i<13;i++)
	{
		if ((strlen(input[i])>0) && (input[i][strlen (input[i]) - 1] == '\n'))
			input[i][strlen (input[i]) - 1] = '\0';
	}
	
	printf("All done! Processing story...\n"); 
	sleep(1);
	printf("    In a caged UFC arena, Donald Trump stands \n in one corner looking horribly %s. Surprisingly he forgot \nto apply his spray tan and wearing just some short shorts, \nhe looks more like a(n) %s than human. In the other corner, \nHarambe stands looking %s and holding nothing \nbut his %s. \n\n\n        Right after they touch gloves, Harambe lets out a \nmassive 'ROAAAAAAR' which leaves the crowd chanting '%s.'\n Donald seizes this moment to attack Harambe with his infamous %s. \nHarambe is taken aback by Donald's boldness but responds \nwith a grunt and stabs his %s right into Donald's %s.\n Donald yells in pain and exclaims, 'You %s gorilla!' Donald charges \nHarambe but simply bounces back and lands on his %s. \nPushing himself up he taunts Harambe by pretending \nto pull out his rifle and taking aim. Before he can finish the\n taunt, Harambe surprises the crowd with an epic\n %s and attacks Donald with a stunning %s which \nknocks Donald Trump out stone cold. The %s Harambe is \nvictorious!!! The crowd begins to throw small children, bananas \nand %s s  over the cage to celebrate. Harambe then flashback \nto the Cincinnati zoo where he was shot down for \nsimply helping a small child stand up. Scared for his life, \nHarambe jumps over the cage to escape the arena. For many years \nHarambe had not been seen. Multiple sources reported \npossible Harambe sightings in the fields of %s but no official confirmation \nhas been released. To this day Harambe's whereabouts remains a mystery,\nmany hope to make amends with the Great Ape.\n\n\nPress enter to clear screen and return to the main menu ahdsf sdfsldfs fisdjf sdfsdfoisdjf osdfnsdnfisdjbfsdifjsdlf sdfidsflsdf sdfhsdifhsdlfj", input[1], input[2], input[3], input[4], input[5], input[6], input[4], input[7], input[8], input[9], input[10], input[11], input[12], input[4], input[13]);

}

void grammarLesson(void)
{
	unsigned short choice;
	int c;
	
	printf("\n Grammar is no fun..");
	printf("\n But Mad Libs are and you need Grammar to do them.\n\n");
	sleep(2);
	printf("\n Nouns (Person, Place, or Thing)\n");
	printf(" Verbs (action words)\n");
	printf(" Adjectives (describing word)\n");
	printf(" Adverbs (modifies a verb or adjective)\n");	
	printf(" Pronoun (takes the place of a noun)\n");		
	printf(" Preposistion (on, after, for... etc)\n");	
	printf(" Article (the or a(n) )\n");
	printf(" Press 1 to Quit\n");
	scanf("%hu",&choice);

	while ( (scanf("%hu",&choice) != 1) || (choice !=1))
	{
		while ((c = getchar()) != '\n' && c != EOF) { }
		printf("Your input was no recoqnized, please try again: ");
	}	
}
