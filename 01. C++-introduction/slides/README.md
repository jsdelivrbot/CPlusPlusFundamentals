<!-- section start -->

<!-- attr: {id: 'title', class: 'slide-title', hasScriptWrapper: true} -->

#   C++ Introduction
##    What is C++, Features,  Compilers, IDEs
<div class="signature">
    <p class="signature-course">C++ Fundamentals</p>
    <p class="signature-initiative">Telerik Algo Academy</p>
    <a href="http://academy.telerik.com" class="signature-link">http://academy.telerik.com</a>
</div>

<!-- section start -->
<!-- attr: {id: 'table-of-contents'} -->
#   Table of Contents

*   What is C++?
  *   History, Concepts & Philosophy, Standarts
*   C++ Basic Program Structure
  *   Entry point, libraries, namespaces, etc...
*   C++ Compilers and IDEs
  *   Code::Blocks
  *   Visual Studio
  *   ViM
*   C++ Features
  *   C libs, OOP, Templates, Exceptions, Overloads

<!-- section start -->
<!-- attr: {id: 'what-is-cpp', class: 'slide-section'} -->
#   What is C++?
##    Fast, Mid-level, Multi-paradigm Language


#   What is C++?

*   **General purpose** programming language
  *   Any field of application - _science_, _business_, etc...
*   Compiles **to binary**
  *   Code directly executed on the hardware
*   Statically typed
  *   All data is in **predefined forms** (data types)
  *   Data is represented in variables of data types
  *   A variable is of only 1 data type through its lifespan

#   What is C++ (cont.)?

*   Multi-paradigm
  *   Supports **procedural programming** (as in C)
  *   Supports **object-oriented** programming
  *   Some **functional programming** in C++11 (latest)
*   Created by [Bjarne Stroustrup](http://www.stroustrup.com/)
  *   Originally _"C with Classes"_, later renamed
  *   Built over pure C, not fully compatible though

#   C++ Programming Model

*   **Imperative**, **Multi-paradigm** language
*   Programmer can mix and match
  *   **Low-level memory access** (down to each byte)
  *   **Procedural** code (functions, memory pointers, etc.)
  *   **Object-oriented** code (classes, methods, objects, etc.)

#   C++ Philosophy

*   Features immediately useful in the real world
*   Programmers free to pick their own style
*   Allowing useful features
  *   More important than preventing misuse
*   Features you do not use you do not pay for
*   Programmer can specify undefined behavior
*   More at http://en.wikipedia.org/wiki/C++#Philosophy


#   C++ Standarts

*   **C++ 98** - first standardized C++ version
  *   Still massively used today
*   **C++ 03** - minor revision of 98, bug-fixes
*   **C++ TR1** - specification of extensions to be included in next C++ version
  *   Not really a standard
*   **C++ 11** - latest official revision
  *   Many new features and improvements
  *   Lambdas, range-based loops, etc.


<!-- section start -->

<!-- attr: {class: 'slide-section', id: 'cpp-program-structure'} -->
#   C++ Program Structure
##   Entry point, including libraries, termination

#   C++ Program Structure
*   Program entry point
  *   C++ is free form – any ordering of program components is acceptable
  *   C++ needs specific function to start from
*   The main function – entry point of the program
  *   No other function can be named "main"
  *   Can receive command line parameters
*   Termination – main returns, the program stops
  *   The return value of main is the "exit code“
  *   0 means no errors – informative, not obligatory

<!-- attr: {hasScriptWrapper: true} -->
#   C++ Classical "Hello World" Example

* This is a classical "Hello World" example in C++:

```cpp
#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
    cout<<"Hello World!"<<endl;

    return 0;
}
```

<!-- section start -->
<!-- attr: {id: 'questions', class:'slide-questions'} -->

# Introduction to C++
##  Questions
