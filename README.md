# 👋 Hi Everyone!

Welcome to my **Day 2** hands-on programming notes!  
Today I learned about **Operators** and **Conditional Statements** in C, and this repository includes the examples I wrote while learning. Each section has corresponding code examples in the same file.

> **Note**: If you don't understand anything I said or need an example, please check the actual code files.

---

### 🚀 Getting Started

To clone this repository and run it locally on your computer, follow these steps:

1. Open your terminal and run the following command to clone the repository to your local machine:
    ```bash
    git clone https://github.com/MashrafiGit/Operators-Conditional-Statements.git
    ```

2. Navigate into the project directory:
    ```bash
    cd Operators-Conditional-Statements
    ```

---

### 🧠 Topics Covered
- **Operators**:
    - Arithmetic Operators
    - Relational Operators
    - Logical Operators

- **Conditional Statements**:
    - `if`, `else`
    - `if-else` Ladder
    - Nested `if-else`
    - `if` only (without `else`)

---

### ➕ Operators

#### 🔹 What is an Operator?
Operators are symbols that perform operations on variables and values.

---

#### 1. Arithmetic Operators
Used for basic mathematical operations.

| Operator | Meaning        | Example                        |
|----------|----------------|--------------------------------|
| `+`      | Addition       | `a + b` returns the sum        |
| `-`      | Subtraction    | `a - b` returns the difference |
| `*`      | Multiplication | `a * b` returns the product    |
| `/`      | Division       | `a / b` returns the quotient   |
| `%`      | Modulus        | `a % b` returns the remainder  |

#### 🔸 Note on Division:
- If both operands are integers, the result will be an integer (the decimal part is truncated).
- To get accurate decimal values, at least one operand should be a float.

Example:
```c
float div = (float)a / b; // In multi-step operations, you don't need to convert every variable to float. This is a shortcut to convert 'a' (an integer) to float for accurate division, avoiding integer truncation.
printf("Division = %.1f\n", div); // Prints the division result as a float with one decimal place
```
---

#### 2. Relational Operators

Relational operators are used to compare values. These operators always return either `1` (true) or `0` (false).

| Operator | Meaning               | Example     | Description                                                                              |
|----------|-----------------------|-------------|------------------------------------------------------------------------------------------|
| `<`      | Less than             | `a < b`     | Checks if `a` is less than `b`. Returns `true` if yes, `false` otherwise.                |
| `<=`     | Less than or equal    | `a <= b`    | Checks if `a` is less than or equal to `b`. Returns `true` if yes, `false` otherwise.    |
| `>`      | Greater than          | `a > b`     | Checks if `a` is greater than `b`. Returns `true` if yes, `false` otherwise.             |
| `>=`     | Greater than or equal | `a >= b`    | Checks if `a` is greater than or equal to `b`. Returns `true` if yes, `false` otherwise. |
| `==`     | Equal to              | `a == b`    | Checks if `a` is equal to `b`. Returns `true` if yes, `false` otherwise.                 |
| `!=`     | Not equal to          | `a != b`    | Checks if `a` is not equal to `b`. Returns `true` if yes, `false` otherwise.             |

---

#### 3. Logical Operators

Logical operators are used to perform logical operations between expressions. These operators help combine multiple conditions.

| Operator | Meaning     | Example            | Description                                                    |
|----------|-------------|--------------------|----------------------------------------------------------------|
| `&&`     | Logical AND | `a > 0 && b > 0`   | Returns `true` if both conditions are true.                    |
| `||`     | Logical OR  | `a > 0 || b > 0`   | Returns `true` if at least one condition is true.              |
| `!`      | Logical NOT | `!(a > 0)`         | Reverses the result; returns `true` if the condition is false. |

---

#### 🔀 Conditional Statements
Used to make decisions in a program based on conditions.

#### 1. `if-else` Statement

The `if-else` statement is used to execute a block of code if a condition is true. If the condition is false, a different block of code is executed. This allows you to control the flow of your program based on specific conditions.

#### Syntax:
```c
if (condition) {
    // Code block executed if the condition is true
} else {
    // Code block executed if the condition is false
}
```
---

#### 2. `if-else if (Ladder)` Statement

The `if-else if` ladder is used to check multiple conditions one by one. It allows you to evaluate more than one condition in a sequence and execute the corresponding block of code for the first true condition. If none of the conditions are true, the final `else` block is executed.

#### Syntax:
```c
if (condition1) {
    // Code block executed if condition1 is true
} else if (condition2) {
    // Code block executed if condition2 is true
} else {
    // Code block executed if none of the conditions are true
}
```

---

#### 3. `Nested if else` Statement

A `nested if else` statement occurs when an `if` or `else` block contains another `if` or `else` block. This allows you to create more complex decision-making structures by checking conditions within conditions.

#### Syntax:
```c
if (condition1) {
    if (condition2) {
        // Code block executed if condition1 and condition2 are true
    } else {
        // Code block executed if condition1 is true and condition2 is false
    }
} else {
    // Code block executed if condition1 is false
}
```
---

#### 4. `if Only (Without else)` Statement

The `if only` statement is a variation of the `if-else` structure where you only want to execute a block of code if a specific condition is true. If the condition is false, nothing happens, and the program continues to the next statement without executing any `else` block.

#### Syntax:
```c
if (condition) {
    // Code block executed if the condition is true
}
```
---
#### ✅ Final Thoughts

This type of repository will be added to my GitHub as I continue to learn more topics. I hope others find it useful. If you find it useful, feel free to follow me and star the repo! If you notice any **mistakes**, please let me know so I can fix them. I'll be creating new repositories as I learn, so feel free to follow those as well if you want to keep up with my progress.

Email: [mashrafi.mail@gmail.com](mailto:mashrafi.mail@gmail.com)