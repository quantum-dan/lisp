A project to create a primitive lisp-like language, cross-compiled to C.

Files: (_.c, _.h)
* parse: Utilities for parsing code.
* syntax: C structs representation of syntax
* tokens: Tokens to look for in the code
* output: Converts struct representation to output C code
* main: Central control

How it works:
* Lisp code is parsed, and converted to a representation in recursive C structs
* C structs are converted to a string which is valid C code
* Resulting string written to a file, and done
