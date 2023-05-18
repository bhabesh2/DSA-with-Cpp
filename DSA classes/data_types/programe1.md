## Flow chart

```
start
read the inputs 
check the condition
print the value and exit.
```
## how to take input and output
```
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif
```
## data types (how much memory it consumes)
```
integer ---> 4 bytes (memory allocate)
float ----> 4 bytes (memory allocate)
char ---> 1 byte (memory allocate)
boolean ---> 1 byte (memory allocate)

integer ---> 1,2,3,54 etc. numbers
float ----> 1.2, 3.3, 4.3, 6.78 etc. decimal numbers.
char ----> a,b,c,d etc. alphabets and symbols @, #, ! etc.
boolean ---> true or false. 0 and 1. 0---> false and 1---> true.
```
## int
```
memory allocate 4 bytes

1 byte ---> 8 bits
4 byte ---> 8 * 4 = 32 bits.
one int can have 32 bits or 4 bytes.
range(unsigned)---> 0 to 2^32-1; for the positive integer.
range(signed)---> -2^32 to 2^32-1 for the negative integer.
```
## float
```
memory allocation 4 bytes

size ---> 4bytes

e.g 4.56, 3.45 (upto 7 decimal digits)

to store more than 7 decimal digits we will use DOUBLE (data type)

double ---> 8 bytes (upto 15 decimal digits.);
```
## char
```
to store char we use ascii table. every char have a special binary value. 

e.g
size ---> 1 byte (memory allocation)

int ascii = 'a';
when we print the acsii it will give us 97 which is a binary form of char "a";
```
## boolean
```
to store boolen value we use boolean true --> 1 and false --> 0;
size ---> 1 byte
```
## type modifier
```
signed ---> 4 bytes ---> -2,147,483,648 to 2,147,483,683 (range)

unsigned---> 4 bytes ---> 0 to 4,294,967,295 (range)

long ---> 8 bytes ---> -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (range)

short ---> 2 bytes ---> -32,768 to 32,767 (range)
```

