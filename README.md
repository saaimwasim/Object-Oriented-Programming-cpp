# Object-Oriented Programming - C++

This repository contains my C++ Object-Oriented Programming work, including my assignment and quizz.

## Contents

```text
Object-Oriented-Programming-cpp/
│
├── README.md
│
├── Assignment-26-March-2026/
│   └── main.cpp
│
└── Quizz/
    └── quizz.cpp
```

---

## Assignment - 26th March 2026

This assignment is based on a hero class system using Object-Oriented Programming concepts.

### Description

The program contains one abstract base class named `Hero`.

Three classes inherit from the `Hero` class:

- `Warrior`
- `Mage`
- `Archer`

Each hero has different attributes, attack power, and defense power.  
The program displays the profile of each hero and then compares their attack power to find the hero with the highest attack power.

### Concepts Used

- Classes and Objects
- Inheritance
- Abstraction
- Polymorphism
- Pure Virtual Functions
- Function Overriding
- Constructors
- Access Specifiers
- Getter Function

---

## Quizz

This quizz is based on a ride fare system using inheritance in C++.

### Description

The program contains a base class named `RideFare`.

Two classes inherit from the `RideFare` class:

- `economyRide`
- `luxuryRide`

The program calculates and displays the final fare for both ride types.

### Concepts Used

- Classes and Objects
- Inheritance
- Function Overriding
- Base Class Function Calling
- Fare Calculation Using Member Functions

---

## How to Run

### Compile Assignment

```bash
g++ Assignment-26-March-2026/main.cpp -o assignment
```

Run Assignment:

```bash
./assignment
```

### Compile Quiz

```bash
g++ Quiz/quiz.cpp -o quiz
```

Run Quiz:

```bash
./quiz
```

For Windows, run:

```bash
assignment.exe
quiz.exe
```

---

## Author

Muhammad Saaim
