# Welcome to the JCC :bulb:
---
This is a calculator intended to be run on the Raspberry Pi. The mathematical calculations are done in ARM, and the user GUI is a simple text-based GUI written in C. It is capable of several mathematical operations.

## User commands
Upon program start, you may enter a command from the list below. 

* "help"		gives a list of commands and brief description. 
* "info"	 	gives information about a command. Takes 1 string operand.

* "subtract"	 finds the difference between two integers (It will arrange them to ensure a positive result).
* "add" 	  	adds two integers.
* "multiply"	 multiplies two integer operands.
* "exponent"	 raises your first entry to the power of the second entry.
* "divide"	 Divides your first entry by your second entry. The result is rounded down to the nearest integer.
* "bitcount"	 counts the number of “set” bits in the binary representation of your entry.
* "sigma" 	 Sums all the numbers between the two numbers entered. (including the numbers)
* "factorial" 	 computes the factorial of your entry



To ensure smooth operation, Enter the required number of integers for the operation selected. Do not exceed this number.  
The Raspberry Pi’s inputs and results must be contained in a 32-bit integer; they must not exceed 2,147,483,647, or be negative.   



## Example of typical program use


![Image of typical use]( https://i.ibb.co/6YdKdfw/JCC-operation.png)   

---

### Notes for Nerds 
The program checks for 32-bit overflow from within the ARM code to reduce redundant computation.   
If the user tries to input a number larger than the 32 bit limit, it is automatically corrected to (maximum integer size -1).  
The assembly code getints.S correctly returns all of the integers from a string as one large integer. I havn't yet gotten it to play nicely with C, so I will have to use scanf for now.   
Because typos in user entries may be common, the program only compares the first and third character entered for matching a command. This gives a decent chance at interpreting a word that the user might have typed incorrectly.  
If you do not enter a command when inside of INFO, you will have to re-enter info command.  
The test command is a hidden command. Enter “test” to run the batter of tests suggested by Conan Veitch.  

---

**Known issues**:  
Please do not enter characters in place of your integers it confuses the program.   
Entering 3 integers on one line will require you to re-enter them without a prompt.  
Overall user entry need to be rehauled. Using scanf was a horrible mistake, and it needs to be replaced with getline() then intelligently reading user input from that. I wrote an assembly file for this named getints.S.

---

Created by Josiah Binnema. UNBC Computer Science student



