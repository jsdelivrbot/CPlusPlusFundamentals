<!-- section start -->
<!-- attr: {id: 'title', class: 'slide-title', hasScriptWrapper: true} -->
# Constants and constant expressions
## `const`, `constexpr`

<div class="signature">
    <p class="signature-course">C++ Fundamentals</p>
    <p class="signature-initiative">Telerik Algo Academy</p>
    <a href="http://academy.telerik.com" class="signature-link">http://academy.telerik.com</a>
</div>

<!-- section start -->
<!-- attr: {id: 'table-of-contents'} -->
# Table of Contents

- Constants
  - Initialization
  - Usage
  - Simple compile time calculations
- Constant expressions
  - Initialization
  - Usage
  - Complex compile time calculations

<!-- section start -->
<!-- attr: {class: 'slide-section'} -->
# Constants
## Compile time evaluation

<!-- attr: {hasScriptWrapper: true} -->
# Constants
- Initialization
  - Like a variable with the `const` keyword
  - Value must be given

```cpp
// valid
const int MAXN = 1000;
const double PI = 3.141592;
const std::vector<int> numbers { 7, 42, 25, 9 };

// invalid
const int n;
const char c;
```

<!-- attr: {hasScriptWrapper: true} -->
# Constants
- Where can it be used

```cpp
int* const pointer = ...;
const int* pointer = ...;
const int* const pointer = ...;

bool operator<(const type &A, const type &B) const
{
	...
}
```

<!-- section start -->
<!-- attr: {class: 'slide-section'} -->
# Constant expressions
## Compile time evaluation

<!-- attr: {} -->
# Constant expressions
- Initialization
  - with the `constexpr` keyword
  - functions can also be defined as `constexpr`
    - restricted to one statement in C++11
	- can have multiple statements in C++14

<!-- attr: {} -->
# Constant expressions

```cpp
constexpr int five()
{
	return 5;
}

int A[five()]; // valid since C++11

// valid only in C++14
constexpr int factorial(int n)
{
	if (n == 0) return 1;
	return n * factorial(n - 1);
}
```

<!-- section start -->
<!-- attr: { class: 'slide-questions'} -->
# Constants and constant expressions
## Questions
