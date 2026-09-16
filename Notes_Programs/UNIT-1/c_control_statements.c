/*
===============================================================
        CONTROL STATEMENTS IN C - COMPLETE DEMONSTRATION
===============================================================

CONTROL STATEMENTS ARE DIVIDED INTO:

1. Decision / Selection Statements
   --------------------------------
   if
   if-else
   else-if ladder
   nested if
   switch-case

2. Iteration / Looping Statements
   --------------------------------
   for
   while
   do-while

3. Jump / Branching Statements
   --------------------------------
   break
   continue
   goto
   return

SPECIAL / TRICKY CASES COVERED:
--------------------------------
- 0 and non-zero conditions
- = versus ==
- if without braces
- dangling else
- nested if
- else-if order
- switch fall-through
- break in switch
- default in switch
- duplicate case restriction
- character in switch
- for(;;) infinite loop
- while may execute zero times
- do-while executes at least once
- continue in for
- continue in while
- infinite-loop trap with continue
- break in nested loops
- continue in nested loops
- goto
- return
- comma operator in for
- empty loop body
- signed/negative values in conditions
===============================================================
*/

#include <stdio.h>

int main()
{
    /* ========================================================
       1. BASIC SEQUENTIAL FLOW
       ======================================================== */

    printf("\n================================================\n");
    printf("1. SEQUENTIAL FLOW\n");
    printf("================================================\n");

    /*
       Normally C executes statements from top to bottom.
    */

    printf("Statement 1\n");
    printf("Statement 2\n");
    printf("Statement 3\n");

    /*
       Output:
       Statement 1
       Statement 2
       Statement 3
    */


    /* ========================================================
       2. if STATEMENT
       ======================================================== */

    printf("\n================================================\n");
    printf("2. if STATEMENT\n");
    printf("================================================\n");

    {
        int age = 20;

        if (age >= 18)
        {
            printf("Age is %d: Eligible for voting.\n", age);
        }

        /*
           If the condition is FALSE, the block is skipped.
        */
    }


    /* ========================================================
       3. if WITH 0 AND NON-ZERO VALUES
       ======================================================== */

    printf("\n================================================\n");
    printf("3. 0 AND NON-ZERO CONDITIONS\n");
    printf("================================================\n");

    /*
       IMPORTANT C RULE:

       0       -> FALSE
       non-zero -> TRUE

       C does not require the condition to be literally
       TRUE or FALSE.
    */

    if (0)
    {
        printf("This will NOT execute.\n");
    }

    if (1)
    {
        printf("1 is treated as TRUE.\n");
    }

    if (-5)
    {
        printf("-5 is also TRUE because it is non-zero.\n");
    }

    if (100)
    {
        printf("100 is also TRUE because it is non-zero.\n");
    }


    /* ========================================================
       4. if-else
       ======================================================== */

    printf("\n================================================\n");
    printf("4. if-else\n");
    printf("================================================\n");

    {
        int number = 7;

        if (number % 2 == 0)
        {
            printf("%d is even.\n", number);
        }
        else
        {
            printf("%d is odd.\n", number);
        }
    }


    /* ========================================================
       5. TRICKY CASE: = versus ==
       ======================================================== */

    printf("\n================================================\n");
    printf("5. = versus ==\n");
    printf("================================================\n");

    {
        int x = 5;

        /*
           == means COMPARISON.

           x == 5 asks:
           "Is x equal to 5?"
        */

        if (x == 5)
        {
            printf("x is equal to 5.\n");
        }


        /*
           = means ASSIGNMENT.

           The following is legal C:

           if (x = 10)

           It assigns 10 to x.

           The value of the assignment expression is 10.
           Since 10 is non-zero, the condition becomes TRUE.

           Therefore, this is a dangerous mistake.
        */

        if (x = 10)
        {
            printf("WARNING: x = 10 assigned 10 to x.\n");
        }

        printf("Current value of x = %d\n", x);
    }


    /* ========================================================
       6. if WITHOUT BRACES - TRICKY CASE
       ======================================================== */

    printf("\n================================================\n");
    printf("6. if WITHOUT BRACES\n");
    printf("================================================\n");

    {
        int x = 10;

        /*
           Without braces, only the NEXT ONE statement
           belongs to the if.
        */

        if (x > 5)
            printf("x is greater than 5.\n");

        printf("This statement is NOT controlled by if.\n");
    }


    /* ========================================================
       7. DANGLING else
       ======================================================== */

    printf("\n================================================\n");
    printf("7. DANGLING else\n");
    printf("================================================\n");

    {
        int a = 1;
        int b = 0;

        /*
           Code:

           if (a)
               if (b)
                   printf("X");
               else
                   printf("Y");

           The else belongs to the NEAREST unmatched if.

           Equivalent to:
        */

        if (a)
        {
            if (b)
            {
                printf("X\n");
            }
            else
            {
                printf("Y\n");
            }
        }

        /*
           Best practice:
           ALWAYS use braces when there are nested if statements.
        */
    }


    /* ========================================================
       8. else-if LADDER
       ======================================================== */

    printf("\n================================================\n");
    printf("8. else-if LADDER\n");
    printf("================================================\n");

    {
        int marks = 82;

        /*
           Conditions are checked from TOP to BOTTOM.

           As soon as one condition becomes TRUE,
           its block executes and the remaining conditions
           are skipped.
        */

        if (marks >= 90)
        {
            printf("Grade A+\n");
        }
        else if (marks >= 80)
        {
            printf("Grade A\n");
        }
        else if (marks >= 70)
        {
            printf("Grade B\n");
        }
        else if (marks >= 60)
        {
            printf("Grade C\n");
        }
        else
        {
            printf("Fail\n");
        }
    }


    /* ========================================================
       9. TRICKY else-if ORDER
       ======================================================== */

    printf("\n================================================\n");
    printf("9. TRICKY else-if ORDER\n");
    printf("================================================\n");

    {
        int marks = 85;

        /*
           WRONG LOGIC:

           if (marks >= 50)
               ...
           else if (marks >= 80)
               ...

           For 85, marks >= 50 is already TRUE.
           Therefore the >= 80 condition will never be reached.

           More specific / higher conditions should normally
           be checked first.
        */

        if (marks >= 90)
        {
            printf("90 or above\n");
        }
        else if (marks >= 80)
        {
            printf("80 to 89\n");
        }
        else if (marks >= 50)
        {
            printf("50 to 79\n");
        }
        else
        {
            printf("Below 50\n");
        }
    }


    /* ========================================================
       10. NESTED if
       ======================================================== */

    printf("\n================================================\n");
    printf("10. NESTED if\n");
    printf("================================================\n");

    {
        int age = 25;
        int has_id = 1;

        if (age >= 18)
        {
            printf("Age condition satisfied.\n");

            if (has_id)
            {
                printf("ID available. Entry allowed.\n");
            }
            else
            {
                printf("ID not available.\n");
            }
        }
        else
        {
            printf("Under 18. Entry not allowed.\n");
        }
    }


    /* ========================================================
       11. CONDITIONAL OPERATOR ?:
       ======================================================== */

    printf("\n================================================\n");
    printf("11. CONDITIONAL OPERATOR\n");
    printf("================================================\n");

    {
        int n = 10;

        /*
           condition ? value_if_true : value_if_false
        */

        printf("%s\n", (n % 2 == 0) ? "Even" : "Odd");

        /*
           This is useful for simple decisions.

           It is NOT a replacement for complicated if-else
           structures.
        */
    }


    /* ========================================================
       12. switch STATEMENT
       ======================================================== */

    printf("\n================================================\n");
    printf("12. switch-case\n");
    printf("================================================\n");

    {
        int choice = 2;
// choice can be integer or character. No float/String
        switch (choice)
        {
            case 1:
                printf("Addition selected.\n");
                break;

            case 2:
                printf("Subtraction selected.\n");
                break;

            case 3:
                printf("Multiplication selected.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

        /*
           break prevents execution from falling into
           the next case.
        */
    }


    /* ========================================================
       13. switch FALL-THROUGH - TRICKY CASE
       ======================================================== */

    printf("\n================================================\n");
    printf("13. switch FALL-THROUGH\n");
    printf("================================================\n");

    {
        int value = 1;

        switch (value)
        {
            case 1:
                printf("Case 1 executed.\n");

                /*
                   NO break here.
                   Therefore execution continues into case 2.
                */

            case 2:
                printf("Case 2 also executed.\n");
                break;

            default:
                printf("Default executed.\n");
        }

        /*
           Output:

           Case 1 executed.
           Case 2 also executed.

           This is called FALL-THROUGH.
        */
    }


    /* ========================================================
       14. INTENTIONAL FALL-THROUGH
       ======================================================== */

    printf("\n================================================\n");
    printf("14. INTENTIONAL FALL-THROUGH\n");
    printf("================================================\n");

    {
        int day = 7;

        switch (day)
        {
            case 1:
            case 7:
                /*
                   Both 1 and 7 use the same block.
                */
                printf("Weekend\n");
                break;

            default:
                printf("Weekday\n");
        }
    }


    /* ========================================================
       15. switch WITH CHARACTER
       ======================================================== */

    printf("\n================================================\n");
    printf("15. switch WITH CHARACTER\n");
    printf("================================================\n");

    {
        char grade = 'A';

        switch (grade)
        {
            case 'A':
                printf("Excellent\n");
                break;

            case 'B':
                printf("Very Good\n");
                break;

            case 'C':
                printf("Good\n");
                break;

            default:
                printf("Other grade\n");
        }
    }


    /* ========================================================
       16. default IS OPTIONAL
       ======================================================== */

    printf("\n================================================\n");
    printf("16. default CASE\n");
    printf("================================================\n");

    {
        int n = 100;

        switch (n)
        {
            case 1:
                printf("One\n");
                break;

            case 2:
                printf("Two\n");
                break;

            /*
               No case matches.
               default executes.
            */

            default:
                printf("No matching case.\n");
        }
    }


    /* ========================================================
       17. for LOOP
       ======================================================== */

    printf("\n================================================\n");
    printf("17. for LOOP\n");
    printf("================================================\n");

    {
        int i;

        /*
           for(initialization; condition; update)

           Step 1: i = 1
           Step 2: check i <= 5
           Step 3: execute body
           Step 4: i++
           Step 5: check condition again
        */

        for (i = 1; i <= 5; i++)
        {
            printf("%d ", i);
        }

        printf("\n");
    }


    /* ========================================================
       18. for LOOP WITH MULTIPLE VARIABLES
       ======================================================== */

    printf("\n================================================\n");
    printf("18. MULTIPLE EXPRESSIONS IN for\n");
    printf("================================================\n");

    {
        int i, j;

        /*
           Comma operator allows multiple expressions.

           i = 1, j = 5
           condition: i <= 5
           update: i++, j--
        */

        for (i = 1, j = 5; i <= 5; i++, j--)
        {
            printf("i = %d, j = %d\n", i, j);
        }
    }


    /* ========================================================
       19. INFINITE for LOOP
       ======================================================== */

    printf("\n================================================\n");
    printf("19. INFINITE for LOOP\n");
    printf("================================================\n");

    /*
       DO NOT RUN this loop as written!

       for (;;)
       {
           printf("Infinite loop");
       }

       All three parts are optional.

       for(;;) means:

       initialization -> absent
       condition      -> absent
       update         -> absent

       Therefore it keeps running forever.

       It is commonly used in programs that are intended
       to run continuously.

       Example:
       while (1)
       {
           ...
       }

       is another way to create an infinite loop.
    */

    printf("for(;;) creates an infinite loop.\n");


    /* ========================================================
       20. while LOOP
       ======================================================== */

    printf("\n================================================\n");
    printf("20. while LOOP\n");
    printf("================================================\n");

    {
        int i = 1;

        /*
           while checks the condition BEFORE executing
           the body.

           Therefore it is an ENTRY-CONTROLLED loop.
        */

        while (i <= 5)
        {
            printf("%d ", i);
            i++;
        }

        printf("\n");
    }


    /* ========================================================
       21. while MAY EXECUTE ZERO TIMES
       ======================================================== */

    printf("\n================================================\n");
    printf("21. while MAY EXECUTE ZERO TIMES\n");
    printf("================================================\n");

    {
        int i = 10;

        while (i < 5)
        {
            /*
               This block will never execute.

               10 < 5 is FALSE before the first iteration.
            */

            printf("This will not print.\n");
            i++;
        }

        printf("while loop ended without executing its body.\n");
    }


    /* ========================================================
       22. do-while LOOP
       ======================================================== */

    printf("\n================================================\n");
    printf("22. do-while LOOP\n");
    printf("================================================\n");

    {
        int i = 1;

        /*
           do-while executes the body FIRST,
           then checks the condition.

           Therefore it executes at least once.
        */

        do
        {
            printf("%d ", i);
            i++;
        }
        while (i <= 5);

        /*
           NOTE:
           Semicolon after while(condition) is REQUIRED.
        */

        printf("\n");
    }


    /* ========================================================
       23. do-while TRICKY CASE
       ======================================================== */

    printf("\n================================================\n");
    printf("23. do-while EXECUTES AT LEAST ONCE\n");
    printf("================================================\n");

    {
        int i = 100;

        do
        {
            printf("This executes once even though i = 100.\n");
        }
        while (i < 5);
    }


    /* ========================================================
       24. break IN A LOOP
       ======================================================== */

    printf("\n================================================\n");
    printf("24. break\n");
    printf("================================================\n");

    {
        int i;

        for (i = 1; i <= 10; i++)
        {
            if (i == 6)
            {
                break;      // Immediately terminates loop
            }

            printf("%d ", i);
        }

        printf("\n");
    }


    /* ========================================================
       25. continue IN A for LOOP
       ======================================================== */

    printf("\n================================================\n");
    printf("25. continue IN for\n");
    printf("================================================\n");

    {
        int i;

        for (i = 1; i <= 5; i++)
        {
            if (i == 3)
            {
                continue;   // Skip rest of current iteration
            }

            printf("%d ", i);
        }

        /*
           Output:
           1 2 4 5

           3 is skipped.
        */

        printf("\n");
    }


    /* ========================================================
       26. continue IN while - TRICKY CASE
       ======================================================== */

    printf("\n================================================\n");
    printf("26. continue IN while\n");
    printf("================================================\n");

    {
        int i = 1;

        while (i <= 5)
        {
            if (i == 3)
            {
                i++;
                /*
                   IMPORTANT:

                   We increment i BEFORE continue.

                   Otherwise i would remain 3 forever.
                */

                continue;
            }

            printf("%d ", i);
            i++;
        }

        printf("\n");
    }


    /* ========================================================
       27. DANGEROUS continue - INFINITE LOOP
       ======================================================== */

    printf("\n================================================\n");
    printf("27. DANGEROUS continue EXAMPLE\n");
    printf("================================================\n");

    /*
       DO NOT RUN this code:

       int i = 1;

       while (i <= 5)
       {
           if (i == 3)
               continue;

           printf("%d ", i);
           i++;
       }

       Why?

       At i = 3:

       continue
          ?
       i++ is skipped
          ?
       i remains 3
          ?
       condition remains TRUE
          ?
       continue again
          ?
       INFINITE LOOP
    */

    printf("Never forget to update the loop variable before\n");
    printf("continue when necessary in a while loop.\n");


    /* ========================================================
       28. break IN NESTED LOOPS
       ======================================================== */

    printf("\n================================================\n");
    printf("28. break IN NESTED LOOPS\n");
    printf("================================================\n");

    {
        int i, j;

        for (i = 1; i <= 3; i++)
        {
            for (j = 1; j <= 5; j++)
            {
                if (j == 3)
                {
                    break;
                }

                printf("(%d,%d) ", i, j);
            }

            printf("\n");
        }

        /*
           IMPORTANT:

           break terminates ONLY the nearest/innermost loop.

           It does NOT terminate both loops.
        */
    }


    /* ========================================================
       29. continue IN NESTED LOOPS
       ======================================================== */

    printf("\n================================================\n");
    printf("29. continue IN NESTED LOOPS\n");
    printf("================================================\n");

    {
        int i, j;

        for (i = 1; i <= 2; i++)
        {
            for (j = 1; j <= 4; j++)
            {
                if (j == 2)
                {
                    continue;
                }

                printf("(%d,%d) ", i, j);
            }

            printf("\n");
        }

        /*
           continue affects the nearest loop only.

           Here it skips j = 2 for each value of i.
        */
    }


    /* ========================================================
       30. EMPTY LOOP BODY
       ======================================================== */

    printf("\n================================================\n");
    printf("30. EMPTY LOOP BODY\n");
    printf("================================================\n");

    {
        int i;

        /*
           The semicolon immediately after for(...)
           represents an EMPTY loop body.

           This loop does all its work in the loop header.
        */

        for (i = 0; i < 5; i++)
            ;

        printf("Loop completed. i = %d\n", i);
    }


    /* ========================================================
       31. goto
       ======================================================== */

    printf("\n================================================\n");
    printf("31. goto\n");
    printf("================================================\n");

    {
        int n = -5;

        if (n < 0)
        {
            goto negative_number;
        }

        printf("Number is positive.\n");

        /*
           This statement is skipped because goto jumps
           directly to the label.
        */

    negative_number:

        printf("Control reached the label.\n");
    }


    /* ========================================================
       32. goto WITH LABEL
       ======================================================== */

    printf("\n================================================\n");
    printf("32. goto LABEL\n");
    printf("================================================\n");

    {
        int x = 1;

    repeat:

        printf("x = %d\n", x);

        x++;

        /*
           goto can create a loop.

           This demonstrates why excessive use of goto
           can make programs difficult to understand.
        */

        if (x <= 3)
        {
            goto repeat;
        }
    }


    /* ========================================================
       33. return
       ======================================================== */

    printf("\n================================================\n");
    printf("33. return\n");
    printf("================================================\n");

    /*
       We cannot demonstrate an early return from main here
       without terminating the entire remaining program.

       But this is the basic idea:

       if (error)
       {
           return 0;
       }

       return transfers control out of the current function.
    */

    printf("return 0 at the end of main indicates successful termination.\n");


    /* ========================================================
       34. FINAL SUMMARY
       ======================================================== */

    printf("\n================================================\n");
    printf("CONTROL STATEMENTS SUMMARY\n");
    printf("================================================\n");

    printf("if          -> execute when condition is true\n");
    printf("if-else     -> choose between two alternatives\n");
    printf("else-if     -> choose among multiple conditions\n");
    printf("nested if   -> if inside another if\n");
    printf("switch      -> choose among fixed integral/character values\n");

    printf("for         -> repetition using initialization/condition/update\n");
    printf("while       -> repeat while condition is true\n");
    printf("do-while    -> execute once, then repeat while true\n");

    printf("break       -> terminate nearest loop/switch\n");
    printf("continue    -> skip current iteration of nearest loop\n");
    printf("goto        -> jump to a labelled statement\n");
    printf("return      -> leave the current function\n");

    /*
       Finally:

       return 0;

       terminates main() and normally tells the operating system
       that the program completed successfully.
    */

    return 0;
}
