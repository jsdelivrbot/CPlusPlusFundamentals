<!-- section start -->
<!-- attr: { id:'title', class:'slide-title', hasScriptWrapper:true } -->
# Templates
## Generic types

<div class="signature">
    <p class="signature-course">C++ Fundamentals</p>
    <p class="signature-initiative">Telerik Software Academy</p>
    <a href="http://academy.telerik.com" class="signature-link">http://academy.telerik.com</a>
</div>

<!-- section start -->
<!-- attr: {} -->
# Table of Contents
- Declaring templates
  - Function templates
  - Class templates
  - Variable templates
  - Template specialization
  - Explicit template specialization <!-- TODO -->
- Variadic templates <!-- TODO -->
- Advantages and disadvantages of templates over macros <!-- TODO -->

<!-- section start -->
<!-- attr: { class:'slide-section' } -->
# Declaring templates
## `template<>`

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Declaring templates -->
- Declared using `template<>` specifier
  - Multiple arguments are allowed
  - Each type can be
    - existing type: `int`, `double`, ...
	- `typename`, `class`

```cpp
template <type1 identifier1, type2 identifier2, ...>

template <int identifier>
template <class identifier>
template <typename identifier>
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Declaring templates -->
- Function templates
  - Behave like a family of functions

```cpp
template <typename Type>
Type max(Type a, Type b)
{
	return a > b ? a : b;
}

std::cout << max(3, 7) << '\n';
std::cout << max(3.0, 7.0) << '\n';

std::cout << max(3, 7.0) << '\n'; 
std::cout << max<double>(3, 7.0) << '\n';
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Declaring templates -->
- Class templates
  - Behave like a family of classes

```cpp
template <typename T, int size>
class Array {
	T elements[size];

public:
	T& operator[](int index)
	{
		return this->elements[index];
	}
};

Array<int, 5> myArray;
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Declaring templates -->
- Variable templates (C++14)

```cpp
template<typename T>
constexpr T pi = T(3.141592653589793238462643L);

template<>
constexpr const char* pi<const char*> = "pi";

std::cout << pi<double> << '\n';
std::cout << pi<int> << '\n';
std::cout << pi<const char*> << '\n';
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Declaring templates -->
- Explicit template specialization

```cpp
template<>
bool max<bool>(bool a, bool b)
{
	return a || b;
}
```

<!-- attr: { class:'slide-section demo', showInPresentation:true } -->
<!-- # Declaring templates -->
## Live Demo

<!-- section start -->
<!-- attr: { class:'slide-questions', showInPresentation:true } -->
<!-- # Templates -->
## Questions
