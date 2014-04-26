coins
=====

Gives back change the user requested in the least amount of coins possible.

Well, suppose that a cashier owes a customer some change and on that cashier's belt are levers that dispense quarters, dimes, nickels, and pennies. Solving this "problem" requires one or more presses of one or more levers. This program acts as a cashier who wants to take, with each press, the biggest bite out of the money owed as possible. For instance, if some customer is owed $0.41, the biggest first bite that can be taken is $0.25. That bite is "best" inasmuch as it gets us closer to 0, faster than any other coin would. Note that a bite of this size would whittle what was a 41 down to a 16 since 41 - 25 = 16. That is, the remainder is a similar but smaller problem. Needless to say, another $0. 25 bite would be too big (assuming the cashier prefers not to lose money), and so our cashier would move on to a bite of size $0.10, leaving him or her with a $0.06. At that point, greed calls for one $0.05 bite followed by one $0.01 bite, at which point the problem is solved. The customer receives one quarter, one dime, one nickel, and one penny: four coins in total.

I wrote a program that first asks the user how much change is owed and then spits out the minimum number of coins with which said change can be made. Assume that the only coins available are American quarters (25?), dimes (10?), nickels (5?), and pennies (1?).

Before doing any math, I converted the user's input entirely to cents (i.e., from a float to an int) to avoid tiny errors that might otherwise add up. I also didn't cast the user's input from a float to an int for fear of possibly missing cents.

This program was configured for the purpose of solving one of three problems apart of problem set 1 of cs50.
