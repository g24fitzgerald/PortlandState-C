//Copyright 2014 Gina Fitzgerald 
// Converts Celsius to farenheit 

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char * pszArgs[])
{
   //input tempurature in C
   int celsius;
   cout << "input your tempurature in Celsius:";
   cin >> celsius;

   //conversion 
   int factor;
   factor = 212 - 32
   int fahrenheit;
   fahrenheit = factor * celsius / 100 + 32;

   //Print
   cout << "Your tempurature in Farenheit";
   cout << fahrenheit << endl;

   cout << "hit enter to continue" << endl;
   cin.igore(10, '\n');
   cin.get();
   return 0;
}
