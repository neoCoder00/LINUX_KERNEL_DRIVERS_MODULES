#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
embedded systems
linux kernel system & device driver setup.
    - LINUX kernel module syntax.
    - character device driver implementation.
    - platform device and platform driver concepts
    - platform driver implementation.
    - device instantiation thrigh device tree nodes.
    - host running latest ubuntu 64-bit
    - target: Beaglebone Black Rev A5.
    - installing package on host: boot-loader images & latest debian image root file system for beaglebone black.
    - https://www.udemy.com/course/linux-device-driver-programming-using-beaglebone-black/?couponCode=LETSLEARNNOWPP
    - 

*/
//run gcc script_name.c -o script_name_alias to compile code.
int main(){
    //declaring and initializing different variable data types.
    /*
        data type symbols
            %c - char/single character - only compiles with 
            %f - float/double
            %d - integer
            \n - newline
            \r - carriage return
            \t - tab
    */
        
    /*
        variable initialization
            - set, change, examine variables
                type var_name;

                type var_name = 'value';

        updating values

            - update values throughout application.

            - set random variable-values to equal different random variable-values of the same type.

        constants

            - special types prevent any changes during execution once the value is set at declaration. 
            
            - const type VARIABLE_NAME

        

        


    */
    int int_var0 = 0;

    int int_var1 = 1;

    int int_var2 = 2;

    char char_var0 = 'a';

    char char_var1 = 'b';

    char char_var2 = 'c';


    float float_var0 = 100.1;

    
    
    //allows for standard output to the terminal.
    printf("test output init:\n\n");

    printf("first int val: %d\n\n", int_var0);

    printf("second int val: %d\n\n", int_var1);

    printf("third int val: %d\n\n", int_var2);
    
    printf("first char val: %c\n\n", char_var0);

    printf("second char val: %c\n\n", char_var1);

    printf("third char val: %c\n\n", char_var2);
    
    /*
        float vs double
            - used for different situations

            float has less precision than a double
                - 6 vs 15 decimal places

                - takes up less memory than a double

                - slow
            
            double has more precision

                - 15 vs 6 decimal places than float

                - takes up more memory

                - fast

            system rounds off values when using double & float
                - float - unexpected results

                - double - optimal & accurate results needed from double when building more scientific applications. 

        
        CASTING TYPES

            - change the value type of a variable and use it for other purposes.

            - IMPLICIT type conversion 
            
                - set one variable to be the same as another.
                but their types do not match, the compiler will try to convert them.

                int a;
                double b = 100.0;
                a = b;


                - It generally takes place when in an expression more than one data type is present.

                - In such condition type conversion (type promotion) takes place to avoid loss of data. 
                All the data types of the variables are upgraded to the data type of the variable with the largest data type.



            - EXPLICITLY type conversion 
            
                - simply telling the compiler what type you want to set it to.

                a = b;
                a = (int)b;

                - if b was something other than 3.0, such as 3.2, we are telling the compiler to make it work, so it would set it to 3.

            
    */

    //outputs float value adding one decimal place.
    printf("first float val: %.1f\n\n", float_var0);

    //outputs float value adding two decimal places
    printf("first float val: %.2f\n\n", float_var0);   
    
    //outputs float value adding no decimal places
    printf("first float val: %.0f\n\n", float_var0);

    int a;

    a = (int)float_var0;

    printf("float_var0 is now an integer %d", a);

    printf("\n");

    printf("\n");


    /*
        operators

            <common operator operation>

            performing basic mathematical operations on variables and values using common symbols.

            assigning values to variables and/or performing basic mathematical operations using shorthand operations.

            comparing two values and/or variables against each other to return a true/false.

            using logical operators (and, or, and not).

            mathematical operators

                 + , - , * , /, //, %
    */
    // simple addition
    int num0 = 10;
    int num1 = 10;
    int sum_num0_num1 = num0 + num1;
    printf("%d", sum_num0_num1);

    //write function that prints multile new lines.
    printf("\n");
    printf("\n");

    // type casting
    // int to float

    float float_sum_num;

    float_sum_num = (float)sum_num0_num1;
    printf("%2.f", float_sum_num); //outputs the converted integer into a float using 2 decimal place values.

    //write function that prints multile new lines.
    printf("\n");
    printf("\n");


    /*
    incrementing and decrementing

        shorthand method of incrementing interger values.
    */

    int num2 = -1;
    num2++;
    printf("%d", num2);

    printf("\n");
    printf("\n");

    /*
    shorthand assignment

        utilize '+=' to reassign a sum of a variable. 
    */

    //basic method.
    int num3 = 0;
    int num4 = 1;
    num3 = num3 + num4;

    //shorthand sum reassignment
    num3 += num4;

    printf("%d", num3);
    printf("\n");
    printf("\n");


    /*
    comparison operators

        assignment =
        
        equal/checks equality of values ==

        not equal !=

        greater than >

        greater than or equal >=

        less than <
        
        less than or equal <=
    */
    
    const char fav_letter = 'A'; //constant variables prevent reassignment.
    printf("compiled char > %c", fav_letter);
    printf("\n");
    printf("\n");
    const char new_fav_letter = 'B';//attempting to reassign the fav_letter character status: FAIL.
    printf("newly compiled char > %c", new_fav_letter);
    /*
        conditionals

        - code logic that enables programs to make 
        decisions based on evaluating conditions.

        - if, else if, else.

        - switch statements

        - relational and logical operators

        - ternary operators
    */
    srand (time(NULL));
    int lvl = rand() % 2;
    /*
        if satement
        
        - used to test an expression for truth 
        and execute some code based on it.

        - if, else if, else.
    */
    // If lvl is 0: high
    // If lvl not 0: low
    //comparing random int to 0.
    if (lvl == 0) {
        printf("\n\nhigh-level > back-end\n\n");
    } else {
        printf("\n\nlow-level > firmware\n\n");
    }
    
    if (lvl == 1) {
        printf("high-level > back-end > js code\n");
    } else {
        printf("low-level > firmware > c code\n\n");
    }

    /*
        no compilation.
        if(fav_letter >= new_fav_letter){
            printf("A is greater than or equal to B\n");
        }
    */


    if(fav_letter <= new_fav_letter){
        printf("\nA is less than or equal to B\n\n");
    }

    /*
        conditionals: working with operators
            - && - and
            - || - or
            - ! - not
    */
    int var0 = 0;
    int var1 = 1;

    if(var0 > 0 && var1 > 0){
        printf("all values are greater than 0");
    }

    printf("\nprevios compilation failed\n\n");

   

    if(var0 < 0 || var1 < 0){
        printf("all values are lesser than 0");
    }

    if(var0 <= 0 || var1 >= 0){
        printf("%d",var0);
        printf(" <- is less than or equal to 0\n\n");
        printf("%d",var1);
        printf(" <- is greater than or equal to 0\n");
        printf("\ncompilation successful\n\n");
    }

    /*
        else clause
            - add an else clause to an if statement to provide 
            code that will only be executed if the initial if condition is false.
    */
    if(var0 > 0){
        printf("less than 0\n");
    }else{
        printf("not less than 0\n\n");
    }

    if(var1 < 0){
        printf("less than 0\n");
    }else{
        printf("not less than 0\n\n");
    }

    /*
        else if
            - else if statement always comes after the if statement 
            and before the else statement (if there is one). 
            Like the else statement, else if statements are also always optional!
    */
    if(var1 <= 0){
        printf("less than or equal to 0\n");
    }else if(var0 >= 1){
        printf("greater than or equal to 0\n\n");
    }else{
        printf("not equal to 0.\n\n");
    }

    /*
        switch statement
            - A switch statement provides an alternate syntax that is easier to read and write. 
            However, you are going to find these less frequently than if, else if, and elses.

            - The switch keyword initiates the statement and is followed by (), 
            which contains the value that each case will compare. 
                - One restriction on this expression is that it must evaluate to an 
                integral type (int, char, short, long, long long, or enum).

                - Inside the block, {}, there are multiple cases. The case keyword checks if the 
                expression matches the specified value that comes after it.

                - The break keyword tells the computer to exit the block and not execute any more 
                code or check any other cases inside the code block.

                - At the end of each switch statement, there is a default statement. If none of the cases are true, 
                then the code in the default statement will run. It’s essentially the else part.

                - Note: Without the break keyword at the end of each case, the program would execute the code for the 
                first matching case and all subsequent cases, including the default code. 

                - 
    
    */
    switch(var0){
        case 0:
            printf("positive/even\n");
            break;
        case 1:
            printf("positive/odd\n");
            break;
        case 2:
            printf("positive/even\n");
            break;
        case 3:
            printf("positive/odd\n");
            break;
        case 4:
            printf("positive/even\n");
            break;
        default:
            printf("unidentified\n");
            break;
    }

    // random number generator output.
    int random_int = rand() % 2;
    printf("\ntarget > %d\n\n", random_int);

    random_int = rand();
    printf("target > %d\n", random_int);
    switch(random_int){
        case 0:
            printf("\nthe number is %d\n", random_int);
            break;
        case 1:
            printf("\nthe number is %d\n", random_int);
            break;
        case 2:
            printf("\nthe number is %d\n", random_int);
            break;
        case 3:
            printf("\nthe number is %d\n", random_int);
            break;
        case 4:
            printf("\nthe number is %d\n", random_int);
            break;
        case 5:
            printf("\nthe number is %d\n", random_int);
            break;
        default:
            printf("\nnumber not listed.\n");
            break;
    }   

    /*
        ternary operators
            - a built-in special way to shortcut an if / else statement into one line.

            -  most applicably used when an if / else statement returns a value, but can also work otherwise. 
                - deciding what to output in a print statement.

                - condition ? do something : do something else;
    */

  // space weight converter.
  double weight;
  int x;
 
  printf("Please enter your current earth weight: ");
  scanf("%lf", &weight);
 
  printf("\nI have information for the following planets:\n\n");
  printf("\t1. Mercury\t2. Venus\t3. Mars\t4. Jupiter\n");
  printf("\t5. Saturn\t6. Uranus\t7. Neptune\n\n");
 
  printf("Which planet are you visiting? ");
  scanf("%d", &x);
  
  /*
    if (x == 1) {
      weight = weight * 0.38;
    } else if (x == 2) {
      weight = weight * 0.91;
    } else if (x == 3) {
      weight = weight * 0.38;
    } else if (x == 4) {
      weight = weight * 2.34;
    } else if (x == 5) {
      weight = weight * 1.06;
    } else if (x == 6) {
      weight = weight * 0.92;
    } else if (x == 7) {
      weight = weight * 1.19;
    }
  */

  switch(x){
    case 1:
      weight = weight * 0.38;
      break;
    case 2:
      weight = weight * 0.91;
      break;
    case 3:
      weight = weight * 0.38;
      break;
    case 4:
      weight = weight * 2.34;
      break;
    case 5:
      weight = weight * 1.06;
      break;
    case 6:
      weight = weight * 0.92;
      break;
    case 7:
      weight = weight * 1.19;
      break;
    default:
      printf("unidentified value for %c", x);
      break;
  }
  
  printf("\nYour weight: %lf\n", weight);
  printf("\n");


//program that prints out an entered date in string/int notation.
  int month, day, year;

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  // Don't worry about the `scanf()` below, you'll learn more about these later!
  scanf("%d /%d /%d", &month, &day, &year);
  // Split the user input into 3 variables for the date
  // Print the month
  switch(month){
    case 1:
       printf("\nJanuary ");
       break;
    case 2:
       printf("\nFebruary ");
       break;
    case 3:
       printf("\nMarch ");
       break;
    case 4:
       printf("\nApril ");
       break;
    case 5:
       printf("\nMay ");
       break;
    case 6:
      printf("\nJune ");
      break;
    case 7:
       printf("\nJuly ");
       break;
    case 8:
       printf("\nAugust ");
       break;
    case 9:
      printf("\nSeptember ");
      break;
    case 10:
      printf("\nOctober ");
      break;
    case 11:
       printf("\nNovember ");
      break;
    case 12:
       printf("\nDecember ");
       break;

  }


  

/*
    suffixes
    st, nd, rd, th
*/
// Print the day & suffix
  printf("%d", day);


  switch(day){
    case 1: case 21: case 31:
      printf("st, ");
      break;
    case 2: case 22:
      printf("nd, ");
      break;
    case 3: case 23:
      printf("rd, ");
      break;
    default:
      printf("th, ");
      break;
  }
  printf("%d", year);
  printf(".\n");
  printf("\n");

  




















}