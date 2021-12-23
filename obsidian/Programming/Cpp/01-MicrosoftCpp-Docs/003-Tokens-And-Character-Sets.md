
#programming #notes_from_articles #Cpp #Microsoft
<https://docs.microsoft.com/en-us/cpp/cpp/character-sets?view=msvc-160>
A token is a smallest element of a c++ program that is meaningful to the compiler

## Basic source character set

The C++ standard specifies a _basic source character set_ that may be used in source files. To represent characters outside of this set, additional characters can be specified by using a _universal character name_. The MSVC implementation allows additional characters. The _basic source character set_ consists of 96 characters that may be used in source files. This set includes the space character, horizontal tab, vertical tab, form feed and new-line control characters, and this set of graphical characters:

`a b c d e f g h i j k l m n o p q r s t u v w x y z`

`A B C D E F G H I J K L M N O P Q R S T U V W X Y Z`

`0 1 2 3 4 5 6 7 8 9`

`_ { } [ ] # ( ) < > % : ; . ? * + - / ^ & | ~ ! = , \ " '`