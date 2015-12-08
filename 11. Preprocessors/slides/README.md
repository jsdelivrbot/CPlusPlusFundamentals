<!-- section start -->

<!-- attr: {id: 'title', class: 'slide-title', hasScriptWrapper: true} -->

# Preprocessors
## `#directive`

<div class="signature">
    <p class="signature-course">C++ Fundamentals</p>
    <p class="signature-initiative">Telerik Algo Academy</p>
    <a href="http://academy.telerik.com" class="signature-link">http://academy.telerik.com</a>
</div>

<!-- section start -->
<!-- attr: {id: 'table-of-contents'} -->
# Table of Contents
- Source file inclusion
- Macro definitions
  - Predefined macro names
- Conditional inclusions
- Error and warning directives
- Pragma directive

<!-- section start -->
<!-- attr: {class: 'slide-section'} -->
# Source file inclusion
## `#include`

<!-- attr: {hasScriptWrapper: true} -->
# Source file inclusion
- The line is replaced with the contents of a file
  - In default include directory - `<>`
  - Relative to current directory - `""`

```cpp
#include <header>
#include "file"
```

<!-- section start -->
<!-- attr: {class: 'slide-section'} -->
# Macro definitions
## `#define`, `#undef`

<!-- attr: {hasScriptWrapper: true} -->
# Macro definitions
- The preprocessor acts like find-replace

```cpp
#define identifier replacement
#undef identifier
```
```cpp
#define MAXN 1000
int A[MAXN];

#undef MAXN

#define MAXN 1 << 11
std::cout << MAXN << '\n';
// this outputs 111
```

<!-- attr: {hasScriptWrapper: true} -->
# Macro definitions
- They can have parameters

```cpp
#define maxof(a,b) a>b?a:b
// more safe with brackets
#define maxof(a,b) ((a)>(b)?(a):(b))
```

- Special operators - `#` and `##`

```cpp
#define print(x) std::cout<<#x<<" = "<<x<<'\n';
int value = 42;
print(value)

#define glue(a,b) a ## b
std::glue(cou, t << "Hello") << '\n';
```

<!-- attr: {} -->
# Macro definitions
- Predefined macro names
  - `__LINE__` - integer - current line number
  - `__FILE__` - string - the current file
  - `__DATE__` - string - the current date
  - `__TIME__` - string - the current time
  - `__cplusplus` - integer - C++ standard

<!-- section start -->
<!-- attr: {class: 'slide-section'} -->
# Conditional inclusion
## `#if`

<!-- attr: {hasScriptWrapper: true} -->
# Conditional inclusion
- `#ifdef`, `#ifndef` - if (not) defined
- `#if`, `#else`, `#endif`, `#elif`

```cpp
#ifndef __THIS_FILE_IS_INCLUDED
#define __THIS_FILE_IS_INCLUDED

// code

#endif
```

<!-- section start -->
<!-- attr: {class: 'slide-section'} -->
# Error and warning directives
## `#error`, `#warning`

<!-- attr: {hasScriptWrapper: true} -->
# Error and warning directives
- `#error` - aborts compilation and generates error

```cpp
#ifndef __cplusplus
#error You must use C++ compiler
#endif
```

- `#warning` - generates warning

```cpp
#if __cplusplus < 201112
#warning C++11 standard is not enabled
#endif
```

<!-- section start -->
<!-- attr: {class: 'slide-section'} -->
# Pragma directive
## `#pragma`

<!-- attr: {hasScriptWrapper: true} -->
# Pragma directive
- Specifies diverse options to the compiler
  - Compiler specific

```cpp
// include file only once
#pragma once

// disable warning for signed/unsigned mismatch
#pragma warning (disable : 4018)
```

<!-- section start -->
<!-- attr: { class: 'slide-questions'} -->
# Preprocessors
## Questions
