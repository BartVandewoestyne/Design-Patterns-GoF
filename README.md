# Design Patterns - Elements of Reusable Object-Oriented Software

## Introduction

This is my implementation of the Design Patterns from the book

```text
'Design Patterns: Elements of Reusable Object-Oriented Software'
Erich Gamma, Richard Helm, Ralph Johnson, John Vlissides
ISBN 0-201-63361-2
Copyright 1995
21th Printing, November 2000
```

The webpage and official 'code' for this book were previously available from

1. <http://st-www.cs.illinois.edu/users/patterns/DPBook/DPBook.html>
2. <http://st-www.cs.illinois.edu/patterns/dpbook/Source.html>

Unfortunately, these links no longer work.  If anybody knows the new location of the 'official' source code for the book, please let me know!

The nice thing about the Design Patterns book is that it is... well... not complete :-) To come to a complete working implementation of all the Design Patterns presented in the book and be able to play with them, requires some extra coding.  The goal of this project is to actually provide the missing pieces and come to something that will compile and run cleanly.

On the following websites, I have found C++ code that helped me
complete everything:

* <http://www.c-jump.com/CIS75/Week11/>
* <http://www.c-jump.com/Download/Patterns/Prototype/html/>
* <https://code.google.com/p/basic-algorithm-operations/source/browse/trunk/DP>
* <http://dislab.hufs.ac.kr/wiki/Lecture/Design_Pattern>
* <http://blog.csdn.net/joey_zoy/article/details/5610810>
* <https://github.com/wangqiang8511/C---Design-Patterns-Examples/>

And here are some interesting slides that give some more explanation:

* <http://www.cs.toronto.edu/~penny/teaching/csc407/>

A more modern C++11 approach using Boost libraries was given in a talk by Tobias Darm given here:

* <http://www.infoq.com/presentations/gof-patterns-c-plus-plus-boost>

An interview from 2009 with the GoF authors is given here:

* <http://www.informit.com/articles/article.aspx?p=1404056>

A dependency analysis and refactoring of the Gang of Four examples can
be found at

* <https://github.com/zebmason/GoFRefactored/blob/master/README.md>

Feel free to send me your comments, suggestions and improvements in the form
of a git pull request!

## Building

Checkout the code into a `Design-Patterns-GoF` directory:

```text
~$ git checkout git@github.com:BartVandewoestyne/Design-Patterns-GoF.git
```

Then, switch to the `Design-Patterns-GoF` directory and do the build:

```text
~$ cd Design-Patterns-GoF
~/Design-Patterns-GoF$ cmake -S . -B build
~/Design-Patterns-GoF$ cmake --build build
```
