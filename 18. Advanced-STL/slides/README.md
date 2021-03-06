<!-- section start -->
<!-- attr: { id:'title', class:'slide-title', hasScriptWrapper:true } -->
# Advanced STL
## Containers, iterators and algorithms

<div class="signature">
   <p class="signature-course">C++ Fundamentals</p>
   <p class="signature-initiative">Telerik Algo Academy</p>
   <a href="http://academy.telerik.com" class="signature-link">http://academy.telerik.com</a>
</div>

<!-- section start -->
<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Table of Contents
- Containers
  - Concepts
  - Priority queue
  - (multi)Sets, (multi)Maps
- Iterators
  - Concepts
  - STL container iterators
  - Insertion iterators and iterators on streams

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Table of Contents -->
- Algorithms
  - Heap creation
  - Sorting, Operations on sorted containers
  - Searching
  - Combinatorial
- Functors
  - Concepts
  - Creating and using Generators, Unary and Binary Functors

<!-- section start -->
<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section' } -->
# Containers
## STL Container Architecture, Advanced Containers

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Containers -->
- STL Containers represent collections of objects
  - Going through objects is called iterating
- Several base concepts &amp; refinements for all STL containers:
  - Container
  - Forward Container, Reversible Container
  - Random Access Container
- Concepts – definitions, not implementations
- Refinements – extensions/specific definitions

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Containers -->
- Containers also fall into one of two groups:
  - Sequences
  - Associative containers
- Actual data structures are models of the above
  - i.e. implementations of the Concepts
  - e.g. a vector is a model of a Sequence

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Containers – Pseudo-Diagram

<img src="imgs/container-diagram.png">

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Containers -->
- STL Containers are templates
  - A template is filled compile-time with type data
  - i.e. a STL container is defined once
    - compiled into different classes
    - depending on its passed template parameters
  - E.g. the container class `vector` is defined in the header `<vector>` once, but we can:
    - use a `vector<int>`, to store integers
    - use another `vector<string>` to store strings, etc.

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Containers -->
- `Container` concept
  - Stores elements, element lifetime ends when container lifetime ends
  - No guarantees on element order
- `Forward Container` concept (refinement of `Container`)
  - Elements have some order
  - Order won't change as a side effect of going through (iterating) the elements
  - Guarantees "forward direction" of iteration

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Containers -->
- `Reversible Container` concept (refinement of `Forward Container`)
  - Guarantees two (opposite) directions of iteration – "forward" and "backward"
- `Random Access Container` (refinement of `Reversible Container`)
  - Guarantees (amortized) constant time access to any contained element
  - i.e. can access an element, without iterating other elements to reach it

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Sequences
- `Sequences` are refinements of `Forward Containers`
  - Have a definite ordering of elements
  - Have variable size – elements can be added indefinitely, at specific positions
- Sequence models:
  - `vector`
  - `list`
  - `deque`

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Associative Containers
- `Associative Containers` are `Containers`
  - Similar to `Sequences`, but cannot add elements at specific positions
  - Each element has a key and a value
  - Elements are accessed by their key
  - Elements can be added indefinitely, but the container decides their "position"
- Several types (to be discussed later)

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Container Adaptors
- Adaptors limit access to containers
  - Fundamental for FIFO and LIFO data structures
- Adaptor models:
  - `queue`
  - `stack`
  - `priority_queue`

<!-- section start -->
<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section' } -->
# Advanced Container Models
## priority\_queue, map, set, multimap, multiset, Usage and Examples

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Priority Queue
- The `priority_queue` is a `queue`
  - Enables insertion of elements
  - Enables access/removal of "top" element
  - "First" element is referred to as "top" element
  - Guarantees the top element is the largest
    - Biggest for numbers (by default)
    - Last lexicographically for strings (by default)
    - Or according to a comparer
    - Or overloaded operators for other types

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Priority Queue -->
- Priority Queue (`#include<queue>`)
  - `priority_queue<T, Sequence = vector<T>, Compare = less<T> >`
  - `T` has to be able to be compared by `Compare`
  - Fast at accessing the top element (1)
  - Fast at inserting elements (log n)
  - Good at removing top element (log n)
  - Uses a container for storing elements (default: `vector`)

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Priority Queue -->
- Declaring and initializing a priority queue:

```cpp
#include<queue> // required header

priority_queue<int>numsBySize;
numsBySize.push(1);
numsBySize.push(3);
numsBySize.push(2);

priority_queue<string>stringsByLex;
stringsByLex.push("a");
stringsByLex.push("c");
stringsByLex.push("b");
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Priority Queue -->
- Retrieving top element:

```cpp
numsBySize.top(); // returns 3, does not remove it
```
- Removing top element:

```cpp
stringsByLex.pop(); // removes "c"
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Priority Queue Usage
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Problems Solved with Priority Queues
- Finding shortest path in weighted graphs (Dijkstra's algorithm uses priority queues)
- Getting largest **N** items from several sorted lists
- Compression in Huffman coding
- Heapsort (STL priority queue uses a heap)
- Simple problem:
  - Given a sequence of numbers, eachtime a numbers is `0`, print the largest number so-far

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Simple Problem Solved with a Priority Queue
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Associative Container Models
- Several categories
  - Simple, Sorted, Unique
- Simple Associative Containers
  - Elements are their own keys
- Pair Associative Container
  - Values are in the form (key, element)
- Sorted Associative Containers
  - Elements ordered, most operations are log(n)
- Unique Associative Containers
  - No duplicate keys are allowed


<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Set
- Categories: `Sorted`, `Simple`, `Unique`
- Elements are their own keys
  - E.g. if you want to check if an element is contained, you query with the (copy) of the element
- Guarantees no duplicate elements
- Extracting elements one by one:
  - Yields the elements in ascending order

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Set -->
- Set (`#include<set>`)
  - `set<Key, Compare = less<Key>, Alloc = new>`
  - `Key` has to be comparable by `Compare`
  - Fast checking if an element is contained (log n)
  - Fast inserting elements (log n)
  - Fast deleting (erasing) elements (log n)
  - Deleting elements does not invalidate iterators to other elements

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Set -->
- Declaring and initializing a set:

```cpp
#include<set> // required header

set<int> uniqueNums;
uniqueNums.insert(3);
uniqueNums.insert(7);
uniqueNums.insert(2);
uniqueNums.insert(7);
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Set -->
- Set elements can be accessed through iterator (and consequently iterated in ascending order)

```cpp
uniqueNumbers.begin(); // iterator to first element
```
- Set elements can be removed
  - By iterator

```cpp
uniqueNums.erase(uniqueNums.begin());
```
  - By value

```cpp
uniqueNums.erase(2);
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Set Usage
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Problems Solved with Sets
- Any problems including mathematical set operations
  - Unions, intersections, etc.
- Set Cover Problem
- Simple problem:
  - You are given a sequence of numbers. Print all numbers in the sequence, without printing the same number more than once

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Simple Problem Solved with a Set
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Multiset
- Same as a `set`, without the `Unique` category
  - i.e. there can be repeating elements
  - All other operations &amp; properties are the same
- Multiset (`#include <set>`)
  - `multiset` (same template parameters as `set`)
  - Declaring and initializing a `multiset`

```cpp
#include<set> // required header

multiset<int> nums;
nums.insert(2);
nums.insert(2); // nums contains: 2, 2
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Multiset Usage
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Map
- Categories: `Sorted`, `Unique`, `Pair`
- Each element has a key
  - Accessing elements is done through the key
- Guarantees no duplicate elements
- Element keys are iterated in increasing order
- Often pictured as an array, the indices of which can be any type – number, string or even some class

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Map -->
- Map (`#include<map>`)
  - `map<Key, Data, Compare = less<Key>, Alloc = new>`
  - `Key` must be comparable by `Compare`
  - Fast at accessing elements by key (log n)
  - Fast at deleting elements by key (log n)
  - Fast at inserting elements by key (log n)
  - Values are of the type `std::pair<Key, Data>`
    - Iterators will point to `std::pair` objects

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Map -->
- Declaring and initializing a map:

```cpp
#include<map> // required header

map<char*, int> peopleAges;

peopleAges["Joro"] = 22;
peopleAges.insert(pair<char*, int>("Petya", 20));
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Map -->
- Accessing element by key:

```cpp
peopleAges["Petya"];
peopleAges["Petya"]++;
```

- Removing element by key:
```cpp
peopleAges.erase("Joro");
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Map Usage
## Live Demo


<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Problems Solved with Maps
- Maps have similar efficiency as hash-tables, but keep elements ordered
- Many compression algorithms use maps/hash-tables
- Several cryptographic attacks use maps/hash-tables
- Simple Problem:
  - You are given a sentence of words. Count how many times each word occurs in the text.

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Simple Problem Solved with a Map
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Multimap
- Same as a `map`, without the `Unique` category
  - i.e. there can be repeating elements
  - No `[]` operator, as there can be multiple values, corresponding to the same key
  - All other operations &amp; properties are the same
  - Most element access is done through iterators

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Multimap -->
- Multimap(`#include<map>`)
  - `multimap` (same template parameters as `map`)
  - Declaring and initializing a multimap

```cpp
#include<map> // required header

multimap<string, string> personNicks;

personNicks.insert({"George", "Joro"});
personNicks.insert({"George", "Gosho"});
personNicks.insert({"George", "Joro"});
personNicks.insert({"George", "Gopi"});
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Multimap Usage
## Live Demo

<!-- section start -->
<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section' } -->
# Iterators
## The Way of STL Element Access

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Iterators -->
- Iterators are a pattern in STL
- Enable access to container elements
  - For almost any container's elements
- Most container iterators have similar mechanics to pointers
  - Can be incremented, to point to next element
  - Can be dereferenced, to get element value
  - Can use `->` operator to access element members
  - Can be `const`

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, style:'font-size:42px' } -->
<!-- # Iterators -->
- Each container defines its own iterator type
  - A class inside the container's class
- Syntax to access iterator type

```cpp
container_type<template_parameters...>::iterator
```
- Example for an iterator of a `vector<int>`:

```cpp
vector<int> numbers;
numbers.push_back(1);
numbers.push_back(2);

vector<int>::iteratornumsIter = numbers.begin();
cout << *numsIter << endl;
numsIter++;
cout << *numsIter << endl;
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Iterators: Simple Example
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section' } -->
# Iterators and Containers
## Syntax, Usage, Examples

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Iterators -->
- Several types of iterator Concepts
  - with differing purposes and functionality
- `Output Iterator`
  - Supports storing values
    - i.e. writing values to the pointed element
    - i.e. mutable
  - Supports incrementing
  - Other operations are not necessarily supported
    - i.e. no guarantee on dereferencing, comparing…

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Iterators -->
- `Input Iterator`
  - Supports dereferencing
  - Supports incrementing
  - Does not necessarily support storing values
    - i.e.writing values to the pointedelement
    - i.e. not necessarily mutable
  - Opposite of `Output iterator`, in some sense

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Iterators -->
- `Forward Iterator`
  - Refinement of `Input` &amp; `Output` iterators
  - Reflects the idea of a linear sequence of values
    - Allows multipass algorithms
  - Implementations can be mutable/immutable
  - Can only increment, i.e. can't "go back", only "forward"

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Iterators -->
- `Bidirectional Iterator`
  - Refinement of `Forward Iterator`
  - Can be both incremented and decremented
    - i.e. allows "going back"

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Iterators -->
- `Random Access Iterator`
  - Refinement of `Bidirectional Iterator`
  - Constant-time moving in arbitrarily-sized steps
    - i.e. can increment/decrement with any value, not just 1 step like other iterators
  - e.g. increment a random access iterator 5 steps:

```cpp
vector<int>::iteratoriter = someVector.begin();
iter += 5;
// using vector iterator, as it is
//      a Random Access Iterator
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Iterators and Containers -->
- Most container operations require iterators or return iterators
  - `erase()`, `find()`, `insert()` to name a few
- Some containers require iterators
  - To access elements in a meaningful way
  - `list`, `set`, `multiset`, `multimap`
- Iterating over maps/sets
  - Gives the elements in order
- Note&#58; Container iterators are at least `Forward`

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Iterators and Containers -->
- Iterating a container
  - i.e. go through container elements with iterator
- Instantiate an iterator of the container's type
- Set it to the beginning (usually `.begin()`)
- Start a loop, incrementing the iterator
  - Stop if the iterator equals `.end()` of container
    - `end()` – iterator pointing "after the last element"
  - At each step, the iterator will point to an element (unless you've reached `end()`)

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Iterators and Containers -->
- Iterating a `set<string>`
  - Result: strings in lexicographical order

```cpp
set<string> orderedStrings;

orderedStrings.insert(...);

for(set<string>::iterator it = orderedStrings.begin();
  stringsIter != orderedStrings.end();
  stringsIter++)
{
  cout << (*stringsIter) << endl;
}
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Iterating Over Containers
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Iterators and Containers -->
- Don't overuse iterators
  - Especially for `Random Access Containers`
- `vector` and `deque` support the `[]` operator
  - For both, `[]` does fast pointer arithmetic
  - Faster to traverse by index, than by iterator

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Iterators and Containers -->
- Iterators are the standard link between data structures and algorithms in STL
  - Some algorithms will return results by iterator
  - You will have to iterate the results
- The power of iterators:
  - Separate containers from algorithms
  - Any algorithm can work on any container
    - But they don't need to know about each other
    - As long as both understand iterators

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Iterators and Containers -->
- Simple problem: You are given asentence and a word contained in that sentence.
  - Show the positions at which the word is (first word is position 0, second position 1, etc.)

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Using Iterators to Take Advantage of Container Operations
## Live Demo

<!-- section start -->
<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section' } -->
# Insertion &amp; Stream Iterators
## ostream/istream iterators, front/back insertion

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, style:'font-size:42px' } -->
<!-- # Insertion &amp; Stream Iterators -->
- STL has built-in iterators for input/output
  - `Input` &amp; `Output` iterator implementations
  - `#include<iterator>`
- Stream iterators
  - Provide formatted read/write access to streams
  - `ostream_iterator`, `istream_iterator`
- Insertion iterators (`Output` iterators)
  - Attach to `Sequences` and insert when written to
  - `insertion_iterator`, `front_insertion_iterator`, `back_insertion_iterator`

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Insertion &amp; Stream Iterators -->
- `ostream_iterator<T, ...>`
  - `T` is the data type to write to the stream
  - Other template parameters <!-- info here -->
  - Initializing with a stream and output separator:

```cpp
ostream_iterator<int> coutIterator(cout, ", ");
```
  - Writing values

```cpp
*coutIterator = 5; // equivalent to cout << 5 << ", ";
                   // stream advances to next position
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# `ostream_iterator` Basic Usage
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Insertion &amp; Stream Iterators -->
- `istream_iterator<T, ...>`
  - Initializing with a stream:

```cpp
stringstream ss;
ss.str("5 2 3");
istream_iterator<int> ssIterator(ss);
```
  - Initializing without a stream
    - creates an "End of Stream" iterator type

```cpp
istream_iterator<int> intEOS;
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Insertion &amp; Stream Iterators -->
  - Reading (and printing) values to end of stream

```cpp
while(ssIterator != intEOS)
{
  cout << (*ssIterator) << " ";
           // getting current value
  ssIterator++; // advance to next value
}
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# `istream_iterator` Basic Usage
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, style:'font-size:40px' } -->
<!-- # Insertion &amp; Stream Iterators -->
- `insert_iterator<Container>`
  - Container must support `insert()`
  - Initialize by container instance and iterator in it

```cpp
list<string> words;
words.insert("one");
words.insert("three");
list<string>::iteratorwordsMiddle = words.begin();
wordsMiddle++;
insert_iterator<list<string>> wordInserter(words, wordsMiddle);
```
  - Inserting values is just writing to the element, pointed by the iterator

```cpp
*wordInserter= "hello";
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Insertion &amp; Stream Iterators -->
- `front_insert_iterator` &amp; `back_insert_iterator`
  - Modifications of `insert_iterator`
  - Insert only at front/back of a container
    - Require container to support `push_front` or `push_back`, respectively
  - Initialized by container:

```cpp
list<string> words;
front_insert_iterator<list<string>> frontInserter(words);
back_insert_iterator<list<string>> backInserter(words);
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Insertion Iterators: Basic Usage
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Pointers and Iterators
- Pointers can be implicitly converted to `Random Access Iterators`
  - Since `Random Access iterators` use the same mechanics to move between elements
  - E.g. algorithms using Random Access Iterators can be executed on arrays
    - You just pass pointers to the array/elements in the array

<!-- section start -->
<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section' } -->
# Common STL Algorithms
## Sorting, Searching, Mutating, Heaps, Combinatorics, etc.

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Common STL Algorithms -->
- The STL has a wide range of built-in algorithms, in several categories
  - Non-mutating (searching, counting, etc.)
  - Mutating (removing, rotating, swapping, etc.)
  - Sorting
  - Heap operations (make heap, push heap, etc.)
  - Combinatorial (next/previous permutation)
  - Set, comparison, numeric, min/max operations

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Common STL Algorithms -->
- Some common principles used by algorithms
  - Algorithms on ranges take them as iterators
    - In the form `[first, last)`, i.e. last is non-inclusive
  - Inserting a new element at an iterator
    - Pushes any existing element at that iterator forward (i.e. to the next iterator position)

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Searching, Counting, Matching
- `find(first, last, value)`
  - Returns 1stiterator, pointing to same `value`
  - If no such iterator exists – returns `last`
- `count(first, last, value)`
  - Returns the number of elements, equal to `value`
- `equal(first1, last1, first2)`
  - Checks if the range `[first1, last)` is element-by-element equal to the range `[first2, first2 + (last1 – first1))`

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
<!-- # Searching, Counting, Matching -->
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, style:'font-size:42px' } -->
# Mutating Algorithms
- `copy(first, last,result)`
  - Copies the `Input Iterator` range `[first, last)`
  - Into the `Output Iterator` result
- `fill(first, last, value)`
  - Sets all elements in the range tovalue
- `swap_ranges(first, last, first2)`
  - Exchanges the range `[first1, last)` with the range `[first2, first2 + (last1 – first1))` and returns the element after the second range

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
<!-- # Mutating Algorithms -->
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Sorting Algorithms
- `sort(first, last)`
  - Sorts the `Random Access Iterator` range in ascending order
- `stable_sort(first, last)`
  - Same as sort, but keeps relative ordering of equal elements
  - Potentially a bit slower than sort in its worst case

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
<!-- # Sorting Algorithms -->
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, style:'font-size:38px' } -->
# Heap Operations
- **Note**: STL Heaps are what `priority_queue` uses. The first/top element is largest, it has 2 child elements which are smaller, they are first/top elements of their own heaps, etc. All STL Heap operations use `Random Access Iterators`
- `make_heap(first, last)`
  - Makes the range into a heap
- `push_heap(first, last)`
  - Assumes `[first, last - 1)` is a heap
  - The element at `last - 1` is placed in the heap
- `pop_heap(first, last)`
  - Assumes `[first, last)` is a heap, removes top

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Heap Operations, a.k.a. How to Make a Priority Queue
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
# Combinatorial Algorithms
- `next_permutation(first, last)`
  - Transforms the `Bidirectional Iterator` range into the lexicographically next permutation of the elements. If the last permutation has already been reached, transforms into the first permutation (i.e. sorts ascending)
- `prev_permutation(first, last)`
  - Same as `next_permutation`, but transforms into the previous permutation

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Permutation Algorithms
## Live Demo

<!-- section start -->
<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section' } -->
# Functors
## Injecting Custom Logic Into Containers and Algorithms

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Functors -->
- A Function Object (Functor) is anything, which can be called as a function
  - A function is a functor
  - A function pointer is a functor
  - A class/struct, which overloads the `()` operator
- Several Concepts for Functorsin STL
  - Generator
  - Unary Function, Predicate
  - Binary Function, Binary Predicate

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Functors -->
- Generator – called with no arguments
- Unary Function – receives a single argument
- Binary Function – receives two arguments
- Predicate – Unary Function, which returns `bool`
- Binary Predicate – Binary Function, which returns `bool`

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, style:'font-size:40px' } -->
<!-- # Functors -->
- Defining a Binary Predicate for a "greater than" relation
  - As a function:

```cpp
bool greaterThan(int a, int b)
{
  return a > b;
}
```
  - As a class with `operator()`

```cpp
struct GreaterThan
{
  bool operator()(int a, int b)
  {
    return a > b;
  }
};
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Functors -->
- Advantages to picking the class/struct definition
  - Can keep object state
    - e.g. count number of comparisons, calculate sum and average of arguments, etc.
  - Container template parameters need to be types
    - struct/class create types, while simply taking a function name will give an error

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Functors -->
- Most containers and algorithms take `Functors`:
  - Algorithms take `Functor` objects
  - Containers take `Functor` types (template args)
- Containers and Algorithms
  - Have default behavior, described by functors
  - Custom behavior is added through new functors
    - E.g. different ordering rules for a `set`/`map`
    - Or different ordering rules for the sort algorithm

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Functors -->
- Example: Using a `Functor` to order a `set`'s elements in descending order

```cpp
struct greaterThan
{
  bool operator()(int a, int b)
  {
    return a > b;
  }
};

set<int, greaterThan> nums;
nums.insert(...);

for(int el : nums)
  cout << el << endl; // elements in descending order
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Functors: Change Container Ordering
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, style:'font-size:40px' } -->
<!-- # Functors -->
- Example: Using a `Functor` to compare ranges of doubles by arbitrary epsilon, instead of absolutely:

```cpp
struct EqualEpsilon {
  double epsilon;
  EqualEpsilon(double eps) {
    this->epsilon = eps;
  }
  bool operator()(double a, double b) {
    return abs(a - b) < this->epsilon;
  }
};

list<double> range1, range2;
// fill values
equal(range1.begin(), range1.end(),
  range2.begin(),
  EqualEpsilon(0.1)); // will compare by epsilon 0.1
```

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Functors: Arbitrary Epsilon for Equal Algorithm
## Live Demo

<!-- attr: { hasScriptWrapper:true, showInPresentation:true } -->
<!-- # Functors -->
- STL already has a lot of the common required functions defined, e.g.:
  - `greater<T>`
  - `less<T>`
  - `equal_to<T>` and `not_equal_to<T>`
  - `plus<T>` and `minus<T>`, etc.
  - A lot of others – use them for simple customizations, like changing ordering
- Custom `Functor` scan also be used to use sets/maps with your own classes

<!-- attr: { hasScriptWrapper:true, showInPresentation:true, class:'slide-section demo' } -->
# Examples of Functor Customizations in STL
## Live Demo

<!-- section start -->
<!-- attr: { class:'slide-questions', showInPresentation:true } -->
<!-- # Advanced STL -->
## Questions
