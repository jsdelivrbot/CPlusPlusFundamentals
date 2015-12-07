<!-- section start -->

<!-- attr: {id: 'title', class: 'slide-title', hasScriptWrapper: true} -->

# Strings and string operations
## `char[]`, `string`

<div class="signature">
    <p class="signature-course">C++ Fundamentals</p>
    <p class="signature-initiative">Telerik Algo Academy</p>
    <a href="http://academy.telerik.com" class="signature-link">http://academy.telerik.com</a>
</div>

<!-- section start -->
<!-- attr: {id: 'table-of-contents'} -->
# Table of Contents

- C style strings
- Strings in C++

<!-- section start -->
<!-- attr: {class: 'slide-section'} -->
# C strings
## `char` arrays

<!-- attr: {} -->
# C strings
- Initialization
  - Specified size
  - Unspecified size

```cpp
char str[60];
char str[] = "This is a C style string.";
```

- Strings are `'\0'` character terminated
- Input / Output
  - `cin`, `cout`, `cin.getline`, ...
  - `scanf`, `printf`, `puts`, ...

<!-- attr: {} -->
# C strings
- Operations
  - find length of a string - `strlen`
  - copy a string - `strcpy`
  - concatenate strings - `strcat`
  - compare strings - `strcmp`

<!-- section start -->
<!-- attr: {class: 'slide-section'} -->
# C++ strings
## `string` class

<!-- attr: {} -->
# C++ strings
- Initialization

```cpp
std::string str;
std::string str = "This is a C++ string.";
```

- Strings are kept by pointer in a wrapper class
- Input / Output
  - `cin`, `cout`, `getline`, ...

<!-- attr: {} -->
# C++ strings
- Operations
  - find length of a string - `.length()`
  - copy a string - `=`
  - concatenate strings - `+`, `+=`
  - compare strings - `<`, `>`, `==`
  - substring - `.substr()`
  - pointer to C array - `.c_str()`

<!-- attr: {hasScriptWrapper: true} -->
# C++ strings
- Similarity to `vector<char>`
  - `.size()`
  - `.push_back()`
  - `.pop_back()`
  - `.back()`
  - `[]`

<!-- section start -->
<!-- attr: { class: 'slide-questions'} -->
# Strings and string operations
## Questions
