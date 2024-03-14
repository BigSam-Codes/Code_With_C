#include <stdio.h> //this enables us to use the Printf function
#include <stdbool.h> // this enables us to make use of the boolean operator
#include <string.h>

int main(){

    //Getting User Input
    //The scanf function is used to get the user input and store it in a variable.
    //The ampersand represents the memory address of a variable

    /*
    int userAge;
    char userName[20];
   // double userHeight;
   // float userWeight;

    printf("Enter your name: ");
    scanf ("\n %s", &userName);
    // %s is a format specifier for strings.

    printf("Enter your age: ");
    scanf("\n %d", &userAge);
    // %d is a format specifier for integers, that is, whole numbers.

    printf("Your name is %s, and you are %d years old.", userName, userAge);
    */



    //Day 04 of 30 DAYS OF LEARNING.

    //OPERATORS IN C
    /*
    *+ is for addition
    *- is for subtraction
    * / is for division
    * (*) is for multiplication
    * % is for remainder or modulus
    * ++  for increment
    * -- for decrement
    */
/*
    int firstNumber = 12;
    int secondNumber = 6;
    int numAdd = firstNumber + secondNumber;
    int numSub = firstNumber - secondNumber;
    int numDiv = firstNumber / secondNumber;
    int numMul = firstNumber * secondNumber;
    double numMod = firstNumber % secondNumber;


    printf("The sum of %d and %d, is %d", firstNumber,secondNumber,numAdd);
    printf("\n The difference of %d and %d, is %d", firstNumber,secondNumber,numSub);
    printf("\n The division of %d and %d, is %d", firstNumber,secondNumber,numDiv);
    printf("\n The product of %d and %d, is %d", firstNumber,secondNumber,numMul);
    printf("\n The modulus of %d and %d, is %.1f", firstNumber,secondNumber,numMod);
    printf("\n The increment of the firstNumber, is %d", ++firstNumber);
    printf("\n The decrement of the secondNumber, is %d", --secondNumber);
*/

    //Day 05 of 30 Days of Learning
    //TYPE CONVERSION IN C : EXPLICIT AND IMPLICIT TYPE CONVERSION

    /*
    * Char can be converted to the Int datatype
    * Double can be converted to the Int datatype
    * When a datatype is converted automatically, it is called implicit type conversion
    * When a datatype is forcefully converted, it is called explicit type conversion
    */

/*
    int a = 3;
    int b = 2;

    double result = a/b;

    printf("The result is : %lf \n", result);

    //Explicit Type Conversion

    int d = 3;
    int c = 2;

    double result1 = (double)d/c;

    printf("The result is : %lf \n", result1);

*/

    //Day 06 of 30 Days of Learning
    //Boolean and Comparison Operator

    /*
        Boolean statement are either true(1) or false(0)
        < less than operator
        > greater than operator
        == equals to operator
        <= less than or equals to
        >= greater than or equals to
        != not equals to
    */
/*
    // Demonstrating how Bool works
        bool value1 = true;
        bool value2 = false;

        printf("If the statement is true, it prints %d \n", value1);
        printf("If the statement is false, it prints %d ", value2);

        // Boolean operator
        bool value = 5 < 5; // This is false,, hence it returns (0)
        bool valueNot = (5 != 5); //This statement is false(0)
        printf("\n This returns: %d", value);
        printf("\n This returns: %d", valueNot);

        /* Logical Operators
            && AND - This only prints true(1), if both statements are true
            || OR - This prints true(1), if either of the statement is true.
            ! NOT - This reverses the result of boolean comparison
        */
/*
        bool result = (5 > 2) && (2 == 2);
        bool result1 = (3 < 1)||(2 == 2);
        bool result2 = !(3==3);
        printf("\n %d", result); //Both statements are true, hence the result is (1)
        printf("\n %d", result1); //One of the statement is true, hence the result is (1)
        printf("\n %d", result2); //The statement is true,but with the NOT operator, it becomes false (0)

*/
/*
        //DAY 07 of 30 Days Of Learning
        //If - ELSE STATEMENTS
        printf("To check for positive and negative number.\n");

        int num1;

        printf("Enter a number:"); //To check for Positive and Negative numbers.
        scanf("%d", &num1);

        if(num1 > 0){
            printf("The number is positive\n");
        }
        else if(num1<0){
            printf("The number is negative\n");
        }
        else{
            printf("The number entered is null\n");
        }

        printf("\n");
        //A program to get user's name and password,
        //and asks for the user to re-enter the password.
        //Then checks if the entered password is correct or incorrect.
        printf("A program to collect and check user password\n");

        int passWord;
        int loginPass;
        char usrName[20];

        printf("Enter your name:");
        scanf("%s", &usrName);

        printf("Hi %s. Enter your preferred password: ", usrName);
        scanf("%d", &passWord);

        printf("Great! Now sign in with your password:");
        scanf("%d", &loginPass);

        if(loginPass == passWord){
            printf("Successfully signed in :)\n");
        }
        else
            printf("Wrong password\n");

        printf("\n");
        //A program to check if the number is an even or odd number
        printf("A program to check if the number is an even or odd number.\n");

        int number;

        printf("Enter the number:");
        scanf("%d", &number);

        if(number%2==0){
            printf("The number %d, is an even number", number);
        }
        else if(number%2>0){
            printf("The number %d, is an odd number", number);
        }
        else
            printf("Invalid number!");
*/

/*
        //DAY 08 of 30 DAYS OF LEARNING
        // Ternary Operators in C
        //Ternary Operators can be used in place of IF--ELSE STATEMENTS,
        // if the statement deals with just one argument....

        int value; //Using ternary operator to check for odd and even number

        printf("\nEnter value:");
        scanf("%d", &value);

        value%2==0 ? printf("The number is an even number\n"):
                     printf("This is an odd number\n");

                     printf("\n");

        int value1; //Using ternary operator to check for positive and negative numbers

        printf("Enter the number:");
        scanf("%d", &value1);

        (value1>=0) ? printf("The number is positive"):
                    printf("The number is negative");

*/

/*

        //Day  9 of 30 Days Of Learning
        //Switch-case statements

        char operator = '+'; '-'; '*'; '/';

        printf("Enter one of the following ['+','-','*','/']: ");
        scanf("%c", &operator);

        double firstNumber, secondNumber;

        printf("Enter the first number:");
        scanf("%lf", &firstNumber);

        printf("Enter the second number:");
        scanf("%lf", &secondNumber);

        double result;

        switch(operator){
                case '+':
                    result= firstNumber+secondNumber;
                    break;
                case '-':
                    result= firstNumber-secondNumber;
                    break;
                case '*':
                    result= firstNumber*secondNumber;
                    break;
                case '/':
                    result= firstNumber/secondNumber;
                    break;
                default:
                    printf("Invalid operand");
            }
                printf("Result:%.1f\n", result);

                printf("\n");

                printf("Printing months with their digits\n");


              //Printing months with their digits
              int digits;

              printf("Enter between 1 to 12: ");
              scanf("%d", &digits);

              switch(digits){

          case 1:
            printf("January");
            break;

          case 2:
            printf("February");
            break;

          case 3:
            printf("March");
            break;

          case 4:
            printf("April");
            break;

          case 5:
            printf("May");
            break;

          case 6:
            printf("June");
            break;

          case 7:
            printf("July");
            break;

          case 8:
            printf("August");
            break;

          case 9:
            printf("September");
            break;

          case 10:
            printf("October");
            break;

          case 11:
            printf("November");
            break;

          case 12:
            printf("December");
            break;

          default:
            printf("Invalid number!");

              }
*/

/*
            //Day 10 Of 30 Days Of Learning
            //While...Do While Loop
            //in the While loop, the condition of a statement is checked until it is false

            int num = 1;

            while(num<5){
                printf("%d\n", num); //This is an infinite loop..it does not stop.
                num= num+1; //To fix this, we ensure that 1 is added to the number each time it is executed
            }


            //Do While Loop
            //The statement is executed first before the condition is checked for execution again
            int age = 5;

            printf("Enter your age: ");
            scanf("%d", &age);

            do{
                printf("Welcome\n"); //This gets executed regardless of the condition.
            }while(age>=20);



            //Creating multiplication table with while loop

            int number;

            printf("Enter the number: ");
            scanf("%d", &number);

            int count = 10;


            while(count>0){    //I finally got it!!! (You can use != or > 0)
                int product = number * count;
                printf("%d * %d = %d\n", number, count, product);
                count = count - 1;
            }


            printf("Asking user input password again if it is a wrong password\n");

            char createName[20];
            int createPassword;
            int password;

            printf("SIGN UP HERE\n");
            printf("Enter your name: ");
            scanf("%s", &createName);

            printf("Enter your preferred password: ");
            scanf("%d", &createPassword);

            printf("Sign up successfull :)\n");
            printf("Hi %s. Kindly enter your password to login: ", createName);
            scanf("%d", &password);

            while(password!=createPassword){
                printf("Wrong Password!!\n");
                printf("Enter your password again: ");
                scanf("%d", &password);
            }
                if(createPassword==password){
                    printf("Login successfully");
                }

    */

/*
            //Day 11 of 30 Days of Learning
            //For loops

            int sum = 0; //Sum of odd numbers

            //for the FOR loop, the expression of 1<100 is true, so
            //1 is added to the initial value of sum (1+0)
            //Then sum becomes 1
            //x is increased by 2, to make x = 1+2 = 3
            //The loop checks if 3>100, which is true,
            //and 3 is added to the updated value of sum(1)
            //That is, sum = 3+1 = 4
            //And so on till the statement is false.

            for(int x =1;x<100;x=x+2){
                sum = sum + x;

            }
            printf("%d", sum);

        */



/*
        //DAY 12 of 30 Days Of Learning
        //BREAK and CONTINUE

        printf("An example of Continue Statement\n");
        for(int grade = 70;grade<=100;grade=grade+10){
                if(grade==90)
                    continue;
            printf("%d\n", grade);
        }

        printf("\n"); //Print a new line

        printf("An example of Break statement\n");

        int age;
        int idNumber;

        printf("Enter your age: ");
        scanf("%d", &age);

        while(age>=18){
                if(age<18){
                    break;
                }
            printf("You are eligible to vote.\n");
            printf("Enter your ID number: ");
            scanf("%d", &idNumber);
            break;
        }
            printf("Sorry you can't vote now.");
*/

/*
        //Day 13 of 30 Days Of Learning
        //C Functions
        //The built in functions in C are in the Standard Library Headers
        //Functions that are created by the user is called ...

        greet();

        int result = square(4);
       printf("The result is %d", result);

*/


    //Day 15 of 30 Days Of Learning
    // C standard library function
    //In C, every inbuilt functions are stored in a library header file.
    //To use a particular standard library function, we have to include the header file.

 /*
    //Multidimensional arrays.

    int age[3][2]={{12,14},{13,15},{21,32}};

    printf("%d ", age[0][0]);
    printf("%d ", age[0][1]);

    printf("\n");

    printf("%d ", age[1][0]);
    printf("%d ", age[1][1]);

    printf("\n");

    printf("%d ", age[2][0]);
    printf("%d ", age[2][1]);
*/

        //DAY 25 of 30 Days Of Learning
        //STRING FUNCTIONS
    /*
    *The four major string functions are
    * strlen - to check the length of strings
    * strcpy - to copy string from one place to another
    * strcat - to join strings together
    * strcmp - to compare two strings, if they are the same.
    */

    //Create a program that takes two input, and  prints the larger one
/*
    char text1[20];
    char text2[20];

    printf("Enter the first text: ");
    fgets(text1,sizeof(text1), stdin);

    printf("Enter the second text: ");
    fgets(text2,sizeof(text2), stdin);

    //compare the length of the strings

    strcmp(strlen(text1), strlen(text2));

    printf("Text one is  %zu, text two is %zu\n", strlen(text1), strlen(text2));

    if(strlen('text1')>strlen('text2')){
        printf("The largest string is: %s",text1);
    }else{
        printf("The largest string is: %s", text2);
    }
*/

/*
        char name[] = "John";
        char surname[] = "John";

        int result = strcmp(name,surname);

        printf("%d", result);
*/

    //Running a test for Python's range function in C with FOR loop
    for(int i = 2; i<=8; (i=i+3)){
        printf("The value of i is %d \n", i);
    }

    return 0;
}
