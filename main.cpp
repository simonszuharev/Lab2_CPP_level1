#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;


/*You are going to paint your bedroom. Write a program to calculate the approximate cost
 of the paint required to paint the room.  Make the following assumptions:

1. You are not going to paint the ceiling or the floor of the room, only the four walls.
2. You are going to only apply one coat of paint.
3. Doors, windows, etc. in the room need not be taken into consideration.
4. The dimensions of the room are length, width, and height. Measurements are given in feet.
5. Paint is sold by the gallon. A gallon of paint will cover approximately 200 square feet.
6. You cannot purchase a "partial" gallon of paint.  That is, if only 1.5 gallons of paint
are required to paint the room, you still have to purchase 2 full gallons of paint.

General Approach
----------------
1. Prompt the user to enter the dimensions of the room (length, width, and height).
2. Prompt the user to enter the price per gallon of paint.
3. Calculate the cost of paint required to paint the four walls of the room.
4. Display the calculated total area to be painted, the assumed number of square feet per
gallon of paint, the number of gallons of paint required to paint the room, and the total cost of paint.
5. Provide the user an option to repeat the calculation with another set of data.

Submit your solution (main.cpp) as the file lab2_annnnnnn.cpp where annnnnnn is your ACC student identification number.
*/

int main()
{
    const int SQR_FEET_PER_GALLON = 200;

    double length,
            width,
            height,
            area,
            price_input,
            money_needed,
            gallons_of_paint_needed;
    char repeat;

    cout << "Calculate Cost of Paint to Paint a Room\n";
    cout << "---------------------------------------" << endl;

    do{
            cout << "Enter the dimensions of the room in feet\n";
            cout << "Length of the room? "; cin >> length;
            cin.ignore();
            cout << "Width of the room? "; cin >> width;
            cin.ignore();
            cout << "Height of the room? "; cin >> height;
            cin.ignore();
            cout << "What is the price for the paint? $"; cin >> price_input;
            cin.ignore();

            area = 2*(length * height + width*height);
            gallons_of_paint_needed = area/SQR_FEET_PER_GALLON;
            gallons_of_paint_needed = ceil(gallons_of_paint_needed);
            money_needed = gallons_of_paint_needed*price_input;

            cout.precision(6);
            cout << "The total area to be painted is  " << area << " square feet. " << endl;
            cout << "FYI, a gallon of paint covers about 200 square feet. \n";
            cout.precision(6);
            cout << "You will need " << gallons_of_paint_needed <<  " gallons of paint.\n" << endl;
            cout.precision(6);
            cout << "The estimated cost of paint is $" << money_needed << endl;
            cout << "Repeat? " << endl; repeat = cin.get();

    }while (tolower(repeat!='n'));


    return 0;
}
