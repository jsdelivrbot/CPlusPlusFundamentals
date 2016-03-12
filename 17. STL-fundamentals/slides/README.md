<!-- section start -->
<!-- attr: { id:'title', hasScriptWrapper:true, showInPresentation:true } -->
# STL fundamentals
## Basic Abstract Data Types

<div class="signature">
   <p class="signature-course">C++ Fundamentals</p>
   <p class="signature-initiative">Telerik Algo Academy</p>
   <a href="http://academy.telerik.com" class="signature-link">http://academy.telerik.com</a>
</div>

<!-- section start -->
<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Table of Contents
- Basic Abstract Data Types
  - List
  - Linked List
  - Stack
  - Queue
- ADTs in STL
  - STL Intro
  - Iterators
  - Vector, list, stack, queue

<!-- section start -->
<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section' } -->
# Abstract Data Types
## Basic Data Structures

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Abstract Data Types -->
- An Abstract Data Type (ADT) is a data type together with the operations, whose properties are specified independently of any particular implementation
  - ADT are set of definitions of operations
  - Can have several different implementations
  - Different implementations can have different efficiency

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Basic Data Structures
- Linear structures
  - Lists: fixed size and variable size
  - Stacks: LIFO (Last In First Out) structure
  - Queues: FIFO (First In First Out) structure
- Trees
  - Binary, ordered, balanced, etc.
- Dictionaries (maps)
  - Contain pairs (key, value)
  - Hash tables: use hash functions to search/insert

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section' } -->
# Lists

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# The List ADT
- Data structure (container) that contains a sequence of elements
  - Can have variable size
  - Elements are arranged linearly, in sequence
- Can be implemented in several ways
  - Statically (using array &rarr; fixed size)
  - Dynamically (linked implementation)
  - Using resizable array

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Static List
- Implemented by an array
  - Direct access by index (fast)
  - Insertion, deletion and resizing are slow operations
- List:

| Index ||  0 |  1 |  2 |  3 |  4 |  5 |  6 |  7 |
|-------||----|----|----|----|----|----|----|----|
| List  ||  2 | 18 |  7 | 12 |  3 |  6 | 11 |  9 |

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Linked List
- Dynamic (pointer-based) implementation
  - Direct access to first/last element
  - No access by index
    - go through all previous elements (slow)
  - Insertion and deletion are fast
  - Resizing – add new element at the endor beginning

|        | 2      | 7      | 4      |   5    | `null` |
|:------:|:------:|:------:|:------:|:------:|
| `head` | `next` | `next` | `next` | `next` |

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section' } -->
# Stacks

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# The Stack ADT
- LIFO (Last In First Out) structure
- Elements inserted (push) at "top"
- Elements removed (pop) from "top"
- Useful in many situations
  - E.g. the execution stack of the program
- Can be implemented in several ways
  - Statically (using array)
  - Dynamically (linked implementation)

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section' } -->
# Queues

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# The Queue ADT
- FIFO (First In First Out) structure
- Elements inserted at the tail (Enqueue)
- Elements removed from the head (Dequeue)
- Useful in many situations
  - Print queues, message queues, etc.
- Can be implemented in several ways
  - Statically (using array)
  - Dynamically (using pointers)

<!-- section start -->
<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section' } -->
# Standard Template Library
## Introduction, Basic ADT Implementations

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# STL Introduction
- Standard Template Library
  - C++ Library
  - Implements a lot of computer science fundamentals
    - Container classes, Algorithms
  - Iterators
  - Mostly template-based
  - Algorithms decoupled from containers through iterators

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # STL Introduction -->
- Containers
  - Data structures, hold collections of elements
  - Different benefits and downsides
  - Implement fundamental Abstract Data Types
    - Sequence, Associative, String, Adaptors...
- Iterators
  - Provide access to container elements
  - Used to "traverse" containers

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # STL Introduction -->
- Algorithms
  - Fundamental algorithms over collections or single
  - Hook up with iterators to access container elements
- Function objects
  - Wrap functions/methods into objects
  - Implement `()` operator – called like functions
  - Called by algorithms and containers to act over elements (elements passed as parameters)

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
<!-- # STL Introduction -->
## Live Demo

<!-- section start -->
<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section' } -->
# STL Iterators
## Mechanism for traversing container elements

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # STL Iterators -->
- "Smart" pointers to objects
- Specific for each container type
  - Each container defines how it's iterators work
- If we have an iterator to one element
  - Increase/decrease it to get the other elements
- Types:
  - Input, Output
  - Forward iterator, Bidirectional iterator
  - Random access iterator

<!-- section start -->
<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section' } -->
# STL Containers
## Fast data structures to store elements

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # STL Containers -->
- Store collections of other objects
- Has methods to access elements
- Types
  - By traversability:
    - Forward – elements ordered, Forward Iterators
    - Reversible – have Bidirectional iterators
    - Random access – have Random access iterators
  - By storage:
    - sequence, adaptors, associative

<!-- section start -->
<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section' } -->
# Basic STL Containers
## Vector, List, Deque, Queue, Stack

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# STL Vector
- Vector (`#include <vector>`)
  - Defined: `template <class T> vector`
  - Sequence, Random Access
  - Stores a sequence of elements in contiguous memory
  - Manages memory effectively
  - Fast at retrieving elements by index and adding elements at the end
  - Slow insertion/deletion in middle or beginning

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # STL Vector -->
- Declaring and initializing a vector

```cpp
#include<vector> // required header

vector<int> numbers;
numbers.push_back(42); // numbers is now {42}
numbers.push_back(13); // numbers is now {42, 13}
int consoleNumber;
cin >> consoleNumber;
numbers.push_back(consoleNumber)
```
- Vector size and is obtained by calling `size()`

```cpp
vector<int> numbers;
numbers.push_back(42);
numbers.push_back(13);
cout << numbers.size(); // prints 2
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # STL Vector -->
- Accessing vector elements
  - Done the same way as with arrays, i.e. `[]`

```cpp
vector<int> numbers;
numbers.push_back(42);
numbers.push_back(13);
cout << numbers[1]; // prints 13
cout << endl;
numbers[1] = numbers[0];
cout << numbers[1]; // prints 42
```
  - Traversing a vector is the same as traversing an array (e.g. with a for loop)
  - Element access does not depend on vector size

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
<!-- # STL vector -->
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# STL (Linked) List
- List (`#include <list>`)
  - Defined: `template <class T> list`
  - Sequence, Reversible
  - Stores a sequence of elements in a doubly-linked list
  - Fast at deletion/insertion anywhere
  - No random access to elements
    - Have to traverse list to get to an item

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # STL (Linked) List -->
- Declaring and initializing alist

```cpp
list<int> numbers;

numbers.push_back(2);
numbers.push_front(1);
numbers.push_back(3);
```
- List size and is obtained by calling `size()`
- List elements can be removed from front and back fast

```cpp
numbers.pop_front();
numbers.pop_back();
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # STL (Linked) List -->
- Accessing list elements
  - `front` and `back` methods provide first and last element access

```cpp
cout << numbers.front();
cout << numbers.back();
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # STL (Linked) List -->
- Accessing list elements
  - Only way to get access to all elements – traversal by iterator

```cpp
list<int>::iterator numbersIterator;
for(numbersIterator = numbers.begin();
  numbersIterator != numbers.end();
  numbersIterator++)
{
  cout << *numbersIterator << endl;
}
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# STL list
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# STL Queue
- Queue (`#include<queue>`)
  - Defined: `template <class T>queue`
  - Sequence Adaptor
  - First in, First outstructure (FIFO)
  - Stores a sequence of elements
  - Provides access only to first element
  - Can remove only at front
  - Can add only at back

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # STL Queue -->
- Declaring and initializing a queue

```cpp
queue<int> q;

q.push(1);
q.push(2);
q.push(3);
```

- Queue size is obtained by calling `size()`
- Queues allow removing elements only from the front of the sequence

```cpp
q.pop();
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # STL Queue -->
- Accessing queue elements
  - `front` and `back` methods provide first and last element access

```cpp
cout << q.front();
cout << q.back();
```
  - Other types of access to queue elements are meaningless
    - The idea of the queue is to restrict access and be FIFO

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
<!-- # STL queue -->
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# STL Stack
- Stack (`#include <stack>`)
  - Defined: `template <class T> stack`
  - Sequence adaptor
  - Last in, First out structure (LIFO)
  - Stores a sequence ofelements
  - Provides access only to last element
  - Can remove or add elements only at back/top

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # STL Stack -->
- Declaring and initializing a stack

```cpp
stack<int> s;

s.push(1);
s.push(2);
s.push(3);
```
- Stack size is obtained by calling `size()`
- Stacks allow removing elements only from the back (top) of the sequence

```cpp
s.pop();
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # STL Stack -->
- Accessing stack elements
  - `top` method provides first element access

```cpp
cout << s.top();
```
  - Other types of access to stack elements are meaningless
    - The idea of the stack is to restrict access and be LIFO

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
<!-- # STL stack -->
## Live Demo

<!-- section start -->
<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-questions' } -->
# Basic ADTs in STL
## Questions
