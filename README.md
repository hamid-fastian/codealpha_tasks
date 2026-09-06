# 💻 Code Alpha Internship Tasks

This repository contains the projects I completed as part of my **Code Alpha Internship**. The tasks are developed in **C++** and focus on strengthening programming fundamentals, Object-Oriented Programming, problem-solving, file handling, and console-based application development.

## 📌 Internship Tasks

| # | Project                        | Main Concepts                                   |
| - | ------------------------------ | ----------------------------------------------- |
| 1 | 🎓 GPA & CGPA Calculator       | C++, Arrays, Pointers, Dynamic Memory           |
| 2 | 🔐 Registration & Login System | Functions, Strings, Arrays, File Handling       |
| 3 | 🏦 Bank Management System      | OOP, Classes, Objects, Pointers, Dynamic Memory |

---

# 🎓 Task 1 — GPA & CGPA Calculator

A console-based C++ application that calculates the **SGPA/GPA for individual semesters** and the **overall CGPA** based on course grades and credit hours.

## ✨ Features

* Supports multiple semesters
* Supports multiple courses per semester
* Takes credit hours for each course
* Supports grades from A+ to F
* Validates entered grades
* Calculates semester SGPA
* Calculates overall CGPA
* Displays semester-wise grade reports
* Displays total credit hours and grade points
* Uses dynamic memory allocation

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

## 🧮 Calculations

**SGPA:**

```text
SGPA = Total Grade Points / Total Credit Hours
```

**CGPA:**

```text
CGPA = Total Grade Points of All Semesters / Total Credit Hours of All Semesters
```

## 🧠 Concepts Used

* C++ fundamentals
* Loops
* Conditional statements
* Strings
* Arrays
* Pointers
* Dynamic memory allocation
* Input validation
* `new` and `delete[]`
* Formatted output

---

# 🔐 Task 2 — Registration & Login System

A console-based C++ application that allows users to **register an account, log in using their credentials, and view registration records** stored in a text file.

## ✨ Features

* User registration
* Username and password input
* Login authentication
* Password verification
* Three password attempts
* System lock after incorrect attempts
* Username validation
* Registration data storage
* File record display
* Menu-driven interface

## 📂 File Handling

The program stores registration information in:

```text
Registration.txt
```

It uses:

```cpp
ofstream
```

to write registration data and:

```cpp
ifstream
```

to read stored records.

The registration file is opened using:

```cpp
ios::app
```

so new records are added without overwriting existing records.

## 📋 Main Menu

```text
====================
|     Main Menu    |
====================
|1. Registration   |
|2. Login          |
|3. File Show      |
|4. Exit           |
====================
```

## 🔑 Login Process

1. User enters a username.
2. Program searches for the username.
3. If found, the user enters their password.
4. The user receives up to three password attempts.
5. Correct credentials result in a successful login.
6. After incorrect attempts, the system displays a locked message.

## 🧠 Concepts Used

* Functions
* Arrays
* Strings
* Loops
* Conditional statements
* File handling
* `ifstream`
* `ofstream`
* `getline()`
* `static` variables
* `setw()`
* Input validation

---

# 🏦 Task 3 — Bank Management System

A console-based **Bank Management System developed in C++** using Object-Oriented Programming concepts.

The project provides basic customer, account, deposit, withdrawal, and transaction management functionality.

## ✨ Features

* Create customer
* Add bank accounts
* Deposit money
* Withdraw money
* Check account balance
* Display customer information
* Display account information
* Maintain transaction history
* Display transactions
* Search account by account number
* Account limit handling
* Transaction limit handling
* Insufficient balance checking

## 🏗️ Classes

### `Transaction`

Responsible for storing and displaying individual transactions.

**Data:**

* Transaction type
* Transaction amount

**Functions:**

* `setTransaction()`
* `display()`

### `Account`

Responsible for managing account information and transactions.

**Data:**

* Account number
* Balance
* Transactions
* Transaction count
* Maximum transactions

**Functions:**

* `createAccount()`
* `getAccountNumber()`
* `getBalance()`
* `addTransaction()`
* `deposit()`
* `withdraw()`
* `displayTransactions()`
* `displayAccount()`

### `Customer`

Responsible for managing customer information and accounts.

**Data:**

* Customer ID
* Name
* Accounts
* Account count
* Maximum accounts

**Functions:**

* `createCustomer()`
* `addAccount()`
* `getAccount()`
* `displayCustomer()`

## 📋 Main Menu

```text
1. Create Customer
2. Add Account
3. Deposit
4. Withdraw
5. Display Account
6. Display Transactions
7. Exit
```

## 🧠 OOP Concepts Used

* Classes and objects
* Encapsulation
* Private and public members
* Constructors
* Member functions
* Object relationships
* Pointers
* Dynamic memory allocation
* Arrays of objects

## 💾 Dynamic Memory

The project uses dynamic memory allocation for customers, accounts, and transactions.

Examples:

```cpp
customers = new Customer[100];
```

```cpp
accounts = new Account[maxAccounts];
```

```cpp
transactions = new Transaction[maxTransactions];
```

---

# 🛠️ Technologies Used

* **Programming Language:** C++
* **Programming Paradigm:** Object-Oriented Programming
* **Development:** Console-based applications
* **IDE:** Visual Studio / Visual Studio Code

## 📚 Overall Skills Practiced

Through these three internship tasks, I practiced:

* C++ programming fundamentals
* Object-Oriented Programming
* Classes and objects
* Functions
* Arrays
* Strings
* Pointers
* Dynamic memory allocation
* File handling
* Input validation
* Loops and conditional statements
* Menu-driven applications
* Problem-solving
* Basic memory management

---

# 🚀 How to Run

## 1. Clone the Repository

```bash
git clone <your-repository-link>
```

## 2. Open the Project

Open the repository in a C++ IDE such as:

* Visual Studio
* Visual Studio Code
* Code::Blocks
* Dev-C++

## 3. Select a Task

Open the folder for the task you want to run.

```text
Code-Alpha/
│
├── Task-1-GPA-CGPA-Calculator/
│
├── Task-2-Registration-Login/
│
└── Task-3-Bank-Management-System/
```

## 4. Compile and Run

Compile the corresponding `main.cpp` file and run the program.

---

# 📁 Repository Structure

```text
Code-Alpha/
│
├── Task-1-GPA-CGPA-Calculator/
│   ├── main.cpp
│   └── README.md
│
├── Task-2-Registration-Login/
│   ├── main.cpp
│   ├── Registration.txt
│   └── README.md
│
├── Task-3-Bank-Management-System/
│   ├── main.cpp
│   └── README.md
│
└── README.md
```

---

# 🏢 Internship

**Code Alpha Internship**

This repository contains the three tasks completed as part of my internship:

* **Task 1:** GPA & CGPA Calculator
* **Task 2:** Registration & Login System
* **Task 3:** Bank Management System

These projects helped me apply C++ concepts to practical, console-based applications while improving my programming and problem-solving skills.

---

# 👨‍💻 Author

**Malik Hamid Raza**

BS Artificial Intelligence Student

Passionate about **C++, Python, Data Structures & Algorithms**, and continuously improving programming and problem-solving skills.

## 🌐 Connect With Me

* **GitHub:** https://github.com/hamid-fastian
* **LinkedIn:** https://www.linkedin.com/in/malik-hamid-raza-9338693

---

⭐ **If you find this repository useful, consider giving it a star!**
