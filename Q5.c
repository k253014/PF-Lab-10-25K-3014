#include <stdio.h>
#include <string.h>

void clearInputBuffer()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    clearInputBuffer();
    char names[n][50];
    int marks[n];
    float avg = 0;
    int max;

    for (int i = 0; i < n; i++)
    {
        printf("Enter student name: ");
        fgets(names[i], 50, stdin);
        names[i][strcspn(names[i], "\n")] = 0;
        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
        clearInputBuffer();
    }

    max = marks[0];
    int max_index = 0;

    printf("\nName                Marks\n");
    printf("--------------------\n");

    for (int i = 0; i < n; i++)
    {
        if (max < marks[i])
        {
            max = marks[i];
            max_index = i;
        }
        avg += marks[i];

        printf("%-20s %d\n", names[i], marks[i]);
    }

    avg /= n;
    printf("--------------------\n");
    printf("Highest Scorer: %s with %d marks\n", names[max_index], max);
    printf("Average marks: %.2f\n", avg);

    return 0;
}