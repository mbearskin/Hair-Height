# Hair-Height
This is my solution to an assignment from my Intro to C++ class from Spring of 2013. 
The following is the assigment promt:

Assignment 02
Due: Friday, Feb. 8, 2013  at noon  100 pts
For this assignment, you will submit a single C++ compilable file containing a program written in C++. Remember, to electronically submit a file to for this course, first change to the directory in which the file resides and then type in, at the UNIX prompt, the command:

		  cssubmit  53  section_letter  assignment_number
Be sure that only the file you want to submit is in that directory - make a directory for every assignment! Remember that the submit system will deliver every .cpp file in the current directory to me, so you should only have the file for hw 2 in that directory. Name your file a meaningful name and give it a .cpp extension since you will be compiling it. Also, make sure that you compile and run your program using the GNU (g++) compiler before submitting to make sure that it will work for the submit script. 

Background:  Marge Simpson has unique hair. You cannot argue this; don't even try.  The height of her 'do actually fluctuates from day to day.  It's hard to notice that since you are focusing on just how stupid all the Simpsons characters are acting.  But I digress.  There is a way to calculate this height, and, in fact, Marge uses this formulation every day as she preps and primps in the morning.  She would like you to code a program she can use to quickly compute hair height (forthwith1 known as "hh") to simplify her life.

Specifications: You are to write a program that will prompt for and input from the user (presumably Marge) values for 
the number of days since her last cut:  days
the number of cans of hairspray used that morning:  cans
whether or not mousse is used that morning2:  mousse3
the temperature of the curling iron:  temp
Now, it should be clear what the types of these inputs should be.  But if it's not, know now that 
days should be an integer-type
cans should also be an integer type since Marge never leaves a can partially used - that would be sacrilege. 
mousse is a bool, especially if you read the footnote!
temp is a float-type
There are also values that play a part in the computations that are not inputs from the user, but are very important nonetheless.  They are:
the rate at which Marge's hair grows.  This RATE is currently known to be 0.2  
the acceleration of gravity.  G = 9.98.  (You know, gravity is always pulling that tower of hair down!)
Marge, through extensive scientific studies performed by the eminent scientist, Dr. Frink, has determined that the hh value is given by the following formulation:

                    hh = (cans/(days + 1)) * (2 + temp) - G + <<RTD>>,

                            where <<RTD>> signifies that RTD is added in only if mousse is used that day.  RTD is rate * days.

Your program should be "user friendly" in that it should have an opening statement or greeting, user friendly and understandable prompts, and clear and concise outputs and sign-off.  Here's a good example of bad output:

                                    enter stuff:  5    4     0    160
                                    119.6

Notice that there are NO prompts to speak of, and the output is completely unexplained.  This  is horrible output.  Something like the following is much much better:

                                    Greetings ......
                                    Please enter the following:
                                            days since last cut:        5
                                            cans of spray used:        4
                                            mousse (1/0):                0
                                            curler temp:                  160
                                            
                                    You hair height will be 98.0189 inches.  

                                    Have a nice day, Marge!!

Notice how everything is very clear?  (Yes) 

When you submit: When you submit this, and all subsequent programs for this class, cssubmit will compile and run (assuming it compiles) your program during the submission process. Thus, when you submit, you will have to enter inputs as a user of the program. Now, in order to make the output uniform for the grader and to keep her sane, ALL OF YOU will enter the same information. For this assignment, it is: 
days:  28
cans:  4
mousse:  has been used
temperature:  200
Special Notice: You are NOT to use the if-else statement....or even the if statement! in this assignment.  Think carefully about your inputs and how they can be used.

Lastly, if you have any questions about this assignment, be sure to ask your instructor or any of the LEAD PLAs.                                           

1I have no idea what this word means.
2The type of variable to represent this obviously should be a bool.  Recall from lecture that bools are true or false.  But true maps to 1 and false to 0. So, you can prompt and read in 1 or 0 for this (boolean) variable.
3
   Assignment 02
Due: Friday, Feb. 8, 2013  at noon  100 pts
For this assignment, you will submit a single C++ compilable file containing a program written in C++. Remember, to electronically submit a file to for this course, first change to the directory in which the file resides and then type in, at the UNIX prompt, the command:

		  cssubmit  53  section_letter  assignment_number
Be sure that only the file you want to submit is in that directory - make a directory for every assignment! Remember that the submit system will deliver every .cpp file in the current directory to me, so you should only have the file for hw 2 in that directory. Name your file a meaningful name and give it a .cpp extension since you will be compiling it. Also, make sure that you compile and run your program using the GNU (g++) compiler before submitting to make sure that it will work for the submit script. 

Background:  Marge Simpson has unique hair. You cannot argue this; don't even try.  The height of her 'do actually fluctuates from day to day.  It's hard to notice that since you are focusing on just how stupid all the Simpsons characters are acting.  But I digress.  There is a way to calculate this height, and, in fact, Marge uses this formulation every day as she preps and primps in the morning.  She would like you to code a program she can use to quickly compute hair height (forthwith1 known as "hh") to simplify her life.

Specifications: You are to write a program that will prompt for and input from the user (presumably Marge) values for 
the number of days since her last cut:  days
the number of cans of hairspray used that morning:  cans
whether or not mousse is used that morning2:  mousse3
the temperature of the curling iron:  temp
Now, it should be clear what the types of these inputs should be.  But if it's not, know now that 
days should be an integer-type
cans should also be an integer type since Marge never leaves a can partially used - that would be sacrilege. 
mousse is a bool, especially if you read the footnote!
temp is a float-type
There are also values that play a part in the computations that are not inputs from the user, but are very important nonetheless.  They are:
the rate at which Marge's hair grows.  This RATE is currently known to be 0.2  
the acceleration of gravity.  G = 9.98.  (You know, gravity is always pulling that tower of hair down!)
Marge, through extensive scientific studies performed by the eminent scientist, Dr. Frink, has determined that the hh value is given by the following formulation:

                    hh = (cans/(days + 1)) * (2 + temp) - G + <<RTD>>,

                            where <<RTD>> signifies that RTD is added in only if mousse is used that day.  RTD is rate * days.

Your program should be "user friendly" in that it should have an opening statement or greeting, user friendly and understandable prompts, and clear and concise outputs and sign-off.  Here's a good example of bad output:

                                    enter stuff:  5    4     0    160
                                    119.6

Notice that there are NO prompts to speak of, and the output is completely unexplained.  This  is horrible output.  Something like the following is much much better:

                                    Greetings ......
                                    Please enter the following:
                                            days since last cut:        5
                                            cans of spray used:        4
                                            mousse (1/0):                0
                                            curler temp:                  160
                                            
                                    You hair height will be 98.0189 inches.  

                                    Have a nice day, Marge!!

Notice how everything is very clear?  (Yes) 

When you submit: When you submit this, and all subsequent programs for this class, cssubmit will compile and run (assuming it compiles) your program during the submission process. Thus, when you submit, you will have to enter inputs as a user of the program. Now, in order to make the output uniform for the grader and to keep her sane, ALL OF YOU will enter the same information. For this assignment, it is: 
days:  28
cans:  4
mousse:  has been used
temperature:  200
Special Notice: You are NOT to use the if-else statement....or even the if statement! in this assignment.  Think carefully about your inputs and how they can be used.

Lastly, if you have any questions about this assignment, be sure to ask your instructor or any of the LEAD PLAs.                                           

1I have no idea what this word means.
2The type of variable to represent this obviously should be a bool.  Recall from lecture that bools are true or false.  But true maps to 1 and false to 0. So, you can prompt and read in 1 or 0 for this (boolean) variable.
3
   
