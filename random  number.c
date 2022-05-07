//guess the random number

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num,num2,i=1;
    srand(time(0));
    num = rand()%100 + 1;
    //printf("the number is %d\n",num);

    do{
        printf("guess the number between 1 to 100 :");
        scanf("%d",&num2);

        if(num>num2)
        {
            printf("\nhigher number please!\n\n");
        }

        else if(num<num2)
        {
            printf("\nlower number please!\n\n");
        }
        else{
            printf("\nCongratulation! you've guessed in %d  attempts\n",i);
        }
        i++;
    }while(num2!=num);


    return 0;
}
