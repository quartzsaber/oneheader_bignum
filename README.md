# Header-only Bignum Library
header-only bignum library for C++.

>In the context of the C or C++ programming languages, a library is called **header-only** if the full definitions of all macros, functions and classes comprising the library are visible to the compiler in a header file form. Header-only libraries do not need to be separately compiled, packaged and installed in order to be used. All that is required is to point the compiler at the location of the headers (the -I switch in gcc/g++), and then #include the header files into the application source. Another advantage is that the compiler's optimizer can do a much better job when all the library's source code is available.

>-Wikipedia, Header-only-

Long story short, just include `bignum.h` and you can use it!

Usage format required!!
I have no idea how to format those usage!
Any help appreciated!

Usage:<br>
  classes:
    bignum&lt;int bits&gt; //Bignum class. Transform or Calculations among different precision are not allowed right now.
  functions:
    bignum& add(const bignum& x); //Add x to this         `this += x`
    bignum& sub(const bignum& x); //Substract x from this `this -= x`
    bignum& mul(const bignum& x); //Multiply x to this    `this *= x`
    bignum& div(const bignum& x); //Divide x from this    `this /= x`
    
    bignum& and(const bignum& x); //Bitwise `and` between this and x
    bignum&  or(const bignum& x); //Bitwise  `or` between this and x
    bignum& xor(const bignum& x); //Bitwise `xor` between this and x
    bignum& not(); //Bitwise not
    
    bignum& shr(const unsigned int x); //Shift right `this >>= x`
    bignum& shl(const unsigned int x); //Shift left  `this <<= x`
    bignum& ror(const unsigned int x); //Rotate right
    bignum& rol(const unsigned int x); //Rotate left
