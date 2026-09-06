# 🔐 Registration & Login System

A **console-based C++ Registration and Login System** developed as part of my **Code Alpha Internship – Task 2**.

The program allows users to register an account, log in using their credentials, and view the stored registration records through a text file.

## 📌 Features

* User registration
* Username and password input
* User login authentication
* Password verification
* Maximum of 3 password attempts
* System lock after incorrect password attempts
* Username validation during login
* File handling for storing registration records
* Display stored registration records
* Simple menu-driven console interface

## 🛠️ Technologies Used

* **Language:** C++
* **Libraries:**

  * `<iostream>`
  * `<string>`
  * `<fstream>`
  * `<iomanip>`

## 📚 C++ Concepts Used

This project demonstrates several important C++ concepts:

* Functions
* Arrays
* Strings
* Loops
* Conditional Statements
* `static` variables
* File Handling
* `ofstream`
* `ifstream`
* `getline()`
* Input validation
* Formatted output using `setw()`
* Menu-driven programming

## 📂 File Handling

The program uses a text file named:

```text
Registration.txt
```

During registration, the username and password are stored in the file.

Example:

```text
Username            Password
Hamid               12345
Student             abc123
```

The program uses:

* `ofstream` → to write registration data
* `ifstream` → to read stored records
* `ios::app` → to append new records without overwriting existing data

## 🔑 Login System

The login system works in the following way:

1. User enters their username.
2. Program searches for the username.
3. If the username is found, the user is asked for the password.
4. The user gets up to **3 password attempts**.
5. If the correct password is entered, login is successful.
6. After three incorrect attempts, the system displays a **System Locked** message.
7. If the username does not exist, the program displays a username-not-found message.

## 📋 Main Menu

The program provides the following options:

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

### 1️⃣ Registration

Allows a new user to enter:

* Username
* Password

The information is then stored in `Registration.txt`.

### 2️⃣ Login

Allows a registered user to authenticate using:

* Username
* Password

### 3️⃣ File Show

Reads and displays the records stored in `Registration.txt`.

### 4️⃣ Exit

Terminates the program.

## 🚀 How to Run

### Clone the Repository

```bash
git clone <your-repository-link>
```

### Open the Project

Open the project in a C++ IDE such as:

* Visual Studio
* Visual Studio Code
* Code::Blocks
* Dev-C++

### Compile and Run

Compile and execute the `main.cpp` file.

The program will automatically create/use `Registration.txt` for storing registration records.

## 🎯 Learning Objectives

This project helped me practice:

* Creating and calling functions
* Working with arrays and strings
* Handling user input
* Implementing authentication logic
* Reading and writing files
* Using loops for repeated operations
* Implementing password attempt limits
* Working with formatted file output
* Building a menu-driven console application

## 🏢 Internship

**Code Alpha Internship – Task 2**

This project was completed as part of my **Code Alpha Internship Tasks**.

## 👨‍💻 Author

**Malik Hamid Raza**

BS Artificial Intelligence Student

Interested in **C++, Python, Data Structures & Algorithms**, and continuously improving programming and problem-solving skills.

### 🌐 Connect With Me

* **GitHub:** https://github.com/hamid-fastian
* **LinkedIn:** https://www.linkedin.com/in/malik-hamid-raza-9338693

---

⭐ If you find this project useful, consider giving the repository a star!
