# 🏦 Bank Management System

A **console-based Bank Management System developed in C++** as part of my **Code Alpha Internship – Task 3**.

The project demonstrates object-oriented programming concepts, dynamic memory allocation, account management, and transaction handling through a simple menu-driven interface.

## 📌 Features

* Create a customer
* Add bank accounts
* Deposit money
* Withdraw money
* Check account balance
* Display customer and account information
* Maintain transaction history
* Display account transactions
* Search accounts using account numbers
* Limit the number of accounts per customer
* Limit the number of transactions per account
* Handle insufficient balance
* Menu-driven console interface

## 🏗️ Project Structure

The system is designed using three main classes:

### `Transaction`

Responsible for storing and displaying individual transactions.

**Data members:**

* Transaction type
* Transaction amount

**Functions:**

* `setTransaction()`
* `display()`

### `Account`

Responsible for managing a bank account.

**Data members:**

* Account number
* Balance
* Transaction records
* Transaction count
* Maximum transaction limit

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

**Data members:**

* Customer ID
* Customer name
* Accounts
* Account count
* Maximum account limit

**Functions:**

* `createCustomer()`
* `addAccount()`
* `getAccount()`
* `displayCustomer()`

## 💻 Main Menu

The program provides the following options:

```text
1. Create Customer
2. Add Account
3. Deposit
4. Withdraw
5. Display Account
6. Display Transactions
7. Exit
```

### 1️⃣ Create Customer

Creates a customer by taking:

* Customer ID
* Customer name
* Maximum number of accounts

### 2️⃣ Add Account

Creates a new bank account for the customer using:

* Account number
* Maximum number of transactions

### 3️⃣ Deposit

Allows the user to deposit money into an existing account.

The deposited amount is added to the account balance and recorded as a transaction.

### 4️⃣ Withdraw

Allows the user to withdraw money from an account.

The program checks whether the account has sufficient balance before completing the withdrawal.

### 5️⃣ Display Account

Displays:

* Customer ID
* Customer name
* Account number
* Current account balance

### 6️⃣ Display Transactions

Displays the transaction history of a selected account.

Each transaction contains:

* Transaction type
* Amount

### 7️⃣ Exit

Terminates the banking management system.

## 🧠 Object-Oriented Programming Concepts

This project provides practice with important C++ OOP concepts:

* Classes and Objects
* Encapsulation
* Private and Public members
* Member functions
* Constructors
* Object relationships
* Pointers
* Dynamic memory allocation

The classes are connected through relationships such as:

```text
Customer
   │
   └── Accounts
          │
          └── Transactions
```

## 💾 Dynamic Memory Allocation

The project uses dynamic memory allocation to create arrays according to the required limits.

For example:

```cpp
customers = new Customer[100];
```

Accounts are dynamically allocated using:

```cpp
accounts = new Account[maxAccounts];
```

Transactions are dynamically allocated using:

```cpp
transactions = new Transaction[maxTransactions];
```

This provides practice with pointers and dynamic arrays in C++.

## ⚠️ Error Handling

The program handles several common situations:

* Account not found
* Insufficient account balance
* Account limit reached
* Transaction limit reached
* Invalid menu choice

Example:

```text
Error: Insufficient balance.
```

## 🛠️ Technologies Used

* **Language:** C++
* **Programming Paradigm:** Object-Oriented Programming
* **Libraries:**

  * `<iostream>`
  * `<string>`
  * `<iomanip>`

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

Compile the `main.cpp` file and run the program.

## 🎯 Learning Objectives

This project helped me strengthen my understanding of:

* Object-Oriented Programming
* Classes and objects
* Encapsulation
* Pointers
* Dynamic memory allocation
* Arrays of objects
* Function implementation
* Account management logic
* Transaction management
* Menu-driven applications
* Basic error handling

## 🏢 Internship

**Code Alpha Internship – Task 3**

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
