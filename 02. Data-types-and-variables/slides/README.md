<!-- section start -->

<!-- attr: {id: 'title', class: 'slide-title', hasScriptWrapper: true} -->

# Data Types and Variables
##  Numbers, strings and stuff
<div class="signature">
    <p class="signature-course">C++ Fundamentals</p>
    <p class="signature-initiative">Telerik Algo Academy</p>
    <a href="http://academy.telerik.com" class="signature-link">http://academy.telerik.com</a>
</div>

<!-- section start -->
<!-- attr: {id: 'table-of-contents'} -->
# Table of Contents

*   Integer values
    *   `int`, `long`, `short`, etc...
*   Floating-point values
    *   `double` and `float`
*   Char values
    *   `char`
*   String values
    * A sequence of characters

<!-- section start -->

<!-- attr: {class: 'slide-section', id: 'how-computing-works'} -->
#   How Computing Works?
##  Data types, Variables

<!-- attr: {hasScriptWrapper: true} -->
#   How Computing Works?

*   Computers are machines that process data
    *   Data is stored in the computer memory in **variables**
    *   Variables have **name**, **data type** and **value**
*   Example of variable definition and assignment in C++

```cpp
int count = 5;
```

*   Data type
<!-- .element: class="balloon fragment" style="top: 50%; left:4%" -->
*   Variable <!-- .element: class="balloon fragment" style="top: 63%; left:12%" -->
*   Optional value <!-- .element: class="balloon fragment" style="top: 50%; left:30%" -->

#   What is a Data Type?

*   A **data type**
    *   is a domain of values of similar characteristics
    *   defines the type of information stored in the computer memory (in a variable)
*   Examples:
    *   Positive integer numbers: `1`, `2`, `3`, ...
    *   Alphabetical characters: `a`, `b`, `c`, ..., `A`, `B`, `C`, ...
    *   Days of week: `Monday`, `Tuesday`, ...

#   Data Type Characteristics

*   A data type has:
    *   **Name** (C++ keyword)
    *   **Size** (how much memory is used)
    *   **Default value**
*   Example - Integer numbers in C++
    *   **Name**: `int`
    *   **Size**: `32 bits` (4 bytes)
    *   **Default value**: 0

<!-- section start -->

<!-- attr: {class: 'slide-section', id: 'primitive-data-types'} -->
#   Primitive Data Types
##    Representing Integer and Floating-point numbers, and Symbolic values

<!-- attr: { hasScriptWrapper: true} -->
#   Integer Number Types

*   Integer Number types:
*   Represent whole numbers
*   May be signed or unsigned
*   Have range of values, depending on the size of memory used

<!-- attr: {style: 'font-size:38px'} -->
#   Memory for Integer Number Types
| Name             |  Size   | Range               |
| ---------------- | ------- | ------------------- |
| `char`           | 1 byte  | -128 to 127 |
| `unsigned char`  | 1 byte  | 0 to 255  |
| `short`          | 2 bytes | signed: -32768 to 32767
| `unsigned short` | 2 bytes | 0 to 65535 |
| `int`            | 4 bytes | -2147483648 to 2147483647 |
| `unsigned int`   | 4 bytes | 0 to 4294967295 |
| `long`           | 4 bytes | -2147483648 to 2147483647 |
| `unsigned long`  | 4 bytes | 0 to 4294967295 |

#   Integer types - Explained

*   `int` - the most common integer type
*   `char` - symbolic & integer type
*   `short int` (or just `short`)
    *   **Smaller** type than `int`
*   `long int` (or just `long`)
    *   **Same** as `int` on most systems
*   `long long int` (or just `long long`)
    *   **Double** the size of `int` on most systems

<!-- attr: {hasScriptWrapper: true} -->
#   Integer Types - Sizes

*   C++ has no strict data type size on any type
    *   Sizes determined by the system’s data types
    *   i.e. int may be 32, 64 or even 16 bits
*   C++ standards before C++11 only  guarantee:

```cpp
sizeof(char) <= sizeof(short)
sizeof(short) <= sizeof(int)
sizeof(int) <= sizeof(long)
sizeof(long) <= sizeof(long long)
sizeof(char) == 1 //in bytes
```

<div>Generally, using `int` is the **best option**</div><!-- .element: class="fragment" style="text-align: center" -->

#   Integer Types - Char

*   C++ works with **two char types**
    *   One for storing **8-bit numbers**
    *   One for storing **characters**
*   Writing simply `char` invokes the **character type**
*   **To store numbers**
    *   Should write down `signed` or `unsigned`
    *   Tell the compiler we need char for numbers
*   **Note**: don’t store numbers in char, unless you have a very good reason

<!-- attr: {class: 'slide-section', id: 'char-data-type'} -->
#   Using `char`
##    Live Demo

#   Boolean type (`bool`)

*   C++ has a **Boolean type**
    *   `bool` – a value which is either `true` or `false`
    *   Always takes up 1 byte
        *   1 bit would be enough, but memory is addressed per bytes, not per bit
    *   Takes `true`, `false`, or **numeric values**
        *   **Any non-zero numeric value** is interpreted as `true`
        *   **0 (zero)** is interpreted as `false`

<!-- attr: {class: 'slide-section', id: 'bool-data-type'} -->
#   Using `bool`
##    Live Demo
<!-- section start -->

<!-- attr: {class: 'slide-questions', id:"questions"} -->
#   Data Types and Variables
##    Questions
