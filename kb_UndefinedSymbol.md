# Problem #

Your robot program compiles (builds), and deploys to the robot, but fails to run.  The Robot Code light on the Driver Station does not come on.

There are many reasons that this could happen, but one of the more common ones is a reference to an undefined symbol.

You can identify this problem by running NetConsole while booting the cRIO.  A message is printed to NetConsole when `FRC_UserProgram` (ie, your robot program) is about to be started.  Shortly afterward, if your program fails to load, you'll see this message:
```
...FRC_UserProgram failed to load.
```
Look for error or warning messages before this line for clues as to why your program failed to load.  This article applies if you see a line that looks like this:
```
Warning: module 0x109fb60 (FRC_UserProgram.out) holds reference to undefined symbol _ZN5Robot10driveTrainE.
```

# Description #

If you look closely at the name of the undefined symbol reference above (`_ZN5Robot10driveTrainE`), you'll see that it includes something that you may be able to identify in your code - in this case, `Robot::driveTrain`.  This is an important clue as to what's gone wrong, and helps you identify where to look.

Symbols are names of items that appear in the compiled code, which are needed at runtime.  In most cases, the names in your code aren't needed at runtime.  However, there may be some items that can't be resolved at compile time, and the compiler assumes will be resolved at runtime.  All of the names in your code should probably be resolved at compile time, as they usually won't be found at runtime - and this is the error that will result.

(The compiler uses a technique called _name mangling_ to generate unique symbol names, which is why you see the strange looking name when the program fails to load.)

In many cases, this problem is a result of class static variables that are declared in the class declaration, and used later, but not actually defined _outside_ the class declaration.

The class declaration (in the Class.h file) only declares how an object will be defined when it's created - it doesn't actually allocate any variable space.  Normally, each object has its own copy of each variable, and space for those variables is allocated when the object is instantiated (ie, created via a variable declaration or `new` statement).

Class static variables are a special case.  A single copy of that variable exists for all objects instantiated from that class; in other words, all objects share the same variable.  This also means that class static variables can be referenced via `Class::` itself.  Since class static variables exist essentially as part of the class itself, they must be allocated (defined) outside the class declaration (just as you create an object outside the class declaration).  For class static variables, this takes the form of a variable declaration in the "global" space - ie, not inside any function declarations.

# Solution #

The solution is to declare the class static variable in the Class.cpp file, but outside of any function declarations.  Such "global" declarations are generally located near the beginning of the .cpp file.  The variable declaration might look like this (using the above example):
```
DriveTrain* Robot::driveTrain = NULL;
```
(Initializing the variable is optional, but is generally good practice.)