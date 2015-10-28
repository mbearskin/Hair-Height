//Programmer: Martha Winger-Bearskin    Date: 2/8/13
//File Name: hairHeight.cpp             Class: cs53 sec A
//Purpose: To create a program that calculate Marge's hair
//height on any given day.

#include<iostream>
using namespace std;

int main()
{
    
    const float GROWTHRATE = 0.2;  //rate at which Marge's hair grows.
    const float GRAVITY = 9.98;    //Acceleration of gravity.
    int days;                      //days since last haircut.
    int cans;                      //cans of hairspray used that morning.
    bool mousse;                   //was mousse used that morning?
    float temp;                    //tempurature of curing iron.
    float hairHeight;              //Marge's Hair Height for the day.
    
    cout << "Welcome to Marge's Hair Height Calculater" << endl << endl;
    cout << "How many days has it been since your last haircut?:";
    cin >> days;
    cout << endl << "How many cans of hairspray did you use this morning?:";
    cin >> cans;
    cout << endl << "Did you use mousse today? enter 1 for yes or 0 for no:";
    cin >> mousse;
    cout << endl << "What is the Tempuature of your curling iron?:";
    cin >> temp;
    hairHeight = (static_cast<float>(cans)/(days +1))*
    (2+temp)-GRAVITY +(mousse*(GROWTHRATE*days));
    
    cout << endl;
    cout << "Your hair height today is: " <<  hairHeight << " inches" << endl;
    cout << "Thanks for using Marge's Hair Height Calculator!";
    
    return 0;
}
