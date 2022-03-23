shirayarhi, omri.tamam
Shira Yarhi (318344637), Omri Tamam (315564112)
EX: 1

FILES:
osm.h -- header for osm lib
osm.c -- library of 3 static functions

REMARKS:


Assignment 1:

The program does the following:
- Creates folder called "Welcome"
- Creates folder called "To"
- Creates file called "OS2021"
- Checks the folder's protection and its size
- Write in this file "If you haven't read the course guidelines yet --- do it right now!"
- Closed the file
- Safety delete the "OS2021" file
- Delete the "To" folder
- Delete the "Welcome" folder
- Exit the program

Assignment 2:
In this assignment we tested run times of different operations on different platforms as required.
First of all, the syscall, as we expected, took a long time on all three platforms because of the transition 
between modes - trap. 
In contrast, both the add operation and function call took significantly less time because they use CPU directly. 
(The call to a function takes about 7 times as long as the connection operation, because it contains about 7 similar 
atomic operations).


In comparing the platforms, in the regular computer and the container the running time was relatively similar and  
fast. This is because all operations are done directly on the computer's hardware and original OS. In contrast, in VM, because there is 
virtualization of both the hardware and the OS, the VM uses them, so it takes more time to use both them 
and the original systems. Every operation - atomic and syscall - are virtualized first in the host env.
