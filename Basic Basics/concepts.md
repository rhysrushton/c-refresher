
# An outline of the basics c concepts

main() function is the entry point into a c program - first thing invoked
when running executable


# Preprocessor
The preprocessor analyzes your code before compilation.
It then gives instructions to the copuler
It recognizes special statements
For example '# include' is a preprocessor statement
'#' all preprocessor statements are preceeded by this sign

# basic data types
int
float
double
char
_Bool: depends on c standard you are using though. C99 you can use bool myBoolean = true; 
-Specify datatypes so that th compiler knows how much memory to allocate for the var

enum is a dt that allows you to specify a variable typ and specific values that that variable can take.
     i.e. you could specify an int that takes numbers only greater than 10

# Format specifier
Specify data format
indicated with '%'

# Command Line arguments
Allow you to pass data into the program, when you start it.
Pass data to program via command line while program is being run.
When main() is called two arguments are passed to the function
1. argc (argument count) is an integer value that specified number of arguments typed on the command line.
2. argv (argument vector) is an array of character pointers (strings)

