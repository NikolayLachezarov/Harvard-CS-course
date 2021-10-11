#include <stdio.h>

int main()
{
    int score1 = 73;
    int score2 = 64;
    int score3 = 31;

    // if you dont add the .0 to the 3, youd need to print a double or esle an error would occur.
    printf("Your average score is: %f\n", (score1 + score2 + score3) / 3.0);

    // we can use an array to make the data storage more efficient / cleaner
    // swaure brackets tells C that this variable is an array and the num inside tells the # of elements
    int score[3] = {73, 64, 31};
    printf("Your average score is: %f\n", (score[0] + score[1] + score[2]) / 3.0);

    // we can make it even better

    int scores[3];
    int num;
    for (int i = 0; i < 3; i++)
    {
        printf("What is your, %i, score: ", i);
        scanf("%d", &scores[i]);
        num = num + scores[i];
    }

    printf("avergae is: %f", num / 3.0);
    return 0;
}