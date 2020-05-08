#include<stdio.h>
#include<stdlib.h>
void start(int choice);
void  aptitude(int option);
void reasoning(int option);
void general(int option);
void score(int count);
void help();
int option,count=0,choice;
char name[100];
long long int number;
int main()
{
	FILE *fp;
	fp=fopen("quiz2.t","a+");
	if(fp==NULL)
	{
		printf("file not found\n");
		return;
	}

	int f=1,c;
	printf("\n*********************WELCOME TO QUIZ GAME*****************************\n");
	printf("ENTER THE NAME OF PARTICIPANT\n");
	scanf("%s",name);
	printf("ENTER YOUR MOBILE NUMBER\n");
	scanf("%lld",&number);
	while(f)
	{	
		printf("\nchoose an option\n");
		printf("1.START THE GAME  2.SCORE 3.HELP 4.EXIT\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:start(choice);
			       break;
			case 2:score(count);
			       break;
			case 3:help();
			       break;
			case 4:f=0;
			       printf("\n*****************THE END*****************************\n");
		}
	}
	fprintf(fp," %s\t",name);
	fprintf(fp,"%lld\t",number);
	fprintf(fp,"score is %d\n",count);
	fclose(fp);
}
void start(int choice)
{
	int k=1;
	while(k)
	{
		printf("choose an option\n 1.APTITUDE 2.REASONING 3.GENERAL KNOWLEDGE 4.RETUN TO MENU\n");
		scanf("%d",&choice);
		switch(choice)
		{                       case 1:aptitude(option);
			break;
			case 2:reasoning(option);
			       break;
			case 3:general(option);
			       break;
			case 4:k=0;

		}
	}
}
void  aptitude(int option)
{       
	int a=1;
question:
	{	   
		printf("1.A boat travelling alomg stream covers 16 KM IN 2 hours.It covers the same distance against the stream in 4 hours .Find the speed of the boat in still water?\n");
		printf("choose an option\n 1.6KM/HR 2.4 KM/HR 3.8KM/HR 4.10KM/HR\n");
		scanf("%d",&option);
		if(option>0&&option<=4)
		{
			if(option==1)
			{
				printf("your answer is correct\n");
				count++;
			}
			else
			{
				printf("wrong answer\n");
				count--;
			}
		}
		else
		{
			printf("Enter valid option\n");
			goto 
				question;        
		}
	}
a:
	{
		printf("\n2.the profit earneed by selling a 18 bicycles for Rs.16,800 is equal to the cost price of 3 bicycles.What is the cost price of a bicycle\n");
		printf("choose an option\n 1.100 2.40 3.720 4.800\n");
		scanf("%d",&option);
		if(option>0&&option<=4)
		{	
			if(option==4)
			{   
				printf("your answer is correct\n");
				count++;
			}
			else
			{
				printf("wrong answer\n");
				count--;
			}
		}
		else
		{
			printf("enter valid option\n");
			goto a;
		}
	}
b:
	{
		printf("\n3.What is the reflex angle between minute hand and hour hand at 8:45?\n");
		printf("choose an option\n 1.356 2.354.5 352.5 4.350\n");
		scanf("%d",&option);
		if(option>0&&option<=4)
		{if(option==3)
			{
				printf("your answer is correct\n");
				count++;
			}
			else
			{
				printf("wrong answer\n");
				count--;
			}
		}
		else
		{printf("enter valid option \n");
			goto b;
		}
	}
c:{	printf("\n4.The difference between the ages of two friends is 16 years .If 6 years ago,the elder5 one was 3 times as old as ,the younger one,find their present age?\n");
	  printf("choose an option\n 1.10 years and 35 years  2.12 and 40 years 3.15 and 45 years 4.14 and 30 years\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option ==4)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  } 
	  }
	  else {printf("enter valid option \n");
		  goto c;}}
d:{	printf("\n5.The product of the ages of piyush and bhavana is 240.On multiplying Bhavana's age by two exceeds Piyush's age by 4 years,then what is bhavanas age?\n");
	  printf("choose an option\n 1.12 2.20 3.5 4.15\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option==1)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }
	  }else{printf("enter valid option  \n");
		  goto d;}}
e:{
	  printf("\n6.How many words can be formed with the letters of the word MUKESH such that every word begins with a vowel and ends with a vowel\n");
	  printf("choose an option\n 1.50 2.48 3.52 4.65\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option==2)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}
	  else
	  {
		  printf("enter valid option \n");
		  goto e;}}
f:	{printf("\n7.In how many ways a cricket eleven may be selected out of 15 players ,if(i)one specifc player is to be selected in the team\n");
		printf("choose an option\n 1.1000 2.1002 3.1003 4.1001\n");
		scanf("%d",&option);
		if(option>0&&option<=4)
		{if(option==4)
			{
				printf("your answer is correct\n");
				count++;
			}
			else
			{
				printf("wrong answer\n");
				count--;
			}}
		else { printf("enter valid option \n");
			goto f;}}
g:{	printf("\n8.One card is drawn at random from a pack of 52 cards.What is the probability that the card drawn is a face card?\n");
	  printf("choose an option\n 1.1/4 2.1/13 3.9/52 4.4/13\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option ==4)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}
	  else{printf("enter valid option \n");
		  goto g;}}
h:{	printf("\n9.One ticket is drawn at random from a bag containing 20 tickets numbered 1 to 20.What is the probability that the ticket was drawmn having a number multiple of 3?\n");
	  printf("choose an option\n 1.3/10 2.1/13 3.1/2 4.2/5\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option==1)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}
	  else{printf("enter valid option \n");
		  goto h;
	  }}
i:{	printf("\n10.If the price of an apple was decreased by 10%,then the number of apples sold increased by 30%.Find the effect on the total revenue?\n");
	  printf("choose an option\n 1.17% 2.16% 3.17.50% 4.18%\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option==1)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }
	  }else{
		  printf("enter valid option \n");
		  goto i;}}


}

void reasoning(int option)
{
j:{	printf("\n1.24 / of 210+88 /  of 370-?=11\n");
	  printf("choose an option\n 1.358 2.258 3.278 4.246\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option==2)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}else{ printf("enter valid option");
			  goto j;}}
k:{	printf("\n2.Look at this series :2,1,(1/2),(1/4).....what number should come next?\n");
	  printf("choose an option\n 1.1/3 2.1/8 3.2/8 4.1/16\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option==2)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}else{printf ("enter valid option \n");
			  goto k;}}
l:{	printf("\n3.Look at the series :21,9,21,11,21,13,21,.....what number should come next?\n");
	  printf("choose an option\n 1.14 2.15 3.21 4.23\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option==2)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}else{ printf("enter valid option \n");
		  }}
m:{	printf("\n4.Which word does NOT belong  with the others?\n");
	  printf("choose an option\n 1.PARSLEY 2.BASIL 3.DILL 4.MAYONNAISE\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {
		  if(option==4)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}else{printf("enter valid option \n");
			  goto m;}}
n:{	printf("\n5.SCD,TEF,UGH,_____,WKL\n");
	  printf("choose an option\n 1.CMN 2.UJI 3.VIJ 4.IJT\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4) 
	  {if(option==3)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}else{printf("enter valid option \n");
			  goto n;
		  }}
mm:{	printf("\n6.B2CD, _____, BCD4, B5CD, BC6D\n");
	   printf("choose an option\n 1.	B2C2D 2.BC3D.3.	B2C3D 4.BCD7\n");
	   scanf("%d",&option);
	   if(option>0&&option<=4)
	   {if(option==2)
		   {
			   printf("your answer is correct\n");
			   count++;
		   }
		   else
		   {
			   printf("wrong answer\n");
			   count--;
		   }}else {printf("enter valid option \n");
			   goto mm;}}
nn:{	printf("\n7.The prices of petrol and diesel in the domestic market have remained unchanged for the past few months\nThe crude oil prices in the international market have gone up substantially in the last few months.\n");
	   printf("choose an option\n 5.Statement I is the cause and statement II is its effect\n1.Statement II is the cause and statement I is its effect\n2.Both the statements I and II are independent causes\n3.Both the statements I and II are effects of independent causes\n4.Both the statements I and II are effects of some common cause\n");
	   scanf("%d",&option);
	   if(option>0&&option<=4)
	   {if(option==4)
		   {
			   printf("your answer is correct\n");
			   count++;
		   }
		   else
		   {
			   printf("wrong answer\n");
			   count--;
		   }}else{printf("enter valid option \n");
			   goto nn;}}
o:{	printf("\n8.Statements: In a one day cricket match, the total runs made by a team were 200. Out of these 160 runs were made by spinners.\nConclusions:\n1.80% of the team consists of spinners.\n2.The opening batsmen were spinners.\n");
	  printf("choose an option\n 1.Only conclusion I follows\n2.Only conclusion II follows\n3.Either I or II follows\n4.Neither I nor II follows\n5.Both I and II follow\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option==4)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}
	  else {printf("enter valid option \n");
		  goto o;}}
p:{	printf("\n9.Grand Central Terminal, Park Avenue, New York is the world's\n");
	  printf("choose an option\n 1.largest railway station\n2.highest railway station\n3.longest railway station\n4.None of the abov\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {	if(option==1)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}else{printf("enter valid option \n");
			  goto p;}}
q:{	
	  printf("\n10.For which of the following disciplines is Nobel Prize awarded?\n");
	  printf("choose an option\n 1.Physics and Chemistry\n2.Physiology or Medicine\n3.Literature, Peace and Economics\n4.All of the above\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option ==4)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}else{printf("enter  va;id option \n");
			  goto q;}}
}
void general(int option)
{
s:{	printf("\n1.Exposure to sunlight helps a person improve his health because\n");
	  printf("choose an option\n1.the infrared light kills bacteria in the body\n2.resistance power increases\n3.the pigment cells in the skin get stimulated and produce a healthy tan\n4.the ultraviolet rays convert skin oil into Vitamin D\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {
		  if(option==4)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}else{printf("enter valid option \n");
			  goto s;}}
t:{	printf("\n2.During World War II, when did Germany attack France?\n");
	  printf("choose an option\n 1. 1940 2.1941 3.1942 4.1943\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option==1)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}else{printf("enter valid option");goto t;}}
u:{	printf("\n3.The Parliament of India cannot be regarded as a sovereign body because\n");
	  printf("choose an option\n1.it can legislate only on subjects entrusted to the Centre by the Constitution\n2.it has to operate within the limits prescribed by the Constitution\n3.the Supreme Court can declare laws passed by parliament as unconstitutional if they contravene the provisions of the Constitution\n4.All of the above\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option==4)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}else{printf("enter valid optio \n");
			  goto u;}}
v:{	printf("\n4.The members of the Rajya Sabha are elected by\n");
	  printf("choose an option\n1.the people\n2.Lok Sabha\n3.elected members of the legislative assembly\n4.elected members of the legislative council");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option==3)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;

		  }}else{printf("enter vaid option \n");
			  goto v;}}

w:{	printf("\n5.The power to decide an election petition is vested in the\n");
	  printf("choose an option\n1.Parliament\n2.Supreme Court\n3.High courts\n4.Election Commission\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option==3)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}else{printf("enter valid option \n");
			  goto w;}}
x:{	printf("\n6.The present Lok Sabha is the\n");
	  printf("choose an option\n1.13th Lok Sabha\n2.14th Lok Sabha\n3.15th Lok Sabha\n4.16th Lok Sabha\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option==4)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}else{printf("enter valid option \n");
			  goto x;}}	
y:{	printf("\n7.The number of writs that can be prayed for and issued by the Supreme Court and/or a High Court is\n");
	  printf("choose an option\n1.3 2.4 3.5 4.6\n");
	  if(option>0&&option<=4)
	  {scanf("%d",&option);
		  if(option==3)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}else{printf("enter valid option \n");}}
z:{	printf("\n8.Tripitakas are sacred books of\n");
	  printf("choose an option\n1.Buddhists\n2.Hindus\n3.Jains\n4.None of the above\n");
	  scanf("%d",&option);
	  if(option>0&&option<=4)
	  {if(option==1)
		  {
			  printf("your answer is correct\n");
			  count++;
		  }
		  else
		  {
			  printf("wrong answer\n");
			  count--;
		  }}
	  else{printf("enter valid option \n");
		  goto z;}}
aa:{	printf("\n9.Socrates was a ?\n");
	   printf("choose an option\n1. Essayist 2. Novelist 3. Dramatist 4. Philosopher\n");
	   scanf("%d",&option);
	   if(option>0&&option<=4)
	   {if(option==4)
		   {
			   printf("your answer is correct\n");
			   count++;
		   }
		   else
		   {
			   printf("wrong answer\n");
			   count--;
		   }}else{printf("enter valid option \n");
			   goto aa;}}
ab:{	printf("\n10.2010 Commonwealth Games held in ?\n");
 	   printf("choose an option\n1.Canada 2. India 3. Britian 4. Malaysia\n");
	   scanf("%d",&option);
	   if(option>0&&option<=4)
	   {if(option==2)
		   {
			   printf("your answer is correct\n");
			   count++;
		   }
		   else
		   {
			   printf("wrong answer\n");
			   count--;
		   }}else{printf("enter valid option\n");
			   goto ab;}}

}
void score(int count)
{
	printf("\nthe total score is %d\n",count);
	if(count>=25)
	{
		printf("You got Distinction\n");
	}
	else if((count<25)&&(count>=20))
	{

		printf("You are Excellent\n");
	}
	else if((count<20)&&(count>=10))
	{
		printf("You are Good\n");
	}
	else
	{
		printf("Better luck next time\n");

	}

}
void help()
{
	printf("In this questions will be asked in 3 stages 1. APTITUDE 2. REASONING 3. GENERAL KNOWLEDGE\n");
	printf("For every question answered correctly you will get 1 point and for every wrong answer you will get -1\n");
	printf("At the end your score will be displayed\n");
	printf("\n************************************ALL THE BEST********************************************\n");
}


