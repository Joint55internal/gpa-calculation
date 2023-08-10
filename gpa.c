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
    
    // total number of courses
    do {
        printf("Total Number of courses: ");
        if (scanf("%d", &totalCourses) != 1 || totalCourses < 0) {
            printf("Error: Invalid input. Enter a non-negative number of courses.\n");
            // Clear the input buffer in case of invalid input
            while (getchar() != '\n');
        }
    } while (totalCourses < 0);

    //  A+ grades
    do {
        printf("Number of A+s: ");
        if (scanf("%d", &sScoreAA) != 1 || sScoreAA < 0) {
            printf("Error: Invalid input. Enter a non-negative number of A+ grades.\n");
            // Clear the input buffer in case of invalid input
            while (getchar() != '\n');
        }
    } while (sScoreAA < 0);

    // A grades
    do {
        printf("Number of As: ");
        if (scanf("%d", &sScoreA) != 1 || sScoreA < 0) {
            printf("Error: Invalid input. Enter a non-negative number of As.\n");
            // Clear the input buffer in case of invalid input
            while (getchar() != '\n');
        }
    } while (sScoreA < 0);

    // B grades
    do {
        printf("Number of Bs: ");
        if (scanf("%d", &sScoreB) != 1 || sScoreB < 0) {
            printf("Error: Invalid input. Enter a non-negative number of Bs.\n");
            // Clear the input buffer in case of invalid input
            while (getchar() != '\n');
        }
    } while (sScoreB < 0);

    //  C grades
    do {
        printf("Number of Cs: ");
        if (scanf("%d", &sScoreC) != 1 || sScoreC < 0) {
            printf("Error: Invalid input. Enter a non-negative number of Cs.\n");
            // Clear the input buffer in case of invalid input
            while (getchar() != '\n');
        }
    } while (sScoreC < 0);

    // Calculate GPA with school's rules
    float totalPoints = (sScoreAA * 5) + (sScoreA * 4) + (sScoreB * 3) + (sScoreC * 2) + (sScoreF * 0);
    float totalPoints4 = (sScoreAA * 4) + (sScoreA * 4) + (sScoreB * 3) + (sScoreC * 2) + (sScoreF * 0);
    int B = sScoreAA + sScoreA + sScoreB + sScoreC + sScoreF;
    T = totalPoints / totalCourses;
    C = totalCourses - B;
    // Calculate 4 scale GPA
    T4 = totalPoints4 / totalCourses;

    // Print the result with information about the student
     if (C == 0) {
        printf("=========================\n");
        printf("StudentName: %s\n", studentName);
        printf("StudentID: %d\n", studentID);
        printf("Number of course: %d\n", totalCourses);
        printf("Number of course You've received Credit: %d\n", B);
        printf ("Your GPA(5): %.2f\n", T);
        printf ("Your GPA(4): %.2f\n", T4);
        printf("=========================\n");
        FILE *fptr;
        // Creat a file
        fptr = fopen("mygpa.txt", "w");
        if (fptr == NULL) {
            printf("Error opening file.\n");
        }
        // Write result to the file
        fprintf (fptr, "Student Name: %s\n", studentName);
        fprintf (fptr, "Number of course: %d\n", totalCourses);
        fprintf (fptr, "Your GPA (5 scale) is %.2f\n", T);
        fprintf (fptr, "Your GPA (4 scale) is %.2f\n", T4);
        fclose(fptr); 
    }
    else if (C < 0) { 
        printf("=========================\n");
        printf ("[*] Warning!: Check it again, You probably made a mistake!\n");
        printf ("[*] If this is below 0, Your imput might be incorrect: %d\n", C);
        printf("StudentName: %s\n", studentName);
        printf("StudentID: %d\n", studentID);
        printf("Number of course: %d\n", totalCourses);
        printf("Number of course You've received Credit: %d\n", B);
        printf ("Your GPA(5): %.2f\n", T);
        printf ("Your GPA(4): %.2f\n", T4);
        printf("=========================\n");
    }
    else if ( C > 0) {
        printf("=========================\n");
        printf("StudentName: %s\n", studentName);
        printf("StudentID: %d\n", studentID);
        printf("Number of course: %d\n", totalCourses);
        printf("Number of course You've received Credit: %d\n", B);
        printf("Number of course Failed: %d\n", C);
        printf ("Your GPA(5): %.2f\n", T);
        printf ("Your GPA(4): %.2f\n", T4);
        printf("=========================\n");
    }
}

int main() {
    gpa_calc();
    return 0;
}
