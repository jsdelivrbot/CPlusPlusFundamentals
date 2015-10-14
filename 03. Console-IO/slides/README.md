<!-- section start -->

<!-- attr: {id: 'title', class: 'slide-title', hasScriptWrapper: true} -->

#   Input and Output in C++
##  Standard input/output, Streams, Files
<div class="signature">
    <p class="signature-course">C++ Fundamentals</p>
    <p class="signature-initiative">Telerik Algo Academy</p>
    <a href="http://academy.telerik.com" class="signature-link">http://academy.telerik.com</a>
</div>

<!-- section start -->
<!-- attr: {id: 'table-of-contents'} -->
# Table of Contents

*   Using standard I/O with **C++**
    *   `std::cout` for reading
    *   `std::cin` for printing
    *   Printing and reading different data types
    *   Printing to formatting strings
        *   Using `ostringstream`
*   **C-style** standard I/O
    *   `printf()` for printing
    *   `scanf()` for reading
    *   Printing to formatting strings
        *   Using `fscanf()`
*   Formatting strings
*   Redirecting the standard I/O

<!-- section start -->

#   Using Standard IO with C++
##  `cout` and `cin`

#   Using Standard IO with C++

*   C++ introduces operators for reading and printing to the standard IO (CMD/Terminal)
    *   Printing:
        ```cpp
        cout << "Hello! My name is " << name << " and I am " << age << " years old" << "\n";
        ```
    *   Reading:
        ```cpp
        string::name;
        int age;
        cout << "Your name is ";
        cin >> name;
        cout << "Your age is ";
        cin >> age;
        ```

#   Using C-style IO
##  `printf()` and `scanf()`

#   Using C-style IO

*   C has methods for using the standard IO
    *   Printing:
        ```cpp
        printf("Hello! My name is %s and I am %d years old\n", name.c_str(), age );
        ```
    *   Reading:
        ```cpp
        string::name;
        int age;
        cout << "Your name is ";
        cin >> name;
        cout << "Your age is ";
        cin >> age;
        ```

<!-- attr: {class: 'slide-questions', id:"questions"} -->
#   Input and Output in C++
##    Questions
