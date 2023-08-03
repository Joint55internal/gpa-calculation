// This program can be used to easily calculate your GPA
// 
/*========================================
 *        GPA calculation version 1.11
 *         
 *         (C) 2023 Toshiki
 *  
 *========================================
*/
#include <stdio.h>
#include <string.h>

void gpa_calc(void) {
    char studentName[100];
    int studentID;
    int totalCourses;
    int sScoreAA = 0;
    int sScoreA = 0;
    int sScoreB = 0;
    int sScoreC = 0;
    int sScoreF = 0;
    int C;
    float T;
    float T4;

    printf("Enter your name: ");
    scanf("%s", studentName);
    printf("Hello, %s\n", studentName);
    printf("Enter Student ID: ");
    scanf("%d", &studentID);
    //number of total courses that student took =
    printf("Total Number of course : ");
    scanf("%d", &totalCourses);
    //print number of grades that are require to calculate GPA
    printf("Number of A+s: ");
    scanf(" %d", &sScoreAA); 
    printf("Number of As: ");
    scanf(" %d", &sScoreA); 
    printf("Number of Bs: ");
    scanf(" %d", &sScoreB); 
    printf("Number of Cs: ");
    scanf(" %d", &sScoreC); 

    // Calculate GPA with school's rules
    float totalPoints = (sScoreAA * 5) + (sScoreA * 4) + (sScoreB * 3) + (sScoreC * 2) + (sScoreF * 0);
    int B = sScoreAA + sScoreA + sScoreB + sScoreC + sScoreF;
    T = totalPoints / totalCourses;
    C = totalCourses - B ;
    //calculate 5 sclae GPA to 4 scale GPT
    T4 = (T / 5.0) * 4.0;

    //print the result with information about the student
    if (C == 0 || C > 0) {
        printf("=========================\n");
        printf("StudentName: %s\n", studentName);
        printf("StudentID: %d\n", studentID);
        printf("Number of course: %d\n", totalCourses);
        printf("Number of course You've received Credit: %d\n", B);
        printf ("Your GPA(5): %.2f\n", T);
        printf ("Your GPA(4): %.2f\n", T4);
        printf("=========================\n");
    }
    else if (C < 0) { 
        printf("=========================\n");
        printf ("Warning!: Check it again, You probably made a mistake!\n");
        printf("StudentName: %s\n", studentName);
        printf("StudentID: %d\n", studentID);
        printf("Number of course: %d\n", totalCourses);
        printf("Number of course You've received Credit: %d\n", B);
        printf ("Your GPA(5): %.2f\n", T);
        printf ("Your GPA(4): %.2f\n", T4);
        printf("=========================\n");
    }

}

int main() {
    gpa_calc();
    return 0;
}
