# Question:
# 1. Get student marks from the user using a list.
# 2. Calculate sum, average, maximum, and minimum marks.
# 3. Print sum, average, maximum, and minimum marks.

n = int(input("Enter the number of students = "))  # Read the number of students
students = []

# Input phase: Loop to get marks for each student
for i in range(n):
    marks = int(input(f"Marks for student {i + 1} = "))  # Read the marks for each student
    students.append(marks)  # Add marks to the list

print("-----------------------------")
total_marks = sum(students)
print(f"Total marks = {total_marks}")  # Display the total marks

average = total_marks / n
print("-----------------------------")
print(f"Average = {average:.2f}")  # Display the average

# Find maximum and minimum marks
max_mark = max(students)
min_mark = min(students)

print("-----------------------------")
print(f"Maximum marks = {max_mark}")  # Display the maximum marks
print("-----------------------------")
print(f"Minimum marks = {min_mark}")  # Display the minimum marks
print("-----------------------------")
