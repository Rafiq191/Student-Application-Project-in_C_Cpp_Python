// Qustion :
// 1. Getting student marks from user using array
// 2. Calculate the sum, average , Maximum and minimum marks
// 3. printing sum, average, maximum and minimum marks

#include<iostream>
#include<conio.h>                            // This header is for the 'getch()' function used at the end
using namespace std;

int main()
{
    int n, sum = 0;                          // Initialize variables to store the number of students and the sum of their marks
    
    cout << "Enter the number of students = ";
    cin >> n;                                // Read the number of students
    
    int students[n];                         // Declare an array to store marks for each student
    
    // Input phase: Loop to get marks for each student
    for(int i = 0; i < n; i++)
    {
        cout << "Marks for student " << i + 1 << " = ";
        cin >> students[i];                  // Read the marks for each student
        sum = sum + students[i];             // Accumulate the sum of marks
    }
    
    cout << "-----------------------------" << endl;
    cout << "Total marks = " << sum << endl;  // Display the total marks
    
    float avg = (float)sum / n;               // Calculate the average by casting sum to float for decimal division
    cout << "-----------------------------" << endl;
    cout << "Average = " << avg << endl;      // Display the average
    
    // Find maximum and minimum marks
    int max = students[0];                   // Initialize max with the first student's marks
    int min = students[0];                   // Initialize min with the first student's marks
    for(int i = 1; i < n; i++)
    {
        if(max < students[i])
        {
            max = students[i];              // Update max if a higher mark is found
        }

        if(min > students[i])
        {
            min = students[i];              // Update min if a lower mark is found
        }
    }
    
    cout << "-----------------------------" << endl;
    cout << "Maximum marks = " << max << endl;  // Display the maximum marks
    cout << "-----------------------------" << endl;
    cout << "Minimum marks = " << min << endl;  // Display the minimum marks
    cout << "-----------------------------" << endl;

    getch();                                    // Wait for a key press before exiting
    return 0;                                   // Return 0 to indicate successful execution
}
