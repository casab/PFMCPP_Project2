#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
bool
char
int
float
double
void
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    //bool
    bool enableControl = true;
    bool bypassFilter = false;
    bool channelOn = true;

    //char
    char nullChar = '\0';
    char letterA = 'A';
    char dashChar = '-';

    //int
    int healthLeft = 100;
    int damagePoint = 20;
    int characterAge = 27;

    //float
    float pi = 3.14f;
    float euler = 2.71f;
    float golden = 1.61f;

    //double
    double bigFloatingDouble = 299792458.8937238;
    double eulerPrecise = 2.7182818284;
    double goldenPrecise = 1.6180339887498948482;

    
    ignoreUnused(number, enableControl, bypassFilter, channelOn, nullChar, letterA, dashChar, healthLeft, damagePoint, characterAge, pi, euler, golden, bigFloatingDouble, eulerPrecise, goldenPrecise); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int checkEnemyHealth(int enemyId)
{ 
    ignoreUnused(enemyId); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 
/*
 2)
 */
void cookMeal(int mealId, int cookingDuration = 10)
{
    ignoreUnused(mealId, cookingDuration);
}
/*
 3)
 */
float multiply(float number1, float number2)
{
    ignoreUnused(number1, number2);
    return {};
}
/*
 4)
 */
float randomFloat()
{
    return {};
}
/*
 5)
 */
void pushButton(int buttonId=0)
{
    ignoreUnused(buttonId);
}
/*
 6)
 */
float calculateCircularArea(float radius)
{
    ignoreUnused(radius);
    return{};
}
/*
 7)
 */
char biggerCharacter(char character)
{
    ignoreUnused(character);
    return{};
}
/*
 8)
 */
double calculatePi(int decimalPlaces)
{
    ignoreUnused(decimalPlaces);
    return{};
}
/*
 9)
 */
void rateRestaurant(int restaurantId, int rating=5)
{
    ignoreUnused(restaurantId,  rating);
}
/*
 10)
 */
void pushCode()
{

}

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    float enemyHealthLeft = checkEnemyHealth(4);
    //2)
    cookMeal(5);
    //3)
    float squareOfFive = multiply(5, 5);
    //4)
    float someRandomFloat = randomFloat();
    //5)
    pushButton();
    pushButton(1);
    pushButton(3);
    //6)
    float circleArea  = calculateCircularArea(5);
    //7)
    char letterA = biggerCharacter('a');
    //8)
    auto pi =  calculatePi(2); //  3.14
    auto piLong = calculatePi(10); // 3.1415926535
    //9)
    rateRestaurant(3, 4);
    //10)
    pushCode();
    
    ignoreUnused(carRented, enemyHealthLeft, squareOfFive, someRandomFloat, circleArea,piLong, letterA, pi);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
