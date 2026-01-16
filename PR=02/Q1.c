#include<stdio.h>

int main()
{
	int score;
	char grade;
	printf("Enter the score = ");
	scanf("%d",&score);
	(score<=100 && score>90)?grade='A':
		(score<=90 && score>80)?grade='B':
			(score<=80 && score>60)?grade='C':
				(score<=60 && score>35)?grade='D':
					(score<=35)?grade:'F';
					
	switch(grade)
	{
	    case 'A':printf("Your grade is A . Excellent work!");
		break;
		case 'B':printf("Your grade is B . Well done");
		break;	
		case 'C':printf("Your grade is C . Good job");
		break;
		case 'D':printf("Your grade is D . You passed, but you could do better");
		break;
		case 'F':printf("Your grade is F . Sorry, you failed");
		break;
    }			
    
    if(grade>='A' && grade<='D')
    {
    	printf("Congratulations! You are eligible for the next level");
	}
	else
	{
		printf("Please try again next time");
	}
}
