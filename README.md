# Sandwich_restaurant_simulator
This is a task that was part of a subject in 1st year of university, it's a sandwich restaurant simulator wich ask you some questions about how do you want your sandwich and then tells you the final price of it.

It consists in 5 questions that would be ask to the user to then calculate the final price of the sandwich:
- What size do you want your sandwich?
- What bread type do you want?
- What cheese type do you want?
- what protein type do you want?
- Do you want us to heat your sandwich?

Each question provides the user with the options avaiable for each sandwich component.
Then after the questions it calculates the final price with this formula: (Bread price + Cheese price + Protein price) * (0,3 * size) = Final price
Finally it prints the result between dashes

Some clarifications on how it works:
- The C version doesn't validate if the user is typing a valid data type, like for example if the user types a char in a int type, there will be an error. Also, it runs on the standard c99.
- The python version runs on python 3
- If the user chooses tuna, then it doesn't asks if he want's to get his sandwich heated.

Compilation:
- To compile this code on Linux open a terminal in the folder that contains the files and run the following command: gcc main.c -o sandwich_restaurant_simulator.out -std=c99 -Wall -Wconversion -Werror -lm. Or you can run the sandwich_restaurant_simulator.out file.
- To run the python version open a terminar in the folder that contains the files and run the following command: phyton3 main.py
