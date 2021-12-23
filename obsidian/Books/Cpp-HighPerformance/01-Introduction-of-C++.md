
About c++
- Although it was written some 40 years ago c++ is stilll a hugely relevent lang
- C++ provides zero cost abstraction[[01-Introduction-of-C++#^c0ce35]]
- C++ provides more abstraction than C
- C++ is portable to almost any platform
- C++ of today is more faster, reliable and more compatable with C than ever
- the performance of c++ is upto the programmer
- c++ can be used to build roboust modern applicatoins, games, develop embedded devices and many more ....

Zero Cost Abstraction
	Active code bases grow. The more developers working on a code base, the larger the code base becomes. We need abstractions such as functions, classes, data structures, layers and so on in order to manage the complexity of a large-scale code base. But constantly adding abstractions and new levels of indirection comes at a price — efficiency. This is where zero cost abstractions plays its role. A lot of the abstractions offered by C++ comes at a very low price. At a minimum, C++ offers efficient alternatives at hot spots where performance really is a concern. ^c0ce35


Const correctness
	Another powerful feature of C++, that Java and many other languages lack, is the ability to write const correct code. Const correctness means that each member function signature of a class explicitly tells the caller whether the object will be modified or not; and it will not compile if the caller tries to modify an object declared const.
	
Object ownership and garbage collection in C++
	Except in very rare situations, a C++ programmer should leave the memory handling to containers and smart pointers and never have to rely on manual memory handling.
	To put it clearly, the garbage collection model in Java could almost be emulated in C++ by using std::shared_ptr for every object. Note that garbage-collecting languages don't use the same algorithm for allocation tracking as std::shared_ptr. The std::shared_ptr is a smart pointer based on a reference-counting algorithm that will leak memory if objects have cyclic dependencies. Garbage-collecting languages have more sophisticated methods that can handle and free cyclic dependent objects.
	However, rather than relying on a garbage collector, forcing a strict ownership delicately avoids subtle bugs that may result from sharing objects by default, as in the case of Java. 
	If a programmer minimize shared ownership in C++, the resulting code is easier to use and harder to abuse, as it can force the user of the class to use it as it is intended.
	
Drawbacks of C++

Comparing C++ with other programming languages wouldn't be fair without mentioning some of its drawbacks. As mentioned earlier, C++ has more concepts to learn, and is therefore harder to use correctly and to its full potential. However, if a programmer can master C++, the higher complexity turns into an advantage and the code base becomes more robust and performs better.
There are, nonetheless, some shortcomings of C++, which are simply just shortcomings. The most severe of those shortcomings are long compilation times, the reliance on the manual handling of forward declarations, header/source files, and the complexity of importing libraries. This is mainly a result of C++ relying on an outdated import system where imported headers are simply pasted into whatever includes them. At the time of writing this book, a modern module-based import system is up for standardization, but until the standardized C++ version becomes available, project management remains very tedious. Another apparent drawback of C++ is the lack of provided libraries. While other languages usually come with all the libraries needed for most applications, such as graphics, user interfaces, networking, threading, resource handling, and so on, C++ provides, more or less, nothing more than the bare minimum of algorithms, threads, and, as of C++17, file system handling. For everything else, programmers have to rely on external libraries. To summarize, although C++ has a steeper learning curve than most other languages, if used correctly, the robustness of C++ is an advantage compared to many other languages. So, despite the outdated import/library system of C++, we believe that C++ is a well suited language for large-scale projects, even for projects where performance is not the highest priority