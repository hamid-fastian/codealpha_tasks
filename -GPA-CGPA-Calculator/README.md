# 🎓 GPA & CGPA Calculator

A **console-based C++ application** developed as part of my **Code Alpha Internship**. This program calculates the **SGPA/GPA for each semester** and the **overall CGPA** based on course grades and credit hours.

## 📌 Features

* Calculate GPA/SGPA for multiple semesters
* Calculate final CGPA
* Supports multiple courses in each semester
* Takes credit hours for every course
* Supports grades from **A+ to F**
* Validates user-entered grades
* Displays a semester-wise grade report
* Displays overall credit hours and total grade points
* Uses dynamic memory allocation for storing grades
* Releases dynamically allocated memory to avoid memory leaks

## 📊 Grading Scale

| Grade | Grade Point |
| ----- | ----------- |
| A+    | 4.00        |
| A     | 4.00        |
| A-    | 3.67        |
| B+    | 3.33        |
| B     | 3.00        |
| B-    | 2.67        |
| C+    | 2.33        |
| C     | 2.00        |
| C-    | 1.67        |
| D+    | 1.33        |
| D     | 1.00        |
| F     | 0.00        |

## 🧮 Calculation

### Semester GPA / SGPA

The program calculates the semester GPA using:

**SGPA = Total Grade Points ÷ Total Credit Hours**

Where:

**Grade Points = Grade Point × Credit Hours**

### Overall CGPA

The final CGPA is calculated using:

**CGPA = Total Grade Points of All Semesters ÷ Total Credit Hours of All Semesters**

## 💻 Technologies Used

* **Language:** C++
* **Concepts:**

  * Variables and Data Types
  * Loops
  * Conditional Statements
  * Strings
  * Arrays
  * Pointers
  * Dynamic Memory Allocation
  * Input Validation
  * Formatted Output
  * Basic Memory Management

## 🚀 How to Run

### 1. Clone the Repository

```bash
git clone <your-repository-link>
```

### 2. Open the Project

Open the project in a C++ IDE such as:

* Visual Studio
* Visual Studio Code
* Code::Blocks
* Dev-C++

### 3. Compile and Run

Compile `main.cpp` and run the program.

### 4. Enter Information

The program will ask for:

1. Number of semesters
2. Number of courses in each semester
3. Credit hours for each course
4. Grade for each course

The program then displays the **SGPA for each semester** and the **final CGPA**.

## 📷 Sample Output

```text
=====================================================
 ========> Student GPA & CGPA Report <=========
=====================================================
Enter number of semesters: 2

Enter number of courses for semester 1: 3

Enter credit hours for course 1: 3
Enter grade for course 1: A

Enter credit hours for course 2: 3
Enter grade for course 2: B+

Enter credit hours for course 3: 4
Enter grade for course 3: A-

------> semester 1: <------
===========================
Course    Grade
===========================
Course 1: A
Course 2: B+
Course 3: A-
============================
Semester 1 SGPA: 3.56
============================

...

========================
     Final CGPA Report
========================
Overall credits: 20
Total points: 71.5
Final CGPA: 3.57
==========================
```

## 📚 Learning Objectives

This project helped me practice and strengthen my understanding of:

* C++ fundamentals
* Loops and decision-making
* Working with strings
* Arrays and pointers
* Dynamic memory allocation using `new` and `delete[]`
* Calculating weighted averages
* Input validation
* Organizing console-based applications
* Basic memory management

## 🏢 Internship

**Code Alpha Internship – Task 1**

This project was completed as part of my internship tasks at **Code Alpha**.

## 👨‍💻 Author

**Malik Hamid Raza**

BS Artificial Intelligence Student

Interested in **C++, Python, Data Structures & Algorithms**, and continuously improving programming and problem-solving skills.

### 🌐 Connect With Me

* **GitHub:** https://github.com/hamid-fastian
* **LinkedIn:** https://www.linkedin.com/in/malik-hamid-raza-9338693

---

⭐ If you find this project useful, consider giving the repository a star!
