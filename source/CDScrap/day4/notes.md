### Precedence of Operators

- Division and Multiplication has same priority/precedence - to resolve, we use associativity (Left-to-Right).

### Arrays

- Arrays are Garbage Declared, Zero Initialized.
- Bound Checking is not done in C++, no compilation error when ArrayOutOfBound.

### Errors
   ``` Logical Errors - Difficult to Debug.
	Semantics Errors - aka Compile Time Errors.
	Runtime Errors - Pass the Compilation but program fails during Runtime.like dividing by 0.
	```

### Undefined Behaviour
No behaviour can be defined beforehand even in the same environment. 

### Implementation Defined
e.g. Data types size difference in different environments, same behaviour in one environment.

## LAW-1 : Whenever accessing any element of an array "make sure" that the element exists in the array.

- When declaring an array, make sure that its size is a compile-time constant.
- Arrays are always _Passed By Reference_.

