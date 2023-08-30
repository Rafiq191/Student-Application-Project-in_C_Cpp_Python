// Question:
// 1. Get student marks from the user using an array.
// 2. Calculate sum, average, maximum, and minimum marks.
// 3. Print sum, average, maximum, and minimum marks.

#include <stdio.h>

int main()
{
    int n, sum = 0; // Variables to store student count and the sum of their marks
    
    printf("Enter the number of students = ");
    scanf("%d", &n); // Read the number of students
    
    int students[n]; // Array to store marks for each student
    
    // Input phase: Loop to get marks for each student
    for (int i = 0; i < n; i++)
    {
        printf("Marks for student %d = ", i + 1);
        scanf("%d", &students[i]); // Read the marks for each student
        sum = sum + students[i]; // Accumulate the sum of marks
    }
    
    printf("-----------------------------\n");
    printf("Total marks = %d\n", sum); // Display the total marks
    
    float avg = (float)sum / n; // Calculate the average by casting sum to float for decimal division
    printf("-----------------------------\n");
    printf("Average = %.2f\n", avg); // Display the average
    
    // Find maximum and minimum marks
    int max = students[0]; // Initialize max with the first student's marks
    int min = students[0]; // Initialize min with the first student's marks
    for (int i = 1; i < n; i++)
    {
        if (max < students[i])
        {
            max = students[i]; // Update max if a higher mark is found
        }

        if (min > students[i])
        {
            min = students[i]; // Update min if a lower mark is found
        }
    }
    
    printf("-----------------------------\n");
    printf("Maximum marks = %d\n", max); // Display the maximum marks
    printf("-----------------------------\n");
    printf("Minimum marks = %d\n", min); // Display the minimum marks
    printf("-----------------------------\n");

    return 0; // Return 0 to indicate successful execution
}