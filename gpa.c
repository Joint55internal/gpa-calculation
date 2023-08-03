// This program can be used to easily calculate your GPA
// This can also suggest by parents to what to do according to student's grade
// 
/*========================================
 *        GPA calculation version 1.0
 *         
 *         (C) 2023 Toshiki
 *  
 *========================================
*/
#include <stdio.h>
#include <string.h>

int result;
int X;
int Y;
int Z;
int A;
int B;
int C;
float T;
float T4;
void gpa_calc(void) {
    char studentName[100];
    int studentID;
    int number;
    int sScoreAA = 0;
    int sScoreA = 0;
    int sScoreB = 0;
    int sScoreC = 0;
    int sScoreF = 0;

    printf("Enter your name: ");
    scanf("%s", studentName);
    printf("Hello, %s\n", studentName);
    printf("Enter Student ID: ");
    scanf("%d", &studentID);
    //number of total courses that student took =
    printf("Total Number of course : ");
    scanf("%d", &number);
    //print number of grades that are require to calculate GPA
    printf("Number of A+s: ");
    scanf(" %d", &sScoreAA); 
    printf("Number of As: ");
    scanf(" %d", &sScoreA); 
    printf("Number of Bs: ");
    scanf(" %d", &sScoreB); 
    printf("Number of Cs: ");
    scanf(" %d", &sScoreC); 
    //calculate GPA with School's Rules
    X = sScoreAA * 5;
    Y = sScoreA * 4;
    Z = sScoreB * 3;
    A = sScoreC * 2;
    T = (X + Y + Z + A)/number;
    B = sScoreAA + sScoreA + sScoreB + sScoreC;
    C = number - B ;
    //calculate 5 sclae GPA to 4 scale GPT
    T4 = (T / 5) * 4;

    //print the result with information about the student
    printf("=========================\n");
    printf("StudentName: %s\n", studentName);
    printf("StudentID: %d\n", studentID);
    printf("Number of course: %d\n", number);
    printf("Number of course You've received Credit: %d\n", B);
    printf ("Your GPA(5): %f\n", T);
    printf ("Your GPA(4): %f\n", T4);
    printf ("* If this is below 0, Your imput might be incorrect: %d\n", C);
    printf("=========================\n");

}

int main() {
    gpa_calc();
    return 0;
}
