# Sandwich_Store_simulator
This is a task that was part of a subject in 1st year of university, it's a sandwich_store_simulator wich ask you some questions about how do you want your sandwich and then tells you the final price of it.

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
- The C version doesn't validate if the user is typing a valid data type, like for example if the user types a char in a int type, there will be an error.
- If the user chooses tuna, then it doesn't asks if he want's to get his sandwich heated.
