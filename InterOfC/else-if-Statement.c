#include <stdio.h>

int main(){
 int ExamScore;

    printf("Enter your Exam Score: \n");
    scanf("%d", &ExamScore);

    if(ExamScore <33)
    {
        printf("Fail in Exam.\n");
    }

    else if (ExamScore>=90)
    {
        printf("You got A++ in Exam.\n");
    }
    else if (ExamScore>=80)
    {
        printf("You got A+ in Exam.\n");
    }
    else if (ExamScore>=70)
    {
        printf("You got A in Exam.\n");
    }
    else if (ExamScore>=50)
    {
        printf("You got B in Exam.\n");
    }
    else if (ExamScore>=40)
    {
        printf("You got C in Exam.\n");
    }
    else if (ExamScore>=33)
    {
        printf("You got D in Exam.\n");
    }
    return 0;
}
