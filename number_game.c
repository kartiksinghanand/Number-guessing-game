#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number,guess,attempts=1;
    srand(time(0));
    number=rand()%100+1;  //generates random number between 1 to 100
    //printf("The random number is %d\n",number);
    do
    {
        printf("Guess the number: ");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("Lower number please\n");
        }
        else if (guess<number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You guessed it in %d attempts",attempts);
        }
        attempts++;
        
    } while (guess!=number);
    getch();
    return 0;
}
