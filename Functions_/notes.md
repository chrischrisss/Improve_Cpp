<h2>Functions</h2>

* Functions allow you to group commonly used code into a compact unit that can be used repeatedly.

Example:

``` float triangle(float width, float height) ```

The **float** is the function type. This defines the type of data returned by the function. ```width``` and ``height`` are the **parameters** to the function. Parameters are variables local to the function that are used to pass information into the function.

When we pass in a value, the assignment occurs only when the function is called, so data flows through the parameters only one way: in. This is known as "call by value"

Functions must be declared just like variables. There are two ways to delcare a function. The first is to write the entire function before it is used. The other way is to define what's called forward delcaration, which tells the compiler that the function is prototype and not a real function.
