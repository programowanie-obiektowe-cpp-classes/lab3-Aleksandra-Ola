#pragma once
using namespace std;

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj
int i=0;
unsigned int towarstatku=0;
int suma = 0; 
int liczbazaglowcow;
 if (towar ==0)
 {
   cout<<"nie tworzymy zadnego statku"<<endl;
   return 0;
 }
 else
 {     
   while (suma < towar)
   {
    Stocznia stocznia{};
    Statek* s1=stocznia();
    towarstatku = s1->transportuj();
    suma=suma+towarstatku;
    if(dynamic_cast< Zaglowiec* >(s1))
    {i=i+1;};   
    delete s1;
   }
    return i;
 }

}