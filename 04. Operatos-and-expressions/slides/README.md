<!-- section start -->

<!-- attr: {id: 'title', class: 'slide-title', hasScriptWrapper: true} -->

#   Data Types and Variables
##    Numbers, strings and stuff
<div class="signature">
    <p class="signature-course">C++ Fundamentals</p>
    <p class="signature-initiative">Telerik Algo Academy</p>
    <a href="http://academy.telerik.com" class="signature-link">http://academy.telerik.com</a>
</div>

<!-- section start -->
<!-- attr: {id: 'table-of-contents'} -->
#   Table of Contents

*   Logical operators
    *   `||`, `&&`, `!`
*   Comparison operators
    *   `>`, `>=`, `<`, `<=`, `==`, `!=`
*   Bitwise operators
    *   `|`, `&`, `~`, `^`, `<<`, `>>`
*   Other operators
    *   Arithmetic operators
    *   Assignment operators
*   Operator priority

<!-- section start -->

<!-- attr: {class: 'slide-section', id: 'operators'} -->
#   Operators in C++
##    Arithmetic, Logical, Comparison, Assignment, etc...


#   What is an Operator?

*   Operator is an operation performed over data at runtime
    *   Takes on or more arguments (operands)
    *   Produces a new value
*   Operators have precedence
    *   Precedence defines which operation will be evaluated first
*   Expressions are sequences of operators and operands that are evaluated to a single value

#   Operators in C++

*   Operators in C++
    *   **Unary** operators - take one operand
    *   **Binary** operators- take two operands
    *   The **Ternary** operator (`?:`) - takes three operands
*   Except for the assignment operators, all binary operators are left-associative
*   The assignment operators and the ternary operator (?:) are right-associative

<!-- attr: {style: 'font-size:42px'} -->
#   Categories of Operators in C++

| Category             | Operators                 |
| -------------------- | ------------------------- |
| Arithmetic           | `+ - * / % ++ --`         |
| Logical              | `&& ^ !`                  |
| Binary               | `& ^ ~ << >>`             |
| Comparison           | `== != < > <= >=`         |
| Assignment           | `= += -= *= /= &= ^= >>=` |
| String concat        | `+`                       |
| Other                | `. [] () ?: new`          |

<!-- section start -->

<!-- attr: {class: 'slide-section', id: 'arithmetic-operators', hasScriptWrapper: true} -->
#   Arithmetic Operators <!-- .element: style="margin-top: 90px" -->

<img src="imgs/slide-section-arithmetic-operators.jpg" class="slide-image" style="height: 380px; position: relative; border-radius: 15px; border: 3px solid lightblue" />

#   Arithmetic Operators

*   Arithmetic operators `+`, `-`, `*` are as in math
*   Division operator `/`
    *   On **integers** returns **integer** (without rounding) or **exception**
    *   On **real numbers** returns **real number**,  **inf** or **nan**
*   Remainder operator `%` returns the remainder from division of integers
*   The `++`operator increments a variable with `1`

<!-- attr: { hasScriptWrapper: true} -->
#   Arithmetic Operators - Example

*  _Example:_ Perimeter and area of a square

```cpp
int squarePerimeter = 17;
double squareSide = squarePerimeter / 4.0;
double squareArea = squareSide * squareSide;
cout << squareSide << endl; //prints 4.25

cout << squareArea << endl; // prints 18.0625
```
<!-- .element: style="font-size:1.05rem" -->

*   _Example:_ Arithmetic operators with integer numbers

```cpp
int a = 5;
int b = 4;
cout << a + b << endl; //prints 9
cout << a + b++ << endl; //prints 9
cout << a + b << endl; // prints 10
cout << a + (++b) << endl; //prints 11
cout << a + b << endl; // prints 11

cout << 12 / 3 << endl; // 4
cout << 11 / 3 << endl; // 3
```
<!-- .element: style="font-size:1.1rem" -->

<!-- attr: { hasScriptWrapper: true} -->
#   Arithmetic Operators - Example

*   _Example:_ Arithmetic operators with floating-point numbers

```cpp
cout << 11.0 / 3 << endl; // prints 3.666666667
cout << 11 / 3.0 << endl;; // prints 3.666666667
cout << 11 % 3 << endl;;   // prints 2
cout << 11 % -3 << endl;;  // prints 2
cout << -11 % 3 << endl;;  // prints -2
```

*   _Example:_ Arithmetic operators resulting to `inf` or `nan`

```cpp
cout <<1.5 / 0.0<< endl;;  // prints inf
cout <<-1.5 / 0.0<< endl;; // prints -inf
cout <<0.0 / 0.0<< endl;;  // prints nan

int x = 0;
cout << 5 / x << endl;; // throws exception
```

<!-- attr: {class: 'slide-section'} -->
#   Arithmetic Operators
##    Live Demo

<!-- section start -->

<!-- attr: {class: 'slide-questions', id:"questions"} -->
#   Data Types and Variables
##    Questions
