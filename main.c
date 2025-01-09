#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <SDL3/SDL.h>

//Function
void sayHi(char name[], int age); // Have to declare function before main, C compiles code top to bottom, can also define function before calling it

//Return statement
double cube(double num);

// if Statement
int max(int num1, int num2, int num3) {
    /*int result;
    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }
    return result;*/

    // char* max(int num1, int num2, int num3) {
    /*if (3 < 2 || 2 > 5) {
        return("True");
    } else {
        return("False");
    }*/
    // return num1 > num2 ? num1 : num2;
}


// Structs
struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;

};


// typedef
typedef char user[25];
typedef struct Student tStudent;

//sort array
/*void sort(char array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(char array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%c", array[i]);
    }
}*/



// Function Pointers
/*typedef int (*t_my_func)(int, int);

int foo(int x, int y) {
    return x + y;
}

bool p (int x) {
    return x % 2 == 0;
}

void print_if(int xs[10], bool (*predicate)(int)) {
    for (int i = 0; i < 10; i++) {
        if (predicate(xs[i])) {
            printf("%d\n", xs[i]);
        }
    }
}

int compar(const void *x1, const void *x2) {
    return (*(int*)x1) - (*(int*)x2);
}*/


// Bit Flags
/*typedef unsigned int t_flag;
#define FLAG_A (1 << 0)
#define FLAG_B (1 << 1)
#define FLAG_C (1 << 2)*/

typedef enum {
    FLAG_A = (1 << 0),
    FLAG_B = (1 << 1),
    FLAG_C = (1 << 2),
} t_flag;

int f(int x, t_flag flags) {
    if (flags & FLAG_A) {
        x += x;
        flags &= ~FLAG_A; // unset the bit values in flags
    }
    if (flags & FLAG_B) {
        x *= x;
    }
    if (flags & FLAG_C) {
        x = ~x;
    }
    return x;
}


int main() {
    /*printf("Hello, World!\n");
    return 0;*/


    // Variables
    /*char characterName[] = "Tom";
    int characterAge = 67;
    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);

    characterAge = 65;
    printf("He really liked the name %s\n", characterName);
    printf("did not like being %d.\n", characterAge);*/


    // Data Types
    /*int age = 40;
    double gpa = 3.7; // More precise, more memory and computing power, %lf
    float pi = 3.14; // Less Precise, less memory and computing power, %f
    char grade = 'A';
    char phrase[] = "Hello, World!";*/


    //printf
    /*printf("Hello \n \" World!\n");
    printf("%d\n", 500);
    printf("My favourite %s is %d", "number", 50);

    return 0;*/

    //Working with numbers
    /*printf("%f\n", 5/4);
    printf("%f\n", 5/4.0);
    printf("%d\n", 5/4.0);
    printf("%d\n", 5/4);

    printf("%f\n", pow(5, 3));*/

    //Constants
    /*const int NUM = 5; // const name should be all caps, best practice
    printf("%d\n", NUM);
    // num = 8; // const value cannot be changed
    printf("%d\n", NUM);*/


    //User Input
    /*int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);*/

    // double gpa;
    // printf("Enter your gpa: ");
    // scanf("%lf", &gpa);
    // printf("Your gpa is %f\n", gpa);

    /*char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin); //stdin = standard input //Can be used to get whole line
    // scanf("%s", name);   //limitation in that it can only pull in a characters up to first space, try with John Smith //Dont need ampersand for string
    printf("Hello, %s!\n", name);*/


    // Create a calculator
    /*double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("The sum is: %f\n", num1 + num2);*/


    // Mad Libs
    /*char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity first name: ");
    scanf("%s%s", celebrityF, celebrityL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);*/


    //Arrays
    /*int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    luckyNumbers[1] = 200;
    printf("%d", luckyNumbers[1]);*/

    /*int luckyNumbers[10];
    luckyNumbers[1] = 80;
    luckyNumbers[0] = 44;
    printf("%d", luckyNumbers[0]);*/


    //Function
    /*printf("Top");
    sayHi("Mike", 24);
    printf("Bottom");*/


    //Return statement
    // printf("Answer: %f", cube(3.0));



    //if statement
    // printf("%d", max(40,10, 100));


    // Better Calculator
    /*double num1, num2;
    char op;

    printf("Please enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Please enter a number: ");
    scanf("%lf", &num2);

    if (op == '+') {
        printf("%lf + %lf = %lf\n", num1, num2, num1 + num2);
    } else if (op == '-') {
        printf("%lf - %lf = %lf\n", num1, num2, num1 - num2);
    } else if (op == '*') {
        printf("%lf * %lf = %lf\n", num1, num2, num1 * num2);
    } else if (op == '/') {
        printf("%lf / %lf = %lf\n", num1, num2, num1 / num2);
    } else {
        printf("Invalid Operator");
    }*/



    /*char grade = 'G';

    switch (grade) {
        case 'A':
            printf("You did great!");
            break;
        case 'B':
            printf("You did alright!");
            break;
        case 'C':
            printf("You did poorly!");
            break;
        case 'F':
            printf("You Failed!");
            break;
        default:
            printf("Invalid grade!");
    }*/



    // Structs
    /*struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy (student1.name, "John");
    strcpy (student1.major, "Business");

    struct Student student2;
    student2.age = 25;
    student2.gpa = 3.9;
    strcpy (student2.name, "Boss");
    strcpy (student2.major, "Computing");

    printf ("Student name: %s\n", student2.major);*/



    // While loops
    /*int index = 6;
    while(index <= 5) {
        printf("%d\n", index);
        index++;
    }

    do {
        printf("%d\n", index);
        index++;
    } while (index <=5);*/



    // Guessing game
    /*int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while(guess != secretNumber && outOfGuesses == 0) {
        if (guessCount < guessLimit) {
            printf("Guess number: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }

    if (outOfGuesses == 1) {
        printf("Your guess is wrong.\n");
    } else {
        printf("You win!");
    }*/



    // For loops
    /*int i = 1;
    while (i < 10) {
        printf("%d\n", i);
        i++;
    }*/

    /*int i;
    for (i = 1; i < 10; i++) {
        printf("%d\n", i);
    }*/

    /*int luckyNumber[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    for (i = 0; i < 6; i++) {
        printf("%d\n", luckyNumber[i]);
    }*/



    // 2D arrays & Nested loops
    /*int nums[3][2] = {      // 2D arrays always need to specify size
                        {1, 2},
                        {3, 4},
                        {5, 6}
                    };

    // printf("%d", nums[0][1]);

    int i,j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d", nums[i][j]);
        }
        printf("\n");
    }*/



    // Memory Addresses
    /*int age = 30;
    double gpa = 3.5;
    char grade = 'A';

    printf("age: %p\ngrade: %p\ngpa: %p", &age, &grade, &gpa);*/



    // Pointers
    /*int age = 30;
    int *pAge = &age;
    double gpa = 3.4;
    char grade = 'A';


    printf("age's memory address: %p\n", pAge);*/



    // Dereferencing Pointers
    /*int age = 30;
    int *pAge = &age;

    // printf("age = %d\n", *pAge);
    printf("age = %p\n", &*&*pAge);*/



    // Writing Files
    // r w a=append
    /*FILE * fpointer = fopen("/Users/bernardlee/Desktop/Coding/Personal Stuff/C Tutorial/untitled/employees.txt", "a");

    fprintf(fpointer, "Hello world\n");

    fclose(fpointer);*/



    // Reading file
    /*char line[255];
    FILE * fpointer = fopen("/Users/bernardlee/Desktop/Coding/Personal Stuff/C Tutorial/untitled/employees.txt", "r");

    fgets (line, 255, fpointer);
    fgets (line, 255, fpointer);
    printf("%s", line);*/



    //Typedef
    // reserved keyword that gives an existing datatype a "nickname"
    /*user user1 = "Bro";
    tStudent student1 = {"Test", "Test", 30, 4.5};
    printf("%s", student1.name);*/



    // Sort an array
    // int array[] = {9 , 4, 5, 10, 1};
    /*char array[] = {'F', 'A', 'D', 'C'};
    int size = sizeof(array) / sizeof(array[0]); // Size of array in bytes divided by size one element in array

    sort(array, size);
    printArray(array, size);*/



    // Bitwise Operators (special operators used in bit level programming)
    // & = AND
    // | = OR
    // ^ = XOR
    // << = left shift
    // >> = right shift
    // ~ complement (takes one number and inverts all bits of it) TODO: NEED TO STUDY
    // int x = 6;  // 6 = 00000110
    // int y = 12; //12 = 00001100
    // int z = 0;  // 0 = 00000000
    //
    // z = x & y;
    // printf("AND = %d\n", z);
    //
    // z = x | y;
    // printf("OR = %d\n", z);
    //
    // z = x ^ y;
    // printf("XOR = %d\n", z);
    //
    // z = x << 2;
    // printf("SHL = %d\n", z);
    //
    // z = x >> 2;
    // printf("SHR = %d\n", z);



    // Function Pointers
    // int xs[10] = {120, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for (int i = 0; i < 10; i++) {
    //     printf("%d\n", xs[i]);
    // }
    // printf("-----------------------\n");
    // qsort(xs, 10, sizeof(int), compar);
    // for (int i = 0; i < 10; i++) {
    //     printf("%d\n", xs[i]);
    // }
    //
    // t_my_func my_func = foo;
    // printf("%d\n", my_func(3,4));
    // print_if(xs, p);



    // Bit Flags
    printf("%d\n", f(1234, 0));
    printf("%d\n", f(1234, FLAG_A));
    printf("%d\n", f(1234, FLAG_B | FLAG_C));


    /*SDL_Window *window;
    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow(
        "title",
        0,0,
        640,480,
        SDL_WINDOW_INPUT_FOCUS | SDL_WINDOW_OPENGL | SDL_WINDOW_FULLSCREEN,);*/



    return 0;


}

//Function
void sayHi(char name[], int age) {
    printf("Hello %s!\n, you are %d\n", name, age);
}

//Return statement
double cube(double num) {
     return num * num * num;
    printf("Here"); // Will never get called, function cuts off after return
}