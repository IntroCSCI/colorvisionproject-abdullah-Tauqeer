# C++ Palette Analyzer

## Description

This is a simple concole application, it asks the user to create a file that in which the information of the colours will the be saved, first it promopts the user to provide any name for the name in which he wants to save colour information. Then a loop will start and it takes information for all those colours one by one and they finally it will write that data to a .css file


## Developer

Dhiab almansoori

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

Name of the file :
colour_info

Name of the file :
Colours

No of the colour you want : 5

.#### Creating File ####

:)      File Created Successfully

Colour Name : 1 :  RED #345AF2

Colour Name : 2 :  YELLOW #21F51

Colour Name : 3 :  PURPLE #21765

Colour Name : 4 :  PINK #290FC

Colour Name : 5 :  GREEN #223AC

.#### Writing File ####

:)      Successfully writen the file

## C++ Guide

### Variables and Data Types

Followind data types were used while making the program :
- Strings
- int
- char
- bool



### Decisions

a do while loop is used to create the file if condition inside the while loop returns zero the loop stops and an if statement check for the user input if he/she presses 'Y'. it will keep looping to create a file, a if conditionalso checks wheather the file is created or not

### Iteration

A do while loop checks for the condition(i.e., the desired file is created or not) if not true keeps iterating the loop

### File Input and Output

The output of file is written to a file which has a name of user's choice

### Arrays/Vectors

A string array of colours keep record of all the colour values entered 

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
