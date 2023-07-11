#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 3

typedef enum
{
    A,
    B,
    C,
    D,
    F
} Score;

typedef struct
{
    char name[50];
    int age;
    Score score;
} Student;

void addStudent(Student *students, int *count)
{
    if (*count >= MAX_STUDENTS)
    {
        printf("Error: Maximum number of students reached.\n");
        return;
    }

    Student newStudent;

    scanf("%s", newStudent.name);

    scanf("%d", &newStudent.age);

    char score;
    scanf(" %c", &score);

    switch (score)
    {
    case 'A':
        newStudent.score = A;
        break;
    case 'B':
        newStudent.score = B;
        break;
    case 'C':
        newStudent.score = C;
        break;
    case 'D':
        newStudent.score = D;
        break;
    case 'F':
        newStudent.score = F;
        break;
    default:
        printf("Invalid score entered.\n");
        return;
    }

    students[*count] = newStudent;
    (*count)++;

    printf("Student added successfully.\n");
}

void displayStudents(Student *students, int count)
{
    if (count == 0)
    {
        printf("No students to display.\n");
        return;
    }

    printf("List of students:\n");
    for (int i = 0; i < count; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Score: ");
        switch (students[i].score)
        {
        case A:
            printf("A\n");
            break;
        case B:
            printf("B\n");
            break;
        case C:
            printf("C\n");
            break;
        case D:
            printf("D\n");
            break;
        case F:
            printf("F\n");
            break;
        default:
            printf("Invalid score\n");
        }
        printf("\n");
    }
}

int findHighestScoringStudent(Student *students, int count)
{
    if (count == 0)
    {
        printf("No students to find.\n");
        return -1;
    }

    int highestScoreIndex = 0;
    for (int i = 1; i < count; i++)
    {
        if (students[i].score > students[highestScoreIndex].score)
        {
            highestScoreIndex = i;
        }
    }

    return highestScoreIndex;
}

int main()
{
    Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do
    {

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent(students, &count);
            break;
        case 2:
            displayStudents(students, count);
            break;
        case 3:
        {
            int highestScoreIndex = findHighestScoringStudent(students, count);
            if (highestScoreIndex != -1)
            {
                printf("Highest-scoring student:\n");
                printf("Name: %s\n", students[highestScoreIndex].name);
                printf("Age: %d\n", students[highestScoreIndex].age);
                printf("Score: ");
                switch (students[highestScoreIndex].score)
                {
                case A:
                    printf("A\n");
                    break;
                case B:
                    printf("B\n");
                    break;
                case C:
                    printf("C\n");
                    break;
                case D:
                    printf("D\n");
                    break;
                case F:
                    printf("F\n");
                    break;
                default:
                    printf("Invalid score\n");
                }
                printf("\n");
            }
            break;
        }
        case 4:
            printf("Exiting the program. Thank you for using our system!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
