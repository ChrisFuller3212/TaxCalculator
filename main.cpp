//
//  main.cpp
//  Assignment #1 (Tax Calculation)
//
//  Created by Christian Fuller on 9/13/22.
//
// © 2022 Christian Fuller <christian@fuller.name>
//
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    //variables to set up calculation
    //changed from double to float to reduce memory consumption
    float subtotal;
    float payment;
    float change;
    float tax = 9.25;
    float cost;
    float rewards;

    //variables for calculation
    int twenty;
    int ten;
    int five;
    int one;
    int quarter;
    int dime;
    int nickel;
    int penny;

    //user input for cost
    cout << "Enter the subtotal of your purchase here: " << endl;
    cin >> subtotal;
    //set price limit to $10000000 but can change higher/lower
    while (subtotal <= 0 || subtotal >= 10000000) {
        cout << "Please enter a subtotal value from 0-10000000." << endl;
        cin >> subtotal;
    }
    
    //total with tax calcuiation
    cout << "Cost with tax " << endl;
    cost = (subtotal * (tax / 100) + subtotal);
    cout << fixed << setprecision(2) << cost << endl;
    
    //user input for the amount the user paid
    cout << "Enter the amount paid here: " << endl;
    cin >> payment;
    //input validation
    while(cost > payment) {
        cout << "No, that won't work. Try again" << endl;
        cin >> payment;
    }
    //new line
    cout << "\n" << endl;
    cout << "--------------------" << endl;
    
    //total amount of change
    cout << "Total change given: " << endl;
    change = payment - (subtotal * (tax / 100) + subtotal);
    cout << fixed << setprecision(2) << change << endl;

    //using <cmath> library for 'fixed', 'setprecision' and
    //'round' functions for calculation
    int total = round((int)100*change);

    //modulus operator
    twenty = total/2000;
    total = total % 2000;

    ten = total/1000;
    total = total % 1000;

    five = total/500;
    total = total % 500;

    one = total/100;
    total = total % 100;

    quarter = total/25;
    total = total % 25;

    dime = total/10;
    total = total % 10;

    nickel = total/5;
    total = total % 5;

    penny = total;

    //output transparency lines 80-111
    //trying to convert this to switch case instead
    //of if else
    cout << "Change in dollar bills: " << endl;
    if (twenty != 0) {
        cout << "Twenties: " << twenty << endl;
    }

    if (ten != 0) {
        cout << "Tens: " << ten << endl;
    }

    if (five != 0) {
        cout << "Fives: " << five << endl;
    }

    if (one != 0) {
        cout << "Ones: " << one << endl;
    }

    if (quarter != 0) {
        cout << "Quarters: " << quarter << endl;
    }

    if (dime != 0) {
        cout << "Dimes: " << dime << endl;
    }

    if (nickel != 0) {
        cout << "Nickels: " << nickel << endl;
    }

    if (penny != 0) {
        cout << "Pennies: " << penny << endl;
    }
    cout << "--------------------" << endl;
    cout << "\n" << endl;
    
    //amount of rewards from purchase
    cout << "Your cashback rewards: " << endl;
    rewards = .10 * subtotal;
    cout << fixed << setprecision(2) << rewards << endl;
    cout << "Come back again! :D" << endl;
    
    return 0;
    
}
