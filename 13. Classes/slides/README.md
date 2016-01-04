
<!-- attr: {} -->


C++ Classes
Definition, Constructors, Methods, Access Modifiers, Static/Instance members, 
Learning &amp; Development Team
http://academy.telerik.com 
Telerik Software Academy

<!-- attr: {} -->


Table of Contents
Classes and Objects Concept
Defining and Instantiating Classes
Constructors, Initialization &amp; this keyword
Destructors
Methods
Operator Overloading
Static and Instance Members
Classes and const
Pointers to classes

2

<!-- attr: {} -->


Classes and Objects in Programming
Modelling the Real World in Code

<!-- attr: {} -->


Classes and Objects Concept
Classes model real-world objects and define
Attributes (state, properties, fields)
Behavior (methods, operations)
Classes describe the structure of objects
Objects describe particular instance of a class
Properties hold information about the modeled object relevant to the problem
Operations implement object behavior

<!-- attr: {} -->


Classes and Objects in C++
Classes in C++ can have members:
Fields, constants, methods, operators, constructors, destructors, …
Inner types (inner classes, structures)
Access modifiers define the scope of sets of members (scope)
public, private, protected
Members can be
static (class) or specific for a given object


<!-- attr: {} -->


Class Definition Example
Defining a simple class to represent a Jedi
class Jedi
{
public:
    string name;
    int forceMastery;

    Jedi(string name, int forceMastery)
    {
        this-&gt;name = name;
        this-&gt;forceMastery = forceMastery;
    }

    string getName()
    {
        return this-&gt;name;
    } //example continues

<!-- attr: {} -->


Class Definition Example
    void Speak()
    {
        string sentence = "Greetings, I am ";
        switch(this-&gt;forceMastery)
        {
        case 0:
            sentence+="padawan";
            break;
        case 1:
            sentence+="jedi-knight";
            break;
        case 2:
            sentence+="master";
        }
        sentence += " ";
        cout&lt;&lt;sentence + this-&gt;name&lt;&lt;endl;
    }
};

<!-- attr: {} -->


Simple Class Definition
Live Demo

<!-- attr: {} -->


Defining Classes in C++
Syntax, Keywords, Basic Members

<!-- attr: {} -->


Defining Classes in C++
Classes are either defined with the class or struct keyword
Both syntaxes are almost the same
Class definition is in the form:

class ClassName : InheritedClass1, InheritedClass2, ...
{
access-modifier : //e.g. public:
    members       //e.g. int a; or int answer(){return 42;}
access-modifier :
    members
...
};
Don't forget the semicolon after definition

<!-- attr: {} -->


Defining Classes in C++
A class has a name
A class can "inherit" other classes
i.e. reuse their logic and members
A class declares accessibility of its members
Which members are visible from outside
Which members are visible from inheritors
Which members are only visible from inside
These are known as "access modifiers" or "scopes"


<!-- attr: {} -->


Defining Classes in C++
Access modifiers in classes
public: accessible from anywhere outside or inside the class and its inheritors
protected: accessible from inside the class and from its inheritors
private: accessible only from inside the class
If not specified, members of a class are private
If not specified, members of a struct are public
An access modifier affects all members, declared after it up to the next modifier (or up to the end of the class definition)

<!-- attr: {} -->


Defining Classes in C++
Fields are the simplest members of classes
Fields are variables inside the class
Can be of any type, including other classes, or even of the same class
The latter case is usually called a recursive class
Can be initialized on declaration (C++11)
Keep in mind they can be changed by the constructor or other methods
class Person {
public:
    string name; int age = 0;
};

<!-- attr: {} -->


Defining Classes in C++
Creating objects of classes
Usually to use a class, you instantiate an object of that class
E.g. you instantiate a individual of type Person
Note: "instantiate", i.e. we create an instance. We haven't "initialized" it with values yet
Accessing object members
Members are accessed through the "." operator
Person somebody;
somebody.name = "Waspy";
cout&lt;&lt;somebody.name;

<!-- attr: {} -->


Creating Classes &amp; Instantiating Objects
Live Demo

<!-- attr: {} -->


Constructors
Initializing Objects, Calling Constructors

<!-- attr: {} -->


Constructors
Objects need to be initialized before usage
If not, we could get undetermined results
Just like with uninitialized variables
Objects usually can't be initialized by literal:
E.g. can't initializea Person with just a name, or just a number, it needs both to set its age and name
Some classes need even more values 
Some classes need complex initialization logic

Person somebody = "Tony";
Person somebody = 5;
//both of the above are wrong

<!-- attr: {} -->


Constructors
Constructors are special functions, responsible for initializing objects
Declared inside the class
Have same name as the class
Accept parameters like normal functions
Can be overloaded like normal functions
Have direct access to the class members
Don't have a return type
Execute after inline initialization
i.e. if a field has a value at declaration, the constructor can change it


<!-- attr: {} -->


Constructors
Constructor for the Person class


class Person 
{
public:
    string name; 
    int age = 0;
    
    Person(string nameParameter, int ageParameter)
    {
        name = nameParameter;
        age = ageParameter; //changes the 0 value of age
    }
};

<!-- attr: {} -->


Constructors
Constructors can be called in several ways
Parenthesis after identifier, at declaration
Class name, followed by parenthesis
i.e. create a temporary &amp; assign it to an instance
Same as 2), but with "new"
Allocates dynamic memory for objects
Returns a pointer to the memory
Person p("Tony", 22);
Person p = Person("Tony", 22);
Person *p = new Person("Tony", 22);

<!-- attr: {} -->


Basic Constructors
Live Demo

<!-- attr: {} -->


Constructors
Mistaken constructor (ambiguous identifiers)
name and age here hide the class fields
Function variables and parameters are "more local" than global or class variables


class Person 
{
public:
    string name; 
    int age = 0;
    
    Person(string name, int age)
    {
        name = name;
        age = age;
    }
};
These assignments do nothing – they set the parameters to their own values

<!-- attr: {} -->


Constructors &amp; this
The this keyword
Explicitly refers to the current class instance
Used to explicitly point to a instance member
Even if it is hidden by local variables
class Person 
{
public:
    string name; 
    int age = 0;
    
    Person(string name, int age)
    {
        this-&gt;name = name;
        this-&gt;age = age;
    }
};

<!-- attr: {} -->


Constructors &amp; this
More info on the this keyword
Typed pointer to current instance
E.g. for a Person instance named p, this could be expressed as: Person* this = &amp;p;
Can be used in any constructor 
or function (method) inside the class
Recommended way of accessing instance members


don't try to compile that

<!-- attr: {} -->


Using "this" in Constructors
Live Demo

<!-- attr: {} -->


Overloading Constructors
Constructors can be overloaded
class Person {
public:
    string name;
    int age = 0;

    Person(string name, int age)
    {
        this-&gt;name = name;
        this-&gt;age = age;
    }

    Person(string personInfo) //e.g. format: "022Tony"-&gt; Tony, age 22
    {
        this-&gt;age = 100*(personInfo[0] - '0') + 
                    10*(personInfo[1] - '0') + 
                    personInfo[2] - '0';
        this-&gt;name = personInfo.substr(3);
    }
};

<!-- attr: {} -->


Overloading Constructors
Constructor parameters can have default values, just like functions
class Person 
{
public:
    string name; 
    int age;
    
    Person(string name = "Anonymous", int age = 0)
    {
        this-&gt;name = name;
        this-&gt;age = age;
    }
};

<!-- attr: {} -->


Constructor Overloading
Live Demo

<!-- attr: {} -->


Destructors
Destructors are special functions, called when an object is freed from memory
A destructor is usually responsible for:
Cleaning up allocated dynamic memory by the instance
Resetting any changes a constructor could have made outside the instance
Syntax: same as constructor, with a ~ prefix and no parameters

~Person(){ ... }

<!-- attr: {} -->


Destructors
Live Demo

<!-- attr: {} -->


Methods
Functions in Classes

<!-- attr: {} -->


Methods
Methods are functions, belonging to a class
Methods have all the properties of functions
Can accept parameters and be overloaded
Can have default values for parameters
Have return values
Methods have access to other class members
Recommended to use the this pointer
Methods can be accessed through any instance through the "." operator

<!-- attr: {} -->


Methods
class Person
{
public:
    string name;
    int age = 0;

    Person(string name, int age)
    {
        this-&gt;name = name;
        this-&gt;age = age;
    }

    string GetInfo()
    {
        stringstream infoStream;
        infoStream&lt;&lt;this-&gt;name&lt;&lt;", age: "&lt;&lt;this-&gt;age&lt;&lt;endl;
        return infoStream.str();
    }
};

<!-- attr: {} -->


Methods
Live Demo

<!-- attr: {} -->


Operator Overloading
Redefining basic operations for complex classes

<!-- attr: {} -->


Operator Overloading
Classes define new types in C++
Types interact with assignments, function calls and operators
Instances of a new class can also use operators
By defining how operators work on its instances
This is called operator overloading
Syntax

type operator sign (parameters) { /*... body ...*/ } 

<!-- attr: {} -->


Operator Overloading
Example overloading + for 2D vectors
class Vector2D
{
public:
    double x;
    double y;

    Vector2D(double x = 0, double y = 0)
    {
        this-&gt;x = x;
        this-&gt;y = y;
    }

    Vector2D operator + (const Vector2D &amp;other)
    {
        return Vector2D(this-&gt;x + other.x, 
                        this-&gt;y + other.y);
    }
};

<!-- attr: {} -->


Basic Operator Overloading
Live Demo

<!-- attr: {} -->


Operator Overloading
Overloaded operators are just special functions
Using operators is just calling those functions
Operators can be overloaded both as members and as non-members
Members can access the calling object through the this pointer
Non-members take an additional parameter to refer to the object, calling the operator


<!-- attr: {} -->


Operator Overloading
Form of common overloaded operators:{073A0DAA-6AF3-43AB-8588-CEC1D06C72B9}
Expression
Operator
Member function
Non-member function
@a
+ - * &amp; ! ~ ++ --
A::operator@()
operator@(A)
a@
++ --
A::operator@(int)
operator@(A,int)
a@b
+ - * / % ^ &amp; | &lt; &gt; == != &lt;= &gt;= &lt;&lt; &gt;&gt; &amp;&amp; || ,
A::operator@(B)
operator@(A,B)
a@b
= += -= *= /= %= ^= &amp;= |= &lt;&lt;= &gt;&gt;= []
A::operator@(B)
-
a(b,c...)
()
A::operator()(B,C...)
-
a-&gt;b
-&gt;
A::operator-&gt;()
-
(TYPE) a
TYPE
A::operator TYPE()
-

<!-- attr: {} -->


Overloading Operators as Members an Non-Members
Live Demo

<!-- attr: {} -->


Operator Overloading
Calling operators can be done in two ways
As normal operators in expressions
By their function name i.e.: 
prefixed with operator keyword, 
followed by the actual operator 
and its parameters in parantheses

c = a + b; 
c = a.operator+ (b);

<!-- attr: {} -->


Static Members
Members Common for all Instances

<!-- attr: {} -->


Static Members
There is data (and behavior) which can be the same for all instances of a class
E.g. average person age – doesn't need to be specific for each instance
Static members 
Single common variables for objects of a class
Marked by the static keyword
Must be initialized from outside the class
To avoid reinitialization


<!-- attr: {} -->


Static Members
Example: Person static members (1) 
class Person
{
private:
    static int personCount;
    static int totalPersonAge;
public:
    string name;
    int age;

    Person(string name = "", int age = 0)
    {
        this-&gt;name = name;
        this-&gt;age = age;

        Person::totalPersonAge += this-&gt;age;
        Person::personCount++;
    }
    //example continues

<!-- attr: {} -->


Static Members
Example: Person static members (2) 





Two ways of accessing static members:
Through class name, followed by ::
Through instance, like any other member

    ~Person()
    {
        Person::totalPersonAge -= this-&gt;age;
        Person::personCount--;
    }

    static int getAveragePersonAge()
    {
        return Person::totalPersonAge / Person::personCount;
    }
};

<!-- attr: {} -->


Static Members
Live Demo

<!-- attr: {} -->


Classes and const
Restricting Modifications Compile-Time

<!-- attr: {} -->


Classes and const
Class members can be defined const
Fields follow the same rules as const variables
Methods and operators cannot modify the instance they are called on
Syntax: place const after method parentheses
class Person {
    ...
    string getInfo() const
    {
        stringstream infoStream;
        infoStream&lt;&lt;this-&gt;name&lt;&lt;", age: "&lt;&lt;this-&gt;age&lt;&lt;endl;
        return infoStream.str();
    }
}

<!-- attr: {} -->


Classes and const
const methods are frequently used
Mark a non-modifying method
Hence, required by many standard library methods, accepting references
A const reference to an object can only call const methods
An object can be const like any variable
Only consturctor &amp; const methods can be called
const Person p = Person("Tony", 20);
cout&lt;&lt;p.getPersonInfo()&lt;&lt;endl;

<!-- attr: {} -->


Classes and const
Live Demo

<!-- attr: {} -->


Pointers to Classes
Instances in Dynamic Memory

<!-- attr: {} -->


Pointers to Classes
As mentioned, creating an instance with the new keyword returns a pointer
A pointer can also be obtained by using the reference operator &amp;
All typical pointer operations are valid
Access to members is done through the -&gt; operator
Person *samPtr = new Person("Sam", 18);
Person frodo = Person("Frodo", 18);
Person *frodoPtr = &amp;frodo;
cout&lt;&lt;samPtr-&gt;getPersonInfo()&lt;&lt;endl;

<!-- attr: {} -->


Pointers to Classes
Live Demo

<!-- attr: {} -->


C++ Classes
http://algoacademy.telerik.com

<!-- attr: {} -->


Exercises
Define a class that holds information about a mobile phone device: model, manufacturer, price, owner, battery characteristics (model, hours idle and hours talk) and display characteristics (size and number of colors). Define 3 separate classes (class GSM holding instances of the classes Battery and Display).
Define several constructors for the defined classes that take different sets of arguments (the full information for the class or part of it). Assume that model and manufacturer are mandatory (the others are optional). All unknown data fill with null.
Add an enumeration BatteryType (Li-Ion, NiMH, NiCd, …) and use it as a new field for the batteries.
56

<!-- attr: {} -->


Exercises (2)
Add a method in the GSM class for displaying all information about it. 
Use methods to encapsulate the data fields inside the GSM, Battery and Display classes. Ensure all fields hold correct data at any given time.
Add a static field IPhone4S in the GSM class to hold the information about iPhone 4S.
Write a class GSMTest to test the GSM class:
Create an array of few instances of the GSM class.
Display the information about the GSMs in the array.
Display the information about the static field IPhone4S.
57

<!-- attr: {} -->


Exercises (3)
Create a class Call to hold a call performed through a GSM. It should contain date, time, dialed phone number and duration (in seconds).
Add a property CallHistory in the GSM class to hold a list of the performed calls. Try to use the class vector&lt;Call&gt;.
Add methods in the GSM class for adding and deleting calls from the calls history. Add a method to clear the call history.
Add a method that calculates the total price of the calls in the call history. Assume the price per minute is fixed and is provided as a parameter.
58

<!-- attr: {} -->


Exercises (4)
Write a class GSMCallHistoryTest to test the call history functionality of the GSM class.
Create an instance of the GSM class.
Add a few calls.
Display the information about the calls.
Assuming that the price per minute is 0.37 calculate and print the total price of the calls in the history.
Remove the longest call from the history and calculate the total price again.
Finally clear the call history and print it.
59
