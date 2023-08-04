# 0x09. C - Static libraries

## Tasks

### 0. A library is not a luxury but one of the necessities of life
Create the static library `libmy.a` containing all the functions listed.

If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.


### 1. Without libraries what have we? We have no past and no future
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.


## Description of the Project
Through this project, I learnt the following key concepts;
* What a static library is.
* How static libraries work
* How to create statis static libraries
* How to use static libraries

Also, I learnt the basic usage of `ar`, `ranlib`, and `nm`.
* `ar` stands for 'archiver'; This is a program that can be used to create static libraries, modify object files in the static library, list the names of the object files in the library, and so on.

* `ranlib`: This is a command that is used to create, or update the index an archive once the archive has been created or modified. The index is primarily used by the compiler to speed up symbol-lookup inside the library and to make sure that the order of the symbols in the library wont matter during compilation.

* `nm` is used to display the symbol table that is associated with an object, archive library of objects, or executable files. By default, `nm` lists the symbols in the file in alphabetical order by name and provides the following information about each;
	- File or object name (if you specified -A).
	- Symbol name
	- Symbol type. Not all these symbol types are available on all the systems.
