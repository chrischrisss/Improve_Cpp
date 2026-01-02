<h2>Namespace</h2>

* C++ lets you define something called a namespace
* All variables declared inside a namespace are considered to be memebers of the same family, or namespace


<hr>

Example 1 in ```Ex1.cpp```

The C++ equivalent of a full name is something called a fully qualified name. In Example 1, the fully qualified name of the variable ```width``` is ```display::width```

<h2>Namespace std</h2>

* The namespace ```std``` is used by C++ to define its standard library objects and functions

When the program begins with the statement ```#include <iostream>```, this causes the compiler to read in a file called *iostream*, which contains the definitions of the C++ standard variables.

For example, a simplified *iostream* might look like this:

```
namespace std {
    istream cin;
    ostream cout;
    ostream cerr;
    // Lots of other stuff
}
```

<h2>Global namespace</h2>

If you do not enclose your code or variables in any namespace, a blank namespace is assigned to them.

Example in ```Ex2.cpp```

<h2>File-Specific Namespace</h2>

When a namespace is defined with the name of an existing namespace, this results in a namespace collision. To avoid this, C++ has invented the unnamed namespace

```namespace {} ```

The declaration with no name specified, puts all the enclosed declarations in a namespace unique to the file.


