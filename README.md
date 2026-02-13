# 📆 clsPeriod - C++ Period & Date Range Utility Library

> 🔹 A practical and educational C++ class for handling date ranges, overlap detection, and period calculations.

---

## 📝 Project Description

**clsPeriod** is a custom C++ class built on top of `clsDate` that represents a time period between two dates and provides a collection of utilities for working with date intervals.

This project focuses on implementing date range logic manually without relying on external libraries. It demonstrates how scheduling systems, booking platforms, and time-based validations work internally.

The project showcases:

- Date range modeling  
- Period overlap detection  
- Overlapping days calculation  
- Date inclusion checks  

This project is ideal for students learning C++ fundamentals and developers who want to strengthen their algorithmic thinking in date-related problems.

---

## ✨ Features

### 📅 Period Construction
- Create a period using start and end dates
- Encapsulated private members:
  - `_StartDate`
  - `_EndDate`

### 📏 Period Length Calculation
- Calculate period length in days
- Option to include or exclude the end date
  
---

### 🔍 Date Inclusion Check
- Check if a specific date is inside the period
  
---

### 🔁 Period Overlap Detection
- Detect whether two periods overlap
- Available as both static and member functions

---

### 🔢 Overlap Days Calculation
- Count the number of overlapping days between two periods

---

### 🖨 Printing Period Information
- Print period start and end dates

---

## 🛠 Technologies Used

- 💻 C++
- 🧠 Object-Oriented Programming (OOP)
- 📅 Custom `clsDate` class
- 🔄 Date comparison and arithmetic logic

---

> ℹ️ `clsPeriod` depends on `clsDate` for date comparison and day calculations.

---

## 🚀 Compilation Instructions

### 🖥 Using Visual Studio (Recommended)

1. Create a new **Console Application** project.
2. Add the following files:
   - `clsDate.h`
   - `clsPeriod.h`
   - `main.cpp`
3. Build and Run using:
   ```
   Ctrl + F5
   ```

---

### 🐧 Using g++

Compile using:

```bash
g++ main.cpp -o clsPeriodApp
./clsPeriodApp
```

If using Windows (MinGW):

```bash
g++ main.cpp -o clsPeriodApp.exe
clsPeriodApp.exe
```
---

## 👨‍💻 Author

Developed as a practical C++ Period utility project for learning and algorithm practice.

If you like the project, consider ⭐ starring the repository!
