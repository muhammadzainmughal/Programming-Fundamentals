# Mini Hospital Management System

**The University of Azad Jammu & Kashmir**

---

## Contents

1. [Introduction](#introduction)  
2. [Problem Statement](#problem-statement)  
3. [Objectives of the Project](#objectives-of-the-project)  
4. [Scope of the Project](#scope-of-the-project)  
5. [Tools and Technologies Used](#tools-and-technologies-used)  
6. [Programming Concepts Used](#programming-concepts-used)  
7. [System Description](#system-description)  
   - [Patient Management Module](#patient-management-module)  
   - [Showing Patient List](#showing-patient-list)  
   - [Appointment Booking Module](#appointment-booking-module)  
   - [Pharmacy Billing Module](#pharmacy-billing-module)  
   - [Hospital Account Module](#hospital-account-module)  
8. [Expected Outcome](#expected-outcome)  
9. [Limitations of the Project](#limitations-of-the-project)  
10. [Future Enhancements](#future-enhancements)  
11. [Conclusion](#conclusion)  

---

## Introduction

The **Mini Hospital Management System** is a console-based application developed using **C++**.  
This project was created to apply knowledge gained in the Programming Fundamentals course during the first semester of Software Engineering.  

In many small hospitals and clinics, daily operations such as managing patient records, scheduling appointments, and calculating bills are still handled manually. These methods are slow, inefficient, and prone to human error.  

This system provides a simple digital alternative that organizes these tasks using **basic programming concepts**. It is suitable for beginner-level understanding and academic evaluation.

---

## Problem Statement

Manual hospital systems rely heavily on **paper records, registers, and handwritten calculations**, which creates several challenges:

- Difficulty in searching patient records  
- Delays in appointment scheduling  
- Billing calculation mistakes  
- Increased waiting time for patients  

This project provides a **basic computerized system** to manage hospital operations efficiently without using advanced or complex technologies.

---

## Objectives of the Project

The main objectives of this project are:

- To design a **menu-driven hospital management system**  
- To manage **patient records using arrays**  
- To implement **appointment booking using patient ID**  
- To generate **pharmacy bills** with automatic discount and tax  
- To **practice and apply programming concepts**  
- To improve **logical thinking and problem-solving skills**  

---

## Scope of the Project

The scope includes:

- Adding and displaying patient information  
- Booking appointments for hospital departments  
- Generating pharmacy bills based on medicine quantity  
- Managing hospital account balance  

**Note:** This project is console-based and intended for small clinics or learning purposes. Advanced features like file handling, login systems, and graphical interfaces are not included.

---

## Tools and Technologies Used

- **Programming Language:** C++  
- **Development Environment:** Dev-C++  
- **Platform:** Console Application  

---

## Programming Concepts Used

- Variables and Data Types  
- Input and Output Statements  
- Arithmetic and Logical Operators  
- Decision Control Structures (`if`, `if-else`, `else-if ladder`)  
- Switch Statements  
- Loops (`while` and `for`)  
- Arrays  
- User-Defined Functions  
- Pointers (Call by Reference)  
- Menu-Driven Program Structure  

---

## System Description

The system is divided into the following modules:

### Main Menu

The main menu is **looped** so it repeats until the user selects exit. Simple design using symbols (like `****`) is used for visual clarity.

```cpp
// Example Menu
cout << "===== MINI HOSPITAL SYSTEM =====" << endl;
cout << "1) Add Patient" << endl;
cout << "2) List Patients" << endl;
cout << "3) Appointment (Simple)" << endl;
cout << "4) Pharmacy Bill" << endl;
cout << "5) Deposit Payment (Pointer)" << endl;
cout << "6) Exit" << endl;
