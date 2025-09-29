

# EXPERIMENT 13: OPERATOR AND FUNCTION OVERLOADING IN C++

## AIM
To study and implement **operator overloading** and **function overloading** in C++.

## TOOLS USED
- **Language**: C++  
- **Compiler**: g++ (GNU Compiler Collection)  
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)  
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor  

## THEORY

### FUNCTION OVERLOADING
Function overloading allows multiple functions with the **same name** but **different parameter lists** (different types or number of arguments).  
The compiler chooses the correct function to invoke at **compile time** based on the arguments provided. This is also known as **compile-time polymorphism**.

#### Key Points
- The functions must differ in **parameter types** or **number of parameters**.
- Return type alone cannot distinguish overloaded functions.
- It improves **code readability** and **reusability**.

#### Generic Syntax
```cpp
class ClassName {
public:
    void functionName(int a);
    void functionName(double a);
    void functionName(int a, int b);
};
```

### OPERATOR OVERLOADING

Operator overloading allows predefined C++ operators like +, -, *, ==, etc. to be redefined so they can work with user-defined objects in a natural way, just like with built-in data types.

#### Key Points

- Defined using the keyword operator followed by the operator symbol.
- Can be implemented as a member function or a friend function.
- Not all operators can be overloaded (for example: ::, sizeof, .?).

#### Generic Syntax (Member Function)
```cpp
class ClassName {
    DataType member;
public:
    ClassName operator+(const ClassName &obj) {
        ClassName temp;
        temp.member = this->member + obj.member;
        return temp;
    }
};
```

#### ADVANTAGES

- Provides intuitive usage of operators with custom objects.
- Enhances code readability and maintainability.
- Enables compile-time polymorphism in C++.

#### APPLICATIONS

- Mathematical classes such as complex numbers, vectors, matrices.
- String manipulations.
- Any custom class needing natural operator behavior.

## EXPERIMENT 13(A): FUNCTION OVERLOADING USING CONSTRUCTORS IN C++

### ALGORITHM

1. **Start** the program.
2. **Define** a class `Add` with the following **private** data members:
   - `a` (double)
   - `b` (double)
   - `c` (double)
3. **Provide** multiple constructors inside the `Add` class to demonstrate function overloading:
   - **Default constructor**: Initializes `a`, `b`, and `c` to `0.0`.
   - **Two-parameter integer constructor**: Initializes `a` and `b` with integer values, leaves `c` as default `0.0`.
   - **Two-parameter float constructor**: Initializes `a` and `b` with float values, sets `c` to `0.0`.
   - **Three-parameter integer constructor**: Initializes `a`, `b`, and `c` with integer values.
4. **Define** a member function `add()` that returns the sum of `a + b + c`.
5. **In the `main()` function**:
   - Create an object `a1` of `Add` using the **three-parameter integer constructor**.
   - Create another object `a2` of `Add` using the **two-parameter float constructor**.
6. **Call** the `add()` method on both objects and **display** the result using `cout`.
7. **End** the program.

## EXPERIMENT 13(B): FUNCTION OVERLOADING USING CONSTRUCTORS IN C++ (BILL CALCULATION)

### ALGORITHM

1. **Start** the program.
2. **Define** a class `Bill` with the following **private** data members:
   - `a` (double)
   - `b` (double)
   - `c` (double)
3. **Provide** multiple constructors inside the `Bill` class to demonstrate **function overloading**:
   - **Default constructor**: Initializes `a`, `b`, and `c` to `0`.
   - **One-parameter constructor**: Initializes `a` with the given value and `b`, `c` to `0`.
   - **Two-parameter constructor**: Initializes `a` and `b` with the given values, `c` to `0`.
   - **Three-parameter constructor**: Initializes `a`, `b`, and `c` with the given values.
4. **Define** a member function `total()` that returns the total sum `a + b + c`.
5. **In the `main()` function**:
   - Create an object `b1` of `Bill` using the **default constructor**.
   - Create an object `b2` of `Bill` using the **one-parameter constructor**.
   - Create an object `b3` of `Bill` using the **two-parameter constructor**.
   - Create an object `b4` of `Bill` using the **three-parameter constructor**.
6. **Call** the `total()` method on all objects and **display** the results using `cout` with proper labels.
7. **End** the program.

## EXPERIMENT 13(C): FUNCTION OVERLOADING WITH MULTIPLE ARGUMENTS IN C++ (STUDENT MARKS & GRADE)

### ALGORITHM
1.**Start** the program.  
2.**Define** a function `getGrade(int marks)` that returns a grade (`A`, `B`, `C`, `D`, or `F`) based on the average marks.  
3.**Define** a class `Student` with the following **private** data members: `name` (string), `m1` (int), `m2` (int), `m3` (int).  
4.**Create** a **default constructor** to initialize `name` as `"NULL"` and `m1`, `m2`, `m3` as `0`.  
5.**Overload** the `set_name_marks()` function to accept different numbers of marks:  
   - One-parameter: `(string x, int a)` – sets `m1` and leaves `m2`, `m3` as `0`.  
   - Two-parameter: `(string x, int a, int b)` – sets `m1`, `m2` and leaves `m3` as `0`.  
   - Three-parameter: `(string x, int a, int b, int c)` – sets all `m1`, `m2`, `m3`.  
6.**Define** `total_marks()` to return the sum of `m1+m2+m3`.  
7.**Define** `get_name()` to return the student’s name.  
8.**In the `main()` function**:  
   - Create an object `s1` of the `Student` class.  
   - Use `set_name_marks()` with three marks for one student and display the name, total marks, and grade.  
   - Use `set_name_marks()` with two marks for another student and display details.  
   - Use `set_name_marks()` with one mark for another student and display details.  
9.**End** the program.

## EXPERIMENT 13(D): OPERATOR OVERLOADING IN C++ (RECTANGLE ADDITION)

### ALGORITHM
1.**Start** the program.  
2.**Define** a class `Rectangle` with the following **private** data members:  
   - `length` (float)  
   - `width` (float)  
3.**Create** a constructor that initializes `length` and `width` with the provided values.  
4.**Overload** the `+` operator inside the `Rectangle` class:  
   - Define `Rectangle operator+(const Rectangle &a)` which returns a new `Rectangle` object.  
   - The new object’s `length` is the sum of the calling object’s `length` and `a.length`.  
   - The new object’s `width` is the sum of the calling object’s `width` and `a.width`.  
5.**Define** a member function `area()` that returns the area of the rectangle (`length * width`).  
6.**In the `main()` function**:  
   - Create two `Rectangle` objects `r1` and `r2` with different dimensions.  
   - Use the overloaded `+` operator to add `r1` and `r2` and store the result in `r3`.  
   - Call the `area()` method on `r3` and display the result using `cout`.  
7.**End** the program.

## EXPERIMENT 13(E): ADDITION OF TWO COMPLEX NUMBERS USING OPERATOR OVERLOADING

### ALGORITHM
1. **Start**
2. Define a class `Complex` with:
   - Two data members: `real` and `img` to store real and imaginary parts.
   - A constructor to initialize `real` and `img` (with default values 0).
   - A member function `operator+` to add two `Complex` objects and return the result.
   - A member function `display()` to print the complex number.
3. In the `main()` function:
   - Create two `Complex` objects `c1` and `c2` with given values.
   - Use the overloaded `+` operator to compute `c3 = c1 + c2`.
   - Call `c3.display()` to output the result.
4. **Stop**

## EXPERIMENT 13(F): BANK ACCOUNT OPERATIONS USING OPERATOR OVERLOADING  

### Algorithm  

1. **Start**  
2. Define a class `BankAccount` with:  
   - One data member `balance` to store the account balance.  
   - A constructor to initialize `balance`.  
   - Overloaded `operator+` to add balances of two `BankAccount` objects and return a new `BankAccount`.  
   - Overloaded `operator*` to apply an interest rate and return a new `BankAccount`.  
   - Overloaded `operator-` to subtract an amount from the balance and return a new `BankAccount`.  
   - A member function `creditScore()` to return the credit score based on the current balance.  
   - A member function `showBalance()` to display the balance.  
3. In the `main()` function:  
   - Create two `BankAccount` objects `user_1` and `user_2` with initial balances.  
   - Use the overloaded `+` operator to combine them into `jointAccount`.  
   - Apply interest on `jointAccount` using the overloaded `*` operator and store it in `withInterest`.  
   - Deduct bills from `withInterest` using the overloaded `-` operator and store it in `afterBills`.  
   - Display the final balance using `afterBills.showBalance()`.  
   - Display the credit score using `afterBills.creditScore()`.  
4. **Stop**  
# Experiment_13
