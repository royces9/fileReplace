# fileReplace
replaces lines of certain tags with different values

example file:

//example file.txt
a=1
b=2
c=3
//end example file.txt

exec:
fileReplace file.txt a 3 b 4

after execution
//example file.txt
a=3
b=4
c=3
//end example file.txt

used for changing parameters in BNGL files to run through a parameter space
