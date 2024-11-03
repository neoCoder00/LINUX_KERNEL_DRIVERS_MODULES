#include <stdio.h>
/*
#include <stdio.h>

    a preprocessor directive that includes the standard c Input/Output Library header file <stdio.h>.

    the header file provides functionalities for input and output operations, such as reading from 
    and writing to the console, file handling, and formatted I/O.
*/

#include <stdlib.h>
/*
#include <stdlib.h>

    a preprocessor directive that provides the c standard library for performing general purpose operations.

    the header file provides functionalities for memory allocation, process control, random number generation & conversions.
*/


#include <time.h>
#include <string.h>


/*
to compile and execute a c script.

    1. run gcc scriptName.c.

    2. run ./a.out execute script.

    or

    3. gcc scriptName.c -o scriptName

    4. ./scriptName
*/
//int main(), defines the entry point of the C program. It’s where the program execution begins.
int main(){
    //declaring and initializing different variable data types.
    /*
        data type symbols
            %c - char/single character 
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

            - special types prevent any changes during execution 
            once the value is set at declaration. 
            
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

    //strings standard output
    printf("test output init:\n\n");


    //integers standard output
    printf("first int val: %d\n\n", int_var0);

    printf("second int val: %d\n\n", int_var1);

    printf("third int val: %d\n\n", int_var2);
    
    //characters standard output
    printf("first char val: %c\n\n", char_var0);

    printf("second char val: %c\n\n", char_var1);

    printf("third char val: %c\n\n", char_var2);
    
    

    /*
        float vs double
            - used for different situations

            float has less precision than a double
                - 6 vs 15 decimal places

                - takes up less memory than a double

                - slower
            
            double has more precision

                - 15 vs 6 decimal places than float

                - takes up more memory

                - faster

            system rounds off values when using double & float
                - float - unexpected results

                - double - optimal & accurate results needed from double 
                when building more scientific applications that perform precise 
                calculations.



        
        TYPE CASTING

            - change the value type of a variable and use it for other purposes.

            - IMPLICIT type conversion 
            
                - set one variable to be the same as another.
                but their types do not match, the compiler will try to convert them.

                int a;

                double b = 100.0;

                //b is now an integer because it is store within an int data-type varible.
                a = b;


                - It generally takes place when in an expression more than one data type is present.

                - In such condition type conversion (type promotion) takes place to avoid loss of data. 
                All the data types of the variables are upgraded to the data type of the variable with 
                he largest data type.



            - EXPLICITLY type conversion 
            
                - simply telling the compiler what type you want to set it to.

                a = b;
                a = (int)b;

                - if b was something other than 3.0, such as 3.2, 
                we are telling the compiler to make it work, so it would set it to 3.

            
    */
    
    //outputs float value adding one decimal place.
    printf("first float val: %.1f \n\n", float_var0);

    //outputs float value adding two decimal places
    printf("first float val: %.2f \n\n", float_var0);   
    
    //outputs float value adding no decimal places
    printf("first float val: %.0f\n\n", float_var0);
    
    //declaring an empty int variable to store a float var in for conversion.
    int a;

    a = (int)float_var0;

    printf("float_var0 is now explicitly an integer %d", a);

    printf("\n\n");

    

    
    /*
        operators

            <common operator operation>

            performing basic mathematical operations on variables and values using common symbols.

            assigning values to variables and/or performing basic mathematical operations using shorthand operations.

            comparing two values and/or variables against each other to return a true/false.

            using logical operators (and, or, and not).

            mathematical operators

                 + , - , * , /, //, %

    // simple addition
    */


    int num0 = 10;

    int num1 = 10;

    int sum_num0_num1 = num0 + num1;

    printf("%d\n\n", sum_num0_num1);

    int sum_num0_num1_sum_var = sum_num0_num1 + 1;

    printf("adding 1 to addition variable value %d", sum_num0_num1_sum_var);
    

    //write function that prints multile new lines.
    printf("\n\n");
    

    /*
        type casting
    */ 
    //declaring a float variable.
    float float_sum_num;

    //converting an int to a float.
    float_sum_num = (float)sum_num0_num1;

    
    //prints the converted integer into a float using 2 decimal place values.
    printf("%2.f", float_sum_num);
    

    //new line
    printf("\n\n");
    
    //type casting
    int int_var3;

    int_var3 = (int)float_sum_num;
    printf("float converted into an integer -> %d\n", int_var3);



    


    /*
    incrementing and decrementing

        shorthand method of incrementing interger values.
    */
    
    int num2 = -1;

    //increment by 1.
    num2++;

    printf("%d\n\n", num2);//prints 0.

    int num5 = 0;

    num5++; //1
    printf("num5 incremented by 1 = %d\n\n", num5);

    int num6 = num5;
    
    num6++; //2
    printf("num6 incremented by 1 = %d\n\n", num6);


    /*
    shorthand assignment

        utilize '+=' to change the sum of a variable. 
    */

    //basic assignment & reassignment syntax.
    int num3 = 0;
    int num4 = 1;
    num5 = 2;
    num6 = 3;
    
    num5 = num5 + num6; //5
    printf("num5 incremented by num6 value = %d\n\n", num5);

    //3 + num5 = 8.
    num6 = num6 + num5;
    printf("num6 incremented by num5 value = %d\n\n", num6);

    //reassigning integer to its sum with another integer.
    num3 = num3 + num4; //1
    printf("num3 incremented by num4 value = %d\n\n", num3);

    //1 + num3 = 2
    num4 = num4 + num3; //2
    printf("num4 incremented by num3 value = %d\n\n", num4);




    //shorthand sum-reassignment
    num3 += num4;
    printf("shorthand: num3 incremented by num4 value = %d\n\n", num3);//prints 3.




    /*
    comparison operators

        assignment =
        
        equal/checks equality of two values ==

        not equals !=

        greater than >

        greater than or equal >=

        less than <
        
        less than or equal <=


    comparison operators - review 

        assignment =

        equals ==

        not equals !=

        greater than >

        less than <

        greater than or equal to >=

        less than or equal to <=




    
    
    
    */
    
    //constant variables prevent reassignment.
    const char fav_letter = 'A'; 

    printf("compiled char > %c", fav_letter);
    printf("\n\n");
    
    //attempting to reassign the fav_letter character status: FAIL.
    const char new_fav_letter = 'B';
    // new_fav_letter = fav_letter;
    printf("newly compiled char > %c", new_fav_letter);

    /*
    error marker is created when attempting to reassign a const value.
    fav_letter = new_fav_letter;
    printf("%c", fav_letter);
    */



    
    

    /*
        conditionals

        - code logic that enables programs to make 
        decisions based on evaluating conditions.

        - if, else if, else.

        - switch statements

        - relational and logical operators

        - ternary operators
    */
    srand (time(NULL) );
    int lvl = rand() % 2;
    /*
        if statement
        
        - used to test an expression for truth 
        and execute some code based on it.

        - if, else if, else.
    */

    // If lvl is 0: high
    // If lvl not 0: low
    // comparing random int to 0.
    if (lvl == 0) {
        printf("\n\nfirst level\n\n");
    } else {
        printf("\n\nlevel undefined\n\n");
    }
    
    if (lvl == 1) {
        printf("level 1\n");
    } else {
        printf("level undefined");
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
        conditionals: working with logical operators.
            - && - and
            - || - or
            - ! - not
    */
    int var0 = 0;
    int var1 = 1;

    if(var0 > 0 && var1 > 0){
        printf("all values are greater than 0.");
    }

    printf("\nnot greater than 0.\n\n");

   
    if(var0 < 0 || var1 < 0){
        printf("all values are lesser than 0.");
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
        printf("greater than 0.\n");
    }else{
        printf("not greater than 0.\n\n");
    }

    if(var1 < 0){
        printf("less than 0.\n");
    }else{
        printf("not less than 0.\n\n");
    }

    /*
        else if
            - else if statement always comes after the if statement 
            and before the else statement (if there is one). 
            Like the else statement, else if statements are also always optional!
    */

    if(var1 <= 0){
        printf("less than or equal to 0.\n");
    }else if(var0 >= 1){
        printf("greater than or equal to 0.\n\n");
    }else{
        printf("not equal to 0.\n\n");
    }

    /*
        switch statement
            - A switch statement provides an alternate syntax that is easier to read and write. 
            switch is used less frequently than if (else if, else) statement.
            
            - The switch keyword initiates the statement and is followed by (), 
            which contains the value that each case will compare. 

                - One restriction on this expression is that it must evaluate to an 
                integral type (int, char, short, long, long long, or enum).

                - Inside the block, {}, there are multiple cases. The case keyword checks if the 
                expression matches the specified value that comes after it.

                - The break keyword tells the computer to exit the block and not execute any more 
                code or check any other cases inside the code block.

                - At the end of each switch statement, there is a default statement. If none of the cases 
                are true, then the code in the default statement will run. It’s essentially the else part.

                - Note: Without the break keyword at the end of each case, the program would execute 
                the code for the first matching case and all subsequent cases, including the default code. 

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
            - a built-in special way to shortcut an if / else statement into one line of code.

            -  most applicably used when an if / else statement returns a value, but can also work otherwise. 
                - deciding what to output in a print statement.

                - true_condition ? do something : do something else;
    */

int varZero = 0;
int varOne = 1;

printf("%d ZERO & ONE VALUES:\n\n", varZero);
printf("%d ZERO & ONE VALUES:\n\n", varOne);

//implementing ternary operator as conditionals.
varZero > varOne ? printf("var 0 is greater\n\n") : printf("var 1 is greater\n\n");


  // space weight converter.
  double weight; //double value type

  int x; //integer value type

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
    }else{
        printf(""unidentified value for %c", x");
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

/*
    Splits the user input into 3 variables for the date.
    use & with every argument for scanf().
*/ 
  scanf("%d /%d /%d", &month, &day, &year);


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
  printf("\n");
  printf("\n");

/*
loops
    A loop is a way to repeat code or 
    a set of instructions until a specified condition is reached.

    Loops allow us to create efficient code that automates processes 
    to make scalable, manageable programs.

    while loop 
        - loop that runs a block of code as long as the condition is true.
        - loop will stop running when condition is false.
        - typically needs a counter to start and keep track of iterations.
*/

int counter = 0;
int end = 10;
while(counter <= end){
    printf("%d\n", counter);
    counter ++;
}
printf("\n");


//cubing a number.
int i = 9;

int square = 0;
// Write a while loop here:
// while(i >= 0){
while(i >= square){
    // output and int data type formatting.
    printf("%d\t%d\n", i, i * i);
    i--;
}

/*
loops
    do-while
        - does something first, and then checks the 
        condition afterward and loops in this manner until 
        the condition is no longer true.

        - The do-while loop is most often used when a program 
        wants to do something at least once before checking the condition.
*/
int counter1 = 10;
printf("---\n");
printf("init do-while");

//do-key word
do{
    //code-block to run at least once.
    printf("\n%d\n", counter1);
    counter1++;
}while(counter1 <= 20);
printf("---\n");



/*
foor-loop
    used when we know how many times 
    we need to iterate.

    for(int i = 0; i < 10; i++)
    1. initialization of a counter
    2. condition
    3. the change in the counter/increment/decrement i++, i--.
*/
int j;
for(j = 10; j >= 0; j -= 1){
    printf("decreasing %d by 2...\n", j);
    // decrementing a number on each iteration.
    j -= 1;
}
//printing out the final integer.
printf("%d\n", j);

int k;
for(k = 0; k >= -10; k -= 1 ){
    printf("decrementing values starting at 0 -> %d\n", k);
    k -=1;
}

/*
breaking out of loops.
    break keyword allows us to
    “break” out of a loop and stop it from running any more times. 

    "break" can increase the efficiency of a program and help minimize 
    its memory usage through unnecessary variables.

    'break' is most often used when a program wants to run a loop
    infinitely in a controlled manner. For example, 
    a program that runs until the user types “quit.” 
    In that instance, the program may run forever, 
    but will only break out of its running loop when the user tells it.
*/
    //counter/iteration variable
    int tries = 1;

    int passcode = 1235;

    // condition remains true until the counter/iteration variable reaches 3.
    while(tries <= 3){  
        
        printf("system lock initialized. enter passcode: ");

        scanf("%d", &passcode);

        tries++;//counting tries
        
        
        if(passcode == 1235){

            break;//breaking out of loop when passcode is correct.

            printf("system unlocked.");
        }
    }

    /*
    continue 
        - loop keyword that when reached it will immediately skip the rest of the statements
        inside the loop body and "continue" into the next iteration.
    */

    //check for every odd intteration.
    /*
        while(tries <= 5){
            if(tries % 2 == 0){
                continue;
            }
            printf("%d try is odd\n", tries);
        }
    

    */
    for(int count = 0; count <= 5; count++){
        if(count % 2 == 0){
            continue;
        }
        printf("%d iterration is odd\n", count);
    }
    
    /*
        ERRORS in C.
            - Great programmers understand that errors are part 
            of the process, and they know how to find the solution 
            to each while learning something new from them. 

            - CLASSIFYING ERRORS

                - compile-time errors: errors found by the compiler.

                    - classifying compile-time errors based on which language
                    rules they violate. exmaples:

                        - syntax errors
                        - semantic errors
                    
                    - compiler - first line of defense against errors.
            
                - link-time errors: errors found by the linker, when it is 
                trying to combine object files into an executable program.

                - run-time errors: errors found by checks in a running program.

                - logic errors: errors found by the programmer looking for the
                causes of erroneous results.



        fizzbuzz program
    */
    for(int i = 1; i <= 100; i++){
    
        
        if(i % 15 == 0){//checking for multiples of 3 and 5.
            printf("FizzBuzz\n");
        }else if(i % 3 == 0){//checking for multiples of 3.
            printf("Fizz\n");

        }else if(i % 5 == 0){//checking for multiples of 5.
            printf("Buzz\n");
            
        }else{
            printf("%d\n", i);//checks for non multiples of 3 or 5, & 3 & 5.
        }

  }


  /*
    ARRAYS in c

    - An array is a grouping of variables of any type into contiguous blocks of memory.

    - This data structure is especially useful in applications when there are many variables of 
    the same type that are related to each other.

    - Under the hood, a variable creates a number of variables in memory, which are stored contiguously. 
    
    - There are two types of arrays that can be created: an initialized array or an uninitialized array.

    - an uninitialized array is created without specifying the initial values it contains. 
        

        - to indicate to the compiler that age is an array of ints and not a single int variable, 
        we append [arraySize] (in this case, arraySize is four) to the end of the variable name.

        - int age[3];

    - general template for creating an uninitialized array is:

        dataType name[arraySize];

    - uninitialized arrays are static/size cannot change
    
    - uninitialized arrays can be populated later.

    - general template for creating an initialized arrays:

        dataType name[arraySize] = {firstElement, secondElement, thirdElement...};

    - 
  */

  //declaring and setting an int type single element unitialized-array to index 0.
  int emptyUninitArray[0];


  //accesses the first uninitialized-array's only/first element of 1 item ot 0.
  printf("[ accessing empty array elements ] => %d\n", emptyUninitArray[0]);
  
  //declaring and setting an int type unitialized-array to 10 items.
  int uninitIntArray[10];

  //declaring and setting an int type itialized-array with 5 items.
  int initIntArray[5] = {0, 1, 2, 3, 4};

  /*
  creating an initialized int array with no specific size declared.
  storing 6 items within the array.
  */
  int initNoSizeIntArray[] = {0, 1, 2, 3, 4, 5};


  //creating an initialized character array with no specific size declared.
  char no_set_size_char_array[] = {'a', 'b', 'c', 'd'};

  char setSizeCharArr[4] = {'e', 'f', 'g', 'h'};

  //unitialized float array, containing 10 items.
  float floatArray[10];


  //initialized float array with 4 items.
  float initFloatArray[4] = {1.0, 2.0, 3.1, 4.10};

  printf("valid array datastructures.\n");


  /*
  ARRAY ACCESS AND ELEMENT MODIFICATION
    array access
        arr[idx] - arr = array name.

        ar[idx] - idx = array index number.
    
    array element modification/re-assignment
        arra[idx] = newValue
    

    array element type consistency
        - be consistent with the data types. 

        - elements of an array of integers can only be 
        modified to represent other integer values; anything else will cause errors.


        - array element modification/reassignment.
  */
    initFloatArray[0] = 0.0;

    initFloatArray[3] = 0.0;

    printf("%f\n", initFloatArray[0]);

    printf("%f\n", initFloatArray[0]);

    printf("initFloatArray => last element\n");

    printf("%f\n", initFloatArray[1]);

/*
    LOOPING THROUGH ARRAYS

    - main benefit of arrays is the ability to work with large amounts of data 
    without assigning each piece of data its own variable name;

    - the size of the array has been hardcoded into the loop condition.

    - this is bad practice as it makes the loop only applicable to arrays of a single size.

   [ sizeof() ] -  method() that returns an integer that is the size of the array in bytes.
   makes a loop valid for arrays of any size.


unitialized array
loop that iterates over 10 array elements/numbers and adds 111 to each number.
*/
int loopTargetArray[10];

for(int i = 0; i < 10; i++){
    printf("%i\n", loopTargetArray[i] = i + 111);
}


/*
    type array_name[] = {}
    - sizeof(array_name)

        - returns the total number of bytes reserved
        by the array in memory, regardless of the type of elements.

        type varName = sizeof(array_name);

        - divide the total number of bytes by the type of the array as an argaument for the sizeof() method. 
        this will return the ACTUAL TOTAL NUMBER of elements in the array.

        type arrVarNameLen = sizeof(array_name)/sizeof(int);
*/

//double uninit array contains 5 elements.
double newUninitDblArray[5];

//stores the size of the double array in bytes.
double dblArrInBytes = sizeof(newUninitDblArray);

//prints out size of the array in bytes
printf("\n%f -> size of uninitialized double array in bytes\n\n", dblArrInBytes);

//stores the size of the double array as an int.
int dblArrSizeInt = sizeof(newUninitDblArray)/sizeof(double);

//prints out the size of the array as an integer.
printf("%d -> size of uninitialized double array as a number\n\n", dblArrSizeInt);








/*
MULTIDIMENSIONAL ARRAYS


an array containing other arrays

frequently used in mathematical applications 
that involve matrices and vectors. 

can be initialized or uninitialized upon its creation.

*/

//uninitialized 2 by 3 multi-dem-array.
int multiDemArr0[2][3];


//initialized 2 by 3 multi-dem-array.
int multiDemArr1[][3] = {{0, 1, 2}, {3, 4, 5}};


/*
ELEMENT ACCESS IN MULTIDIMENSIONAL ARRAYS

    Elements in a multidimensional array are accessed in like so:

        array[rowNumber - 1][columnNumber - 1];


    need nested loops to iterate through multidimsional array.


*/
int accessMatrixElement0 = multiDemArr1[1][2];//returns 5.
printf("\nsecond row, third colum element -> %d\n", accessMatrixElement0);

/*
challange: write code that will access and sum 
all of the elements in the multidem-array.
creates a 4x5 multidemensional array.
4x5 multi-dem array
*/
int matrix[][5] = {
{14, 10, 6, 4, 5}, 
{3, 7, 18, 11, 6}, 
{13, 9, 5, 1, 10}, 
{19, 12, 2, 1, 5}
};
int sum = 0;

//accesses the number of rows in multidemensional-array.
int rows = sizeof(matrix)/sizeof(matrix[0]);
printf("\n%d\n",rows);

//accesses the number of elements within each array of type multidemensional-array.
int cols = sizeof(matrix[0])/sizeof(int);
printf("\n%d\n", cols);

for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
        
        //each iteration sums each row's column element.
        sum += matrix[i][j];
        //prints out every iteration sum, until the last iteration sum is reached.
        printf("\n%i\n", sum);
    }
}
//prints the last iteration sum as an int.
printf("\n%d\n", sum);

/*
array excercise 0.

iterate through a 4x6 multi-dem array
and find the sum of all elements.

*/
int test_multidem_arr[][6] = {
    {0, 1, 2, 3, 4, 5},
    {1, 2, 3, 4, 5, 6},
    {2, 3, 4, 5, 6, 7}
};
//determining the size of the rows in the 2d array.
int test_rows = sizeof(test_multidem_arr)/sizeof(test_multidem_arr[0]);

//determining the size of the columns in the 2d array.
int test_cols = sizeof(test_multidem_arr[0])/sizeof(int);

printf("size of the rows in 2d array. %d\n", test_rows);
printf("size of the columns in 2d array. %d\n", test_cols);


int test_multidem_sum = 0;
for(int i = 0; i < test_rows; i++){
    for(int j = 0; j < test_cols; j++){
        // summing all elements (rows and columns elements).
        test_multidem_sum += test_multidem_arr[i][j];
    }
}
printf("accessing multidimensional array elements\n");
printf("\n%d", test_multidem_sum);

/*
array exercise 1.

CREATE AND ITERATE THROUGH AN ARRAY
OF INTEGERS.

*/
//creating an array of ints.
int test_int_arr[6] = {0, 1, 2, 3, 4, 5};

//return the amount of elements. as in number.
int test_size_of_array_num = sizeof(test_int_arr)/sizeof(test_int_arr[0]);

//accessing the array size in bytes memory.
int test_size_of_array_bytes = sizeof(test_int_arr);

//printing out the size of array elements.
printf("\nsize of latest array in number =  %d\n\n", test_size_of_array_num);

for(int i = 0; i < test_size_of_array_num; i++){
    //printing out all indices
    
    // printf("%d\n\n", test_int_arr[i]);
    //printing out all array elements.
    printf("element at %d ---> %d\n\n", i, i);
}


/*
STRINGS

    STRINGS ARE FORMATTED AS ARRAYS OF CHARS AND 
    ARE CONSEQUENTLY SUBJECT TO ALL PROPERTIES AND METHODS 
    ASSOCIATED WITH ARRAYS.

    THE MOST COMMON FUNCTION USED WITH STRINGS IS THE 'printf()' FUNCTION.

    STRINGS ARE ARRAYS OF CHARACTERS.

    A STRING CONNOT BE EXTENDED BY ADDING NEW CHARACTERS.

    A CHARACTER IN A STRING CANNOT BE DELETED.

##CREATING AND INITIALIZING EXPLICIT A STRING ARRAY##

    storing string elements into an array. 
    char arr_str[] = {'c', 'c'};


*/

//explicit string array.
char comp[] = {'s', 't', 'r', 'i', 'n', 'g', 
' ', 't', 'y', 'p', 'e', ' ', 'e', 'x', 'p', 'l', '\0'};

printf("\n%s\n\n", comp);

//implicit string array.
char compCode[] = "low level";

printf("\n%s\n\n", compCode);

/*
string excercise 0.
CREATING AN EXPLICIT STRING-ARRAY.

ACCESS AND ELEMENT WITHIN A STRING-ARRAY.

ITERATE THROUGH A STRING ARRAY.
*/
char new_test_str_arr[] = {
'S', 
'T', 
'R', 
'I', 
'I', 
'N', 
'G', 
'A', 
'R', 
'R', 
'A', 
'Y', 
'\0'
};

//prints out capital s, when accessing first array element.
printf("string arr element output ---> %c", new_test_str_arr[0]);

int get_test_str_arry_size = sizeof(new_test_str_arr)/sizeof(new_test_str_arr[0]);
printf("\n\nprinting out size of explicit array in number form ---> %d\n", get_test_str_arry_size);






/*
CHARACTER ACCESS AND MODIFICATION

    char accessedArrChar = arr_name[idx] - stores an accessed string array's element 
    within a character variable.

    arr_name[idx] = 'newValue' - stores a string array's index element replacement.

    printf("%c", accessedArrChar);

    printf("%s", arr);
*/

printf("\n%c", comp[0]);//prints out lower-s on new line.

comp[0] = 'S';//stores cap-s within an accessed indexed element.

char stores_new_str_char = comp[0];//stores a new explc-str-arr-char.

comp[0] = '$';//need to explicitly modify a string array element.

printf("\n%c\n", stores_new_str_char);//prints out $ character.

printf("\naccessing type ---> %s\n\n", comp);//print out a string type.

printf("\naccessing implicit string ---> %s\n\n", comp);//print out a string type.

/*
LOOPING THROUGH STRINGS ARRAY.

    CAN USE A WHILE-LOOP
    CAN USE A FOR-LOOP

    strlen(string_name) - used to get the length of the string.
*/
char embedded_init_char_arr[] = "embedded systems development";



// loop through the length of the string.
for(int i = 0; i < strlen(embedded_init_char_arr); i++){
    embedded_init_char_arr[i] = '*';//modifies indexed array elements.

    //prints out every modified character within the length of the string array, on every iteration.
    printf("%s\n", embedded_init_char_arr);

    // printf("\n%c\n\n", embedded[i]);//prints out each character within the string.
}


//declaring and initializing an implicit string array.
char embedded_str[] = "linux kernel";
int number;
printf("\n\nEnter a number: ");


//accepts user input.
scanf("\n%d", &number);

if(number % 2 == 1){
    int i = 0;//iteration counter,
    while(i < strlen(embedded_str)/2){//checks if i is less than half of the length of a string array.
        embedded_str[i] = '*';
        i++;
    }
    printf("\n%s\n", embedded_str);//prints out finished str-arr.
}else{
    printf("\n%s\n", embedded_str);//prints out finished str-arr.
}


/*
CONCATENATING STRINGS

    - STRING METHODS
        - strcat() - METHOD USED TO CONCATENATE STRINGS.
        MODIDFIES THE ORIGINAL STRING TO CONCAT TO THE SECOND STRING.
        
        - DOES NOT CREATE A 3RD STRING.

    - 

*/
char src_string[] = "+FIRST-HALF+";
char targ_string[] = "+SECOND-HALF+";

//string-method used to concat two strings together.
strcat(targ_string, src_string);
//prints out the new value of the target_string.
printf("\n%s\n\n", targ_string);

//concatenates a new string onto the previous string ( +SECOND-HALF++FIRST-HALF+ ).
strcat(src_string, targ_string);

//prints out ( +FIRST-HALF++SECOND-HALF++FIRST-HALF+ ).
printf("\n%s\n\n", src_string);



/*
string excercise 0.

CONCATENATE A STRING 
UTILIZING ARRAY METHODS.

CONCATS DESTINATION STRING TO SOURCE STRING.
*/

char test_dest_str[] = "++target++";
char test_src[] = "++source+++";

printf("%s", test_src);

// logic test_src += test_dest_str
strcat(test_dest_str, test_src);

printf("\n%s\n", test_dest_str);//++source++++target++

// logic test_dest_str += test_src
strcat(test_src, test_dest_str);

printf("\n%s\n", test_src);//++source+++++target++++source+++

//c development - https://www.w3schools.com/c/index.php


/*
COPYING STRINGS

    strcpy() - USED TO COPY A STRING INTO AN EMPTY CHARACTER ARRAY (EMPTY STRING).
    
        strcpy(target, source);

        - COPIES THE CONTENTS OF source STRING INTO
        THE target STRING.

        - SIZE OF THE EMPTY target STRING MUST BE GREATER THAN
        OR EQUAL TO THE LENGTH OF THE source STRING PLUS ONE FOR 
        THE NULL CHARACTER ('\0) IN ORDER TO ACCOMADATE ALL INCOMING
        CHARACTERS.

        - 

COPYING STRINGS EXECERCISE 1.
*/


//setting character string array.
char test_source[] = "test-string";

printf("\n%s\n", test_source);

//setting character string array to size limit of 10.
char test_target[10];//test_target character-STRING ARRAY NOT SET TO SAME LENGTH AS test_source STRING ARRAY.

int length = strlen(test_source) + 1;//storing the length plus 1 of the source string.

//setting an uninitialized character string array length to the int-length value of test_source plus 1.
char new_test_string[length];

/*setting the length of the target string to equal 
the length plus 1 of the source string.*/

//initialized character-string array.
char concat_this[] = "concated  ";

//copy source to destination.
strcpy(new_test_string, test_source);

printf("COPIED STRING -> %s\n", new_test_string);

//append source to destination.
strcat(concat_this, new_test_string);

printf("\n%s\n", new_test_string);//prints out copied string.

printf("\n%s\n", concat_this);




/*
POINTERS

pointers can access bytes of memory.

pointers contain/store the memory address of variables.

pointers 'point' to variables in memory.

a contiguos block of bytes is reserved for a variable in memory. 

pointers can be created for all data types:

byte, short, int, long, float, double, boolean, char & struct.

pointer syntax
dataType* name_of_pointer = nullptr;

dateType *name_of_pointer = nullptr;

*/

//integer variables.
int int_a = 0;

int int_b = 1;

/*
pointers that point to an int data type, 
which will change everytime the program is executed.
*/
int* ptr_a = &int_a;

int *ptr_b = &int_b;

printf("\nfirst c int pointer -> %p", ptr_a);
printf("\n\nsecond c int pointer -> %p\n", ptr_b);

char char_a = 'a';
char char_b = 'b';

char* ptr_char_a = &char_a;
char *ptr_char_b = &char_b;

printf("\nfirst c char pointer -> %p\n", ptr_char_a);
printf("\nsecond c char pointer -> %p\n", ptr_char_b);


/*
    pointers can point to unitialized
    variables within memories.
*/
double dub_var_a;
double* dub_ptr_a = &dub_var_a;
printf("\npointing to uninitialized variable in memory -> %p\n\n", dub_ptr_a);

double test_double = 100.05;
printf("printing test double -> %f\n\n", test_double);


/*  
loop that iterates 1 trillion times.
    for(int k = 0; k < 1000000000000; k++){
    printf("iteration -> %d\n", k);
}

POINTER, REFERNCE OPERATOR AND DEREFERENCED POINTER.
reference operator added to a variable - &var_name

stores the variable's memory address

syntax is commonly used when storing a 
variable's memory address within a pointer.



accessing a variable's memory address without printing a pointer.
*/

int int_var4 = 0;
int* int_var4_ptr = &int_var4;
printf("using reference operator for int -> %p\n\n", &int_var4);

//pointer excercise; use pointer.
char char_var3 = 'a';
char* char_var3_ptr = &char_var3;
printf("using a pointer to access a character variable's memory address -> %p\n\n", char_var3_ptr);

//accessing variable memory address.
char char_var4 = 'b';
char* char_var4_ptr = &char_var4;
printf("using a pointer to access a character variable's memory address -> %p\n\n", char_var4_ptr);

/*
dereference operator - operator used to access
the value stored at a variable's memory address 
pointed to by a pointer.


    *derefed_pointer_name;

    once a pointer is dereferenced, we can use 
    its contents as we would a regular variable.


    //variable contains a data type.
    type var_name = value;

    //pointer that holds reference operator and memory address for a variable. 
    type* pointer_name = &var_name;

    //the value obtained by dereferencing a pointer is the value of var_name.
    *pointer_name = value_type;

    //will print out the pointers memory address value.
    printf("%i", pointer_name);
*/

//storing character variable memory address in a pointer.
char char_var5 = 'c';
char* char_var5_ptr = &char_var5;

//print out variable mem address.
printf("points to char memory value -> %p\n\n", char_var5_ptr);

//accessing memory value with reference operator.
printf("accessing variable with a reference operator -> %p\n\n", &char_var5);


//using a dereferenced pointer to access a variables memory address.
printf("accessing variable data from within a dereferenced pointer -> %i\n\n", *char_var5_ptr);



//storing integer variable memory address in a pointer.
int int_var5 = 5;
int* int_var5_ptr = &int_var5;

//print out variable mem address using pointer.
printf("points to int memory value -> %p\n\n", int_var5_ptr);

//accessing memory value with reference operator.
printf("accessing variable mem address with a reference variable -> %p\n\n", &int_var5);

//accessing a dereferenced pointer's variable memory address.
printf("accesses a variables primitive value%i\n\n", *int_var5_ptr);

//storing a new value within a dereferenced pointer.
//using a dereferenced pointer to access a variables memory address.
*int_var5_ptr = 6;
printf("accessing variable data from within a dereferenced pointer -> %i\n\n", int_var5);


//POINTER, REFERENCE OPERATOR AND DEREFERENCE OPERATOR.
//variable
float test_float_0 = 0.1;
printf("float variable =  %f\n", test_float_0);

//pointer: points to/contains a variable's memory address.
float* test_float_0_ptr = &test_float_0;
printf("pointing to float variable's memory address -> %p\n\n", test_float_0_ptr);

//reference operator: accesses a variable's memory address.
//not recommended to use reference operator on a float.
printf("reference operator accessing variable's memory address -> %i\n\n", &test_float_0);





/*
pointer arithmatic




*/







return 0;

}

/*  
LKM DEVELOPMENT DOCUMENTATION - https://sysprog21.github.io/lkmpg/#passing-command-line-arguments-to-a-module

#LINUX KERNEL MODULES NOTES

LINUX KERNEL MODULES

        - ARE PROGRAMS THAT ARE CAPABLE OF BEING DYNAMICALLY LOADED AND UNLOADED
        FROM WITHIN THE LINUX KERNEL AS NEEDED, WITHOUT NEEDING TO REBOOT &/OR
        RECOMPILING THE SYSTEM.

        - THESE MODULES ENHANCE THE KERNEL'S CAPABILITIES & EXTEND KERNEL
        FUNCTIONALITY.

        - WITHOUT LKMs/DDs - THE KERNEL WOULD NEED TO BE
        RECOMPILED &/OR REBOOTED WHEN NEW CODE & MODULES ARE 
        INTRODUCED TO THE KERNEL.

DEVICE DRIVERS === LINUX KERNEL MODULES

        - DEVICE DRIVERS ARE LINUX KERNEL MODULES, BUT NOT
        ALL LINUX KERNEL MODULES ARE DEVICE DRIVERS.

        - DEVICE DRIVERS - MODULES THAT FACILITATE KERNEL INTERACTIONS WITH NEW HARDWARE
        COMPONENTS CONNECTED TO THE SYSTEM.

        - WITHOUT LKMs/DDs - THE USE OF MONOLITHIC KERNELS WOULD REQUIRE
        DIRECT INTEGRATION OF NEW FUNCTIONALITIES INTO THE KERNEL IMAGE.

        - WITHOUT LKMs/DDs - THE USE OF MONOLITHIC KERNELS WILL REQUIRE FOR SYSTEM/KERNEL
        REBOOT & RECOMPILATION.

PACKAGES & UTILITIES REQUIRED

        - DEBIAN/UBUNTU SYSTEMS 
            
            - sudo apt-get install build-essential kmod.

        - RHEL/CENTOS/FEDORA SYSTEMS DEVELOPMENT TOOLS 

            - sudo dnf groupinstall "Development Tools" -  FOR DEVELOPMENT TOOLS

            - sudo dnf install kernel-devel kernel-headers - FOR KERNEL HEADERS & LKMD 
            PACKAGES.

            - sudo dnf install elfutils-libelf-devel - ADDITIONAL BUILD TOOLS.

WHAT MODULES ARE WITHIN A KERNEL?

        - sudo lsmod - DISCOVER/LIST MODULES ALREADY LOADED INTO THE CURRENT KERNEL. 

        - sudo cat /proc/modules - FILE WHERE KERNEL MODULES ARE STORED.

        - sudo lsmod | grep <lkm_name> - SEARCHES FOR A SPECIFIC KERNEL MODULE.

MODULES PRINTING PROCESS

        - MODULES CANNOT PRINT DIRECTLY TO THE SCREEN.

        - MODULES LOADED FROM AN 'X-TERM' WILL LOG INFORMATION
        AND WARNINGS SOLELY IN THE systemd journal.

        - journalctl - UTILITY USED TO READ KERNEL MODULES LOADED IN X-TERM.


HEADER FILES

        - HEADER FILES - EXPOSE KERNEL FUNCTIONS, STRUCTURES AND CONSTANTS
        NEEDED FOR LKM DEVELOPMENT.

        - HEADER FILES - ARE ESSENTIAL FOR DEVELOPING AND COMPILING
        KERNEL MODULES & LKMS.

        - HEADER FILES - USED FOR PROGRAMS THAT INTERACT CLOSELY WITH THE KERNEL.

        - HEADER FILES - MODULES OR DRIVERS THAT RUN IN KERNEL SPACE AND REQUIRE
        DIRECT ACCESS TO KERNEL INTERNALS.

        ----------------------------------
        
        - USER SPACE HEADERS LOCATIONS

            -> /usr/include/linux
            
            -> /usr/include/asm

        - KERNEL SPACE HEADERS LOCATIONS

            -> /usr/src/kernels/$(uname -r)

            -> /lib/modules/$(uname -r)/build/include
        
        RHEL/CentOS/FEDORA KERNEL HEADERS INSTALLATION & VERIFICATION

            - sudo dnf install kernel-devel kernel-headers

            - ls /usr/src/kernels/$(uname -r)/include

        DEBIAN/UBUNTU KERNEL HEADERS INSTALLATION & VERIFICATION

            - sudo apt-get install kmod linux-headers-$(uname -r)-generic

            - 


    RHEL BASED
    https://docs.redhat.com/en/documentation/red_hat_enterprise_
    linux/9/html/managing_monitoring_and_updating_the_kernel/index

    UBUNTU BASED
    
    #LINUX KERNEL MODULE & DEVICE DRIVER DEVELOPMENT: KERNEL-SPACE & USER-SPACE#

        *PURPOSE: DEVELOPING AND MANAGING THE KERNEL CAN EXTEND FUNCTIONALITY, IMPROVE SYSTEM
        PERFORMANCE, STABILITY, AS WELL AS PROVIDE THE ABILITY TO AUDIT THE SYSTEM AND TROUBLESHOOT 
        PROBLEMS.
        
        USER MEMORY/SPACE VS KERNEL MEMORY/SPACE

            - USER SPACE & KERNEL SPACE - REFERS TO MEMORY PROTECTION OR VIRTUAL MEMORY ADDRESS SPACES
            ASSOCIATED WITH EITHER USER APPLICATIONS OR KERNEL SPACE CODE.

                - KERNEL MEMORY - IS ACCESS-PROTECTED & PREVENTS DIRECT ACCESS 
                BY USER SPACE/MEMORY APPLICATIONS PROCESSES.

                - KERNEL MEMORY - ADDRESS IS MEMORY SPACE RESERVED FOR THE KERNEL.

                - KERNEL MEMORY - EXECUTION/PRIVILEGE MODE DIRECTLY ACCESSES USER MEMORY/SPACE 
                THAT IS RESERVED FOR USER PROCESSES.
                

            - KERNEL SPACE - HIGHLY PRIVILEDGED MODE OPERATIONS WITH FULL ACCESS TO ALL SYSTEM
                RESOURCES, INCLUDING HARDWARE ABD MEMORY.

                - CORE OS FUNCTIONS - LOCATION OF WHERE CORE OF THE OS, OR KERNEL
                RUNS. 

                - CORE OS FUNCTIONS - PERFORMS CRITICAL TASKS LIKE MANAGING HARDWARE INTERACTIONS, 
                PROCESS SCHEDULING, MEMORY MANAGEMENT.

                - DIRECT HARDWARE ACCESS - 

                - KERNNEL EXECUTION MODE - CODE THAT CAN FULLY CONTROL THE CPU.

                - KERNEL EXECUTION MODE - CAN DISABLE OR ENABLE LOCAL CPU INTERRUPTS.

                - KERNEL EXCEPTIONS - ARE GENERATED WHEN USER EXECUTION MODE ATTEMPTS
                TO DISABLE OR ENABLE LOCAL CPU INTERRUPTS.


            - USER SPACE - OS APPLICATIONS & COMPONENTS THAT RUN WITH LOWER SYSTEM ACCESS/PRIVILEGES.

                - USER EXECUTION MODE - CODE THAT HAS LIMITED CONTROL OF & ACCESS TO THE SYSTEM & MEMORY.


            - TYPICAL OS ARCHITECTURE - 

                - OS KERNEL IS RESPONSIBLE FOR ACCESSING AND SHARING THE HARDWARE RESOURCES 
                IN A SECURE AND FAIR MANNER WITH MULTIPLE APPLICATIONS.

                - LINUX KERNEL OFFERS A SET OF APIs THAT USER-SPACE APPLICATIONS USE CALLED "SYSTEM-CALLS".

                - SYSTEM CALLS - APIs THAT ALLOW THE USER-SPACE TO ACCESS RESOURCES FROM THE KERNEL SPACE.

                - DIFFERENT FROM REGULAR LIBRARY APIs, BECAUSE THEY ARE THE BOUNDARY WHERE EXECUTION MODES 
                SWITCH BETWEEN KERNEL MODE & USER MODE.

                - APPLICATION COMPATIBILITY: SYSTEM CALLS ARE RARELY CHANGED. ENFORCED BY LINUX KERNEL.

                - KERNEL LOGICAL SEPERATION: BUILT-INT MODULES/DRIVERS/CORE KERNEL CODE, CUSTOM LKM KERNEL MODULES & DEVICE DRIVER CODE ARE SEPARATE.



            - MONOLITHIC KERNEL

                - A KERNEL/OS WHERE THERE IS NO ACCESS PROTECTION BETWEEN VARIOUS KERNEL
                SUBSYSTEMS
                    
                    - EXECEPTION: CAN IMPLEMENT LSM(LINUX SECURITY MODULE FRAMEWORK).


                - WHERE PUBLIC FUNCTIONS CAN BE DIRECTLY CALLED BETWEEN
                VARIOUS SUBSYSTEMS.

                - KERNEL ARCHITECTURE THAT RUNS AS A SINGLE PROGRAM.

                - MONOLITHIC KERNEL IS AN OS ARCHITECTURE WHERE THE ENTIRE OS
                RUNS IN A SINGLE ADDRESS SPACE IN KERNEL EXECUTION MODE & PROMOTES 
                BETTER PERFORMANCE AND BETTER COMMMUNICATION BETWEEN COMPONENTS:

                    - MANAGING CPU

                    - MANAGING MEMORY

                    - MANAGING HARDWARE

                    - FILE SYSTEM MANAGEMENT

                    - DEVICE DRIVERS

                    - SYSTEM CALLS
                
                - IT IS COMPILED WITH OPTIONAL OR ADDITIONAL
                MODULES AS REQUIRED BY EACH USE CASE.

                - MOST MONOLITHIC KERNELS DO ENFORCE A LOGICAL SEPERATION BETWEEN SUBSYSTEMS.
                    
                    - EX: CORE KERNEL MODULES & DEVICE DRIVERS USE RELATIVELY STRICT APIs
                    BASED ON ASSIGNED KERNEL LICENSE.

                    - API NOTE: APIs MUST BE USED TO ACCESS SERVICES OFFERED BY ONE SUBSYSTEM 
                    OR DEVICE DRIVERS.
                    
                    - API NOTE: APIS USE PROCESS DEPENDS ON THE KERNEL'S IMPLEMENTATION 
                    AND ARCHITECTURE.


            - MICRO-KERNEL

                - ARCHITECTURE WHERE LARGE PARTS OF THE KERNEL ARE PROTECTED FROM EACH-OTHER
                USUALLY RUNNING AS SERVICES IN USER SPACE.

                - SIGNIFICANTLY LARGER PARTS OF THE KERNEL ARE NOW RUNNING IN USER MODE.
                REMAINING CODE THAT RUNS IN KERNEL MODE IS SIGNIFICANTLY SMALLER (MICRO-KERNEL).

                
                MICRO-KERNEL VS MONOLITHIC-KERNEL

                - MICRO-KERNEL ENFORCES MORE OF A MODULAR ARCHITECTURE DESIGN.
                    
                    -  

                - MONOLITHIC-KERNEL ALSO ENFORCES A MODULAR ARCHITECTURE DESIGN.

                    - COMPONENTS CAN BE ENABLED OR DISABLED AT COMPILE TIME.

                    - RUNTIME SUPPORT FOR LKM.

                    - ORGANIZED, LOGICAL & INDEPENDENT SUBSYSTEMS.

                    - STRICT INTERFACES WITH LOW PERFORMANCE OVERHEAD: [MACROS, INLINE-FUNCTIONS, FUNCTION POINTERS].
                        
                        - PERFORMANCE OVERHEAD: USE OF ADDITIONAL COMPUTATIONAL 
                        RESOURCES (CPU, memory, or storage) REQUIRED TO EXECUTE TASKS BEYOND WHAT IS NECESSARY.

                        - MACROS: CONSTRUCTS/DESIGNS THAT ARE USED TO DEFINE RESUABLE CODE, & REPLACE REPETATIVE TASKS,
                        AUTOMATE CODE GENERATION, PREPROCESSING.

            
            - ADDRESS SPACE

                - PHYSICAL ADDRESS SPACE 
                    - HOW RAM & DEVICE MEMORIES ARE VISIBLE ON THE MEMORY BUS.

                    - EX: 32BIT ARCHITECCTURE ON INTEL ARCHITECTURE - RAM MAPPED INTO LOWER PHYSICAL
                    ADDRESS SPACE.

                    - EX: 32BIT ARCHITECCTURE ON INTEL ARCHITECTURE - GRAPHICS CARDS MEMORY IS MAPPED HIGH 
                    IN THE PHYSICAL ADDRESS SPACE.

                
                - VIRTUAL ADDRESS SPACE

                    - A RANGE OF VIRTUAL ADDRESSES THAT AN OS GIVES TO PROCESSES.

                    - PROTECTED AREA OF MEMORY-ADDRESSES.
                    
                    - SEPARATE FROM PHYSICAL MEMORY ADDRESSES.

                    - ALLOWING PROGRAMS TO RUN IN THEIR OWN SPACE.

                    - CPU IDENTIFIES WHEN THE VIRTUAL MEMORY MODULE IS ENABLED.
                        - PROTECTED MODE/PAGING FUNCTIONALITY ENABLED.

                    - KERNEL SETS UP A MAPPING THAT CREATES A VIRTUAL ADDRESS SPACE IN WHICH
                    AREAS OF THIS SPACE ARE MAPPED TO CERTAIN PHYSICAL MEMORY AREAS.

                    ##RELATED TO VIRTUAL ADDRESS SPACE##
                    - PROCESS ADDRESS SPACE - PART OF THE VIRTUAL ADDRESS SPACE ASSOCIATED WITH A PROCESS.
                    MEMORY VIEW OF A PROCESS & STARTS AT 0.

                    - KERNEL ADDRESS SPACE - MEMORY VIEW OF THE CODE THAT RUNS IN KERNEL MODE.

                    ##USER AND KERNEL SHARING THE VIRTUAL ADDRESS SPACE.##



                    
            

                - DATA LIMITING -
                - CONTAINS CODE THAT ALLOWS LIMITED AMOUNTS DATA TO PASS BETWEEN DIFFERENT RUNNING
                PROCESSES.

                    - IMPLEMENTS A PROCESS SCHEULER MECHANISM & MEMORY MANAGEMENT TO SETUP PROTECTION
                    BETWWEN APPLICATIONS AND SERVICES.

                    - 

                





    ###LINUX DEVICE DRIVERS & KERNEL MODULES USE CASES##

        #LOADABLE KERNEL MODULES#

        - SOFTWARE THAT CAN BE DYNAMICALLY LOADED & UNLOADED
        FROM THE KERNEL ON DEMAND, AT RUN-TIME, WITHOUT REBOOTING/RECOMPILING THE SYSTEM.

        - BINARY PROGRAMS THAT EXTEND THE KERNEL'S ABILITY TO CONTROL
        HARDWARE OR ADD NEW SYSTEM CAPABILITIES.

        - .ko - KERNEL OBJECT EXTENSION.

        - STANDARD LOCATION FOR KERNEL MODULES
            - /lib/modules/<kernel version> DIRECTORY OF THE rootfs 
            BY DEFAULT.

        - LINUX KERNEL MODULES & DRIVERS USE CASES

            #HARDWARE DEVICE DRIVERS#

                - BLOCK DEVICE DRIVERS

                    - STORAGE DEVICES THAT STORE DATA IN BLOCKS.
                    SUCH AS; HDDs, USBs.
                
                - CHARACTER DRIVERS

                    - UART/SERIAL, TERMINALS, KEYBOARDS.
                    ANY DEVICE THAT TRANSMIT DATA IN A STREAM OF CHARACTERS.

                - NETWORK DEVICE DRIVERS
                
                    - DRIVERS THAT INTERACT WITH NETWORK INTERFACES
                    - ETHERNET DRIVERS
                    - WIFI DRIVERS
                    - DRIVERS IMPLEMENTING A NETWORK PROTOCOL (TCP/IP)/STACK.
                    - DRIVERS THAT ALLOW THE KERNEL TO INTERACT WITH NETWORK HARDWARE (NICs).

            

            #FILESYSTEM MODULES#

                - PERFORM SYSTEM CALLS()

                - DEVELOPED TO LOAD NEW FILE SYSTEMS



            - NETWORK PROTOCOL MODULES

                - 

                - TTY LINE DISCIPLINES: FOR TERMINAL DEVICES



        - ADVANTAGES OF LINUX MODULES

            - NO REBOOTING OR RECOMPILING THE KERNEL EVERY TIME
            A MODULE IS LOADED OR UNLOADED.

            - ALLOWS FOR OVERALL MAINTAINANCE (UPDATING AND DEBUGGING) OF MODULES WITHOUT 
            AFFECTING THE ENTIRE SYSTEM.

            - MODULES SAVE MEMORY/RAM BECAUSE YOU CAN LOAD/UNLOAD THEM ONLY WHEN
            NEEDED.

            - KERNELS WITH DRIVERS ALREADY COMPILED
            INTO THEIR IMAGES WILL SAVE MEMORY.



        - LOADBLE VS STATIC MODULES

            - AVOIDS REBOOTING KERNEL

            - FASTER DEVELOPMENT CYCLES


            - WHEN A MODULE CANT BE LOADABLE...

                - PRESENT & NEEDED FOR KERNEL/SYSTEM BOOTUP

                - SUPPORT FOR BUILT-IN KERNEL FILE SYSTEMS

                    - (initrmfs) INITIAL RAM FILE SYSTEM SUPPORT IS NEEDED.


            - STATIC MODULE - BUILT INTO THE KERNEL IMAGE (vmlinux file)

                - LOADED AS PART OF THE KERNEL AT BOOT TIME.

                - THE NEED TO RECONFIGURE, REBUILD & REBOOT
                BUILT-IN KERNEL MODULES IS A VERY LONG PROCESS.


            - DYNAMIC MODULES - KERNEL MODULES LOADED AT RUN-TIME.
            NO NEED TO RECOMPILE THE KERNEL.

                - FILE-EXTENSION USED .ko
                sudo insmod lkm_name.ko

                - DESIGNED TO BE LOADED AFTER THE KERNEL IS BOOTED.

                - LKMs ALLOW EDITING, REBUILDING, LOADING, NEW LKMs & REMOVING 
                OLD/UNUSED LKMs WITHOUT REBOOTING THE KERNEL. THIS IS A VERY QUICK PROCESS.

                - EXAMPLE: SUPPORT FOR THE DISK FILE SYSTEM, LIKE ext4, CAN BE AN LKM 
                BY THE MOUNTING PROCESS.
            
            - IN-SOURCE TREE MODULES - MODULES PRESENT WITHIN THE LINUX KERNEL SOURCE CODE.

            - OUT-OF-SOURCE TREE MODULES - MODULES NOT PRESENT WITHIN THE LINUX KERNEL SOURCE CODE.

                - ALL MODULES START OFF AS OUT-OF-SOURCE TREE DEVELOPMENT THAT CAN BE
                COMPILED USING THE CONTEXT OF A SOURCE-TREE.

                - ONCE A MODULE GETS ACCEPTED TO BE INCLUDED BY MAINTAINERS, 
                IT BECOMES AN IN-TREE MODULE.



            - MODULE COMMANDS - 

                *insmod (USERSPACE, PRIVILEGED COMMAND) - DYNAMICALLY LOADS/INSERTS MODULES/DRIVERS 
                INTO KERNEL SPACE.

                    - REQUIRES ITS DEPENDENCIES TO ALREADY BE LOADED.


                *rmmod (USERSPACE, PRIVILEGED COMMAND) - REMOVES MODULES

                    - CHECKS TO SEE IF MODULES ARE IN USE


                *lsmod - LISTS DYNAMICALLY LOADED MODULES. NOT STATIC MODULES.

                    - INFO FROM /proc/modules & /sys/modules/*

                    - DOES NOT LIST STATICALLY LINKED MODULES

                    - MOST RECENTLY INSERTED MODULE LISTED FIRST

                    - NO HEADER FOR USE COUNT COLUMN

                    - LISTS SIZE OF THE MODULE IN BYTES

                    - LISTS MODULE DEPENDANCY INFORMATION


                *RETURNING -1 OR NON 0 WITHIN A KERNEL MODULE WILL NOT LOAD IT INTO THE KERNEL.


                *STACKED MODULES - MODULES THAT DEPEND ON OTHER MODULES TO BE PRELOADED INTO THE KERNEL.
                    
                    - /lib/modules/$(uname -r)/modules.dep.bin

                    - depmod - DISPLAYS PROCESS DEPENDENCY INFORMATION

                        - CREATES modules.dep.bin/modules.dep TO LOCATE MODULE DEPENDENCIES.
                        
                        - VIEW modules.dep IN SHELL: depmod -n

                    - modprobe - ADDS AND REMOVES MODULES FROM THE LINUX KERNEL
                    
                        - USES DEPENDENCY FILE TO LOAD DEPENDENCIES

                        - SEARCHES THE /lib/modules/`uname -r` DIRECTORY FOR ALL
                        MODULES.

                    - modinfo - SHOWS INFORMATION ABOUT LINUX KERNEL MODULES

            - USER & DEFINE MODULE PARAMETERS

                - SYNTAX USED TO CONFIGURE PARAMETERS
                USING MODPROBE.

                - USED TO CONFIGURE KERNEL MODULES
                THAT ARE LOADED SEPARATELY BY THE KERNEL.

                - LINUX KERNEL MODULE PARAMETERS ARE PART OF THE SYNTAX USED TO LOAD THE
                MODULES WITH 'modprobe'.

                - modinfo -p <LKM_NAME> - TO DISPLAY PARAMETER INFORMATION FOR A MODULE.

                - DEFINING MODULE PARAMETER WITHIN MOEULE FILE

                    - include/linux/moduleparam.h - HEADER FILE NEEDED TO USE THE SPECIFIC MACROS.

                    - module_param(variable,int,S_IRWXU)

                        - NON-ZERO WIILL SHOW UP IN sys/modules
                    
                    - MODULE_PARAM_DESC(variable, "describes the data value parameter passed to the module")
                        - DOCUMENTS THE DATA TYPE PASSED TO THE KERNEL MODULE.

                        - 

                

                - /etc/modprobe.d - CONFIGURATION SUB-DIRECTORY WITH FILES FOR USING modprobe
                TO SET MODULE PARAMETERS.

                    - AUTOMATICALLY SUPPLIES MODULE PARAMETERS

                    - BLACKLISTING IS USED TO AVOID AUTOLOADING MODULES

                    - modprobe.d(5) CONTAINS ADDITIONAL DOCUMENTATION.

                    - modprobe -r <lkm_name> - REMOVES A MODULE FROM THE KERNEL.
                
                - PASSING MODULE PARAMETERS 

                    - sudo insmod test_lkm.ko var0=1 var1="test"

                    - 
                
                - sys/module 

                    





                










            

            - FLEXIBILITY:

                - PROVIDES THE ABILITY TO UPDATE OR ADD NEW MODULES
                AND FEATURES WITHOUT MODIFYING THE KERNEL ITSELF.

            - IMPROVES SYSTEM STABILITY

                - PROPER DEVELOPMENT, TESTING & FAULTS IN MODULES ARE ISOLATED 
                AND WONT CORRUPT THE SYSTEM, ESPECIALLY WITH PROPER ERROR HANDLING.

                - MODULES ARE LESS INTRUSIVE TO THE KERNEL'S CORE CODE WHICH MAINTAINS SYSTEM
                STABILITY & PERFORMANCE.

                - SIGNED & VERIFIED KERNEL MODULES ADD A LAYER OF KERNEL SECURITY ONLY ALLOWING 
                TRUSTED CODE TO BE LOADED INTO THE KERNEL.

        







        - DISADVANTAGES OF LINUX KERNEL MODULES

            MEMORY CONSUMPTION:

            - A BASIC KERNEL WITH A LARGE NUMBER OF LOADED MODULES WILL CONSUME 
            A LOT OF MEMORY.

            - MANY LOADED MODULES DEPLETES/LIMITS THE AMOUNT OF PHYSICAL MEMORY PER SYSTEM
            WHEN PHYSICAL MEMORY IS LIMITED.

            SECURITY:

                - STATICALLY BUILD & DISABLE LINUX'S DYNAMIC
                MODULE LOADING FEATURE, YOU PREVENT RUN-TIME MODIFICATION OF THE KERNEL CODE.

                - RUN "cd /boot;cat config-`uname -r` | grep CONFIG_MODULES"
        
                TO VERIFY THAT ALL CONFIGURATION VARIABLES ARE SET TO "y" TO ALOW DYNAMIC MODULE CONFIGURATION
                AND MAINTENANCE.

                - DYNAMICALLY LOADED KERNEL MODULES CAN INTRODUCE SECURITY RISKS IF NOT
                PROPERLY MANAGED & CAN LOAD MALISCIOUS CODE.

            - COMPLEXITY:

                - HANDLING MANY KERNEL MODULES ADDS COMPLEXITY TOWARDS MANAGING
                DEPENDENCIES AND ENSURING KERNEL COMPATIBILITY TO THE KERNEL.

            - STABILITY ISSUES:

                - POORLY WRITTEN MODULES CAN CAUSE SYSTEM INSTABILITY AND CAUSE SYSTEM CRASHES.



        ###LINUX KERNEL DEVICE DRIVERS

        - SOFTWARE THAT CONTROLS FOREIGN HARDWARE DEVICES WHEN
        CONNECTED TO A SYSTEM


        - DEVICE DRIVERS INTERACT WITH THE KERNEL

            - PROVIDES AN INTERFACE FOR USER SPACE AND KERNEL SPACE
            TO EXCHANGE RESOURCES

        - DEVICE DRIVERS ALLOW THE KERNEL AND FOREIGN HARDWARE TO INTERACT

        - DEVICE DRIVERS INTERACT WITH THE USER-SPACE

        - TYPES OF DEVICES DRIVERS

            - CHARACTER DRIVERS

                - HANDLE DEVICES THAT TRANSMIT DATA AS CHARACTERS (e.g. SERIAL PORTS).

            - BLOCK DRIVERS

                - MANAGE DEVICES THAT TRANSMIT DATA IN BLOCKS, (e.g. HARD DRIVES).

            - NETWORK DRIVERS 

                - INTERFACE WITH NETWORK HARDWARE TO MANAGE NNETWORK COMMUNICATION.


        

        - ADVANTAGES OF LINUX DEVICE DRIVERS

            - CAN LOAD/UNLOAD WITHOUT REBOOTING/RECOMPILING
            KERNEL/SYSTEM.


            - DRIVERS CAN BE MANAGED DYNAMICALLY, REDUCING THE NEED FOR 
            UNNECESSARY LOADED DRIVERS.
            

            - CUSTOM LINUX DRIVERS CAN BE BUILT FOR HARDWARE THAT IS NOT 
            INITIALLY SUPPORTED BY LINUX OS/KERNEL.


            - DIRECT HARDWARE CONTROL THAT ALLOWS THE KERNEL TO COMMUNICATE
            DIRECTLY WITH CONNECTED HARDWARE, PROVIDING OPTIMIZED PERFORMANCE.


            - 



        
        
        ##KERNEL MODULES vs DEVICE DRIVERS##
        
        - KERNEL MODULES ARE A SUPERSET OF DEVICE DRIVERS

                - KERNEL MODULES SOMETIMES DEVICE DRIVERS

        - DEVICE DRIVERS ARE A SUBSET OF KERNEL MODULES

                - DEVICE DRIVERS ARE ALWAYS KERNEL MODULES
        


        


		#LKM - LOADABLE KERNEL MODULE FRAMEWORK
		
			- LINUX KERNEL ARCHITECTURE, WHICH HELPS UNDERSTAND THE 
            LKM FRAMEWORK (LOADABLE KERNEL MODULE).		

			- WHY KERNEL MODULES ARE IMPORTANT.

			- WRITE CUSTOM LKM.

			- HOW ARE MESSAGES WRITTEN TO THE KERNEL LOG AND UNDERSTAND

			- MAKE USE OF THE LKM MAKEFILE FOR AUTOMATION.
			
			- LINUX KERNEL ARCHITECTURE and LKM FRAMEWORK, APPLY IS TO WRITE COMPLETE PIECES OF LKM CODE.

				- UNDERSTAND KERNEL ARCHITECTURE
			
				- EXPLORE LKM

				- WRITING KERNEL MODULES

				- COMMON OPERATIONS PERFORMED ON LKM (LOADABLE KERNEL MODULES).

				- UNDERSTAND KERNEL LOGGING AND PRINTK() API.

				- UNDERSTAND KERNEL MODULE MAKEFILE FOR AUTOMATION.

			
			#TOOLS & NEEDED COMPONENTS
				
                - LOCAL SYSTEM BUILD TOOLCHAIN: ASSEMBLER, COMPILER, LINKER/LOADERS, MAKEFILE, C LIBRARY.
				
					- sudo apt install gcc

                
                - KERNEL HEADERS: USED TO DEFINE INTERFACES BETWEEN COMPONENTS OF THE KERNEL AND 
                TO DEFINE INTERFACES BETWEEN THE KERNEL AND USER SPACE.


				- kernel headers: used during compilation. used to install the kernel-makefile onto
				the system.


					- sudo apt install linux-headers-generic - installs linux-headers-generic packages.

					- dpkg -l | grep linux-headers-generic | awk '{print $1,$2}' 
                        - look up/verify linux-headers-generic packages.

				
				#LINUX KERNEL ARCHITECTURE OVERVIEW
                
                - USER AND KERNEL SPACE & MAJORE SUBSYSTEMS, & COMPONENTS THAT MAKE UP THE LINUX KERNEL

					- USER SPACE & KERNEL SPACE
					
					- ARAM PROCESSORS ENABLEMENT - for security and stability on the platform, 
                    all modern os running on these processors will make use of (at least) two 
                    of the privileged levels (or modes).
					
						- USER SPACE - for applications to run in UNPRIVILEGED MODE.
						
							- location for initialized processes, threads & daemons.
							
							- user space applications have access to pre-built 
							APIs provided by and linked to the C-library/glibc.
							
							- standard library; glibc => GNU standard library.
							
							- library examples; printf, scanf, strcmp, malloc, free.
							
							- API's, executables & libraries are only accessible in the user space.
								- MAN PAGES FOR APIs CAN BE FOUND IN MAN PAGE, SECTION 3. eg. man 3 api_name.

						
						- KERNEL SPACE - for the kernel (and all of its components) to run in 
						PRIVILEDGED KERNEL MODE.

							- major subsystems, other components, hardware platforms.


						- USER AND KERNEL SPACE INTERACTION
							- user space and kernel space are two different address spaces, 
							with two different privilege/EXECUTIONS levels.

							
							- user address space accesses the kernel address space via system calls.

							- SYSTEM CALLS - special APIS, its is the only legal/synchronous way for 
							user space to access the kernel.

							- SYSTEM CALLS - possess the ability to switch from 
							non-privileged user mode to privileged kernel mode.
							
								- SYSTEM CALL EXAMPLES: fork, execve, open, read, write, socket, accept, chmod.
							
								- SYSTEM CALLS - only way USER SPACE apps and the kernel communicate.
							
						
						- KERNEL SPACE COMPONENTS

							- consists of a few major subsystems and several components.

							-  CORE KERNEL 

                                - HANDLES THE TYPICAL  CORE WORK OF THE OPERATING SYSTEM, INCLUDING KERNEL & USER PROCESSES,
                                THREAD CREATION & DESTRUCTION.
																	
								- CPU SCHEDULING
								
								- SYNCHRONIZATION PRIMITIVES
								
								- SIGNALING

								- TIMERS
					
								- INTERRUPT HANDLING
						
								- NAMESPACES

								- CGROUPS
								
								- DRIVER/MODULE SUPPORT
				
								- CRYPTOGRAPHY
                           
							- MEMORY MANAGEMENT
								
								- HANDLES ALL MEMORY RELATED WORK.
								
								- INCLUDING SETUP, AND MAINTENANCE OF KERNEL AND PROCESS VIRTUAL ADDRESS SPACES (VASes).

								- VFS (Virtual Filesystem Switch) abstract layer over the actual filesystems
								implemented within the linux kernel e.g.; ext2, ext4, vfat, reiserfs, ntfs, msdos,
								iso9660, JFFS, & UFS).

							- BLOCK I/O

                                - THE CODE PATHS IMPLEMENTING THE FILE I/O, FROM THE VFS, RIGHT DOWN TO THE BLOCK DEVICE DRIVER ETC.

                            - NETWORK PROTOCOL STACK





"HELLO WORLD MODULE"

IN C/C++ PROGRAMMING WE HAVE THE main() AS THE ENTRY POINT &
EXIT POINT.

KERNEL MODULES MUST HAVE AT LEAST TWO "MACROS" FUNCTIONS:

FUNCTION MACROS

- "MACROS" ARE A FEATURE USED TO AUTOMATE REPETATIVE TASKS AND SIMPLIFY CODE.

- "MACROS" ALLOWS YOU TO DEFINE A SET OF INSTRUCTIONS OR CODE THAT 
CAN BE REUSED MULTIPLE TIMES THROUGHOUT A PROGRAM.

- FUNCTION-LIKE MACROS - USED TO CREATE INLINE FUNCTIONS OR SHORTCUTS.

    -   module_init() macros - A START/INITIALIZATION FUNCTION : THAT IS CALLED WHEN THE 
    MODULE IS LOADED INTO THE KERNEL.

    - module_exit() macros - AN END/CLEANUP FUNCTION : THAT IS CALLED JUST BEFORE THE 
    MODULE IS REMOVED FROM THE KERNEL.


LICENSING
=========

GPL - [GNU PUBLIC LICENSE V2 OR LATER]

GPL V2 - [GNU PUBLIC LICENSE V2]

GPL V2 AND ADDITIONAL RIGHTS - [GNU PUBLIC LICENSE V2 RIGHTS AND MORE]

DUAL MIT/GPL - [GNU PUBLIC LICENSE V2 OR BSD LICENSE CHOICE]

DUAL MPL/GPL - [GNU PUBLIC LICENSE V2 OR MOZILLA LICENSE CHOICE]


HEADER FILES
============

EVERY KERNEL MODULE NEEDS TO INCLUDE "linux/module.h" FOR MACROS EXPANSION 
FOR module_init() & module_exit() FUNCTIONS.















*/