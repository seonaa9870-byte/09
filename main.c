#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int main(void)
{
    int i;
    int sum = 0;
    int score[SIZE];

   printf("enter the score of 5 student.\n");
    

    for (i=0;i<SIZE;i++){
        scanf("%d", &score[i]);
        sum += score[i];
    }
    

    printf("average is %d\n", sum/SIZE);


    return 0;

}