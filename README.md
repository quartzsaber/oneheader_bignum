# Header-only Bignum Library
Header-only bignum library for C++.

Note this project is written when I was learning C++, and its code is clumsy. Further more, I wasn't familiar with GitHub back then.

I believe there are much more efficient ways of handling bignum than my own.

>In the context of the C or C++ programming languages, a library is called **header-only** if the full definitions of all macros, functions and classes comprising the library are visible to the compiler in a header file form. Header-only libraries do not need to be separately compiled, packaged and installed in order to be used. All that is required is to point the compiler at the location of the headers (the -I switch in gcc/g++), and then #include the header files into the application source. Another advantage is that the compiler's optimizer can do a much better job when all the library's source code is available.

>from Wikipedia, 'Header-only Library'

## Why did you make this?

## Usage
Long story short, just `#include "bignum.h"` and you can just use it!

<pre>
  classes:
    bignum&lt;int BITS&gt; //Bignum of BITS long. Only calculations with same BITS is premitted for now.
    //TODO: Add an signed version?
  functions:
    Just as you'd expect for an (unsigned) integer!
    It has operator functions for _every_ operators, meaning you can just do things like `a+=b` or `a&=b;`!
    In addition to that, it has some more functions, such as binary rotation. (`ror(size_t)` and `rol(size_t)`)
    Please look at the source code for those functions.
</pre>

## License
See `LICENSE` file.
