#include <iostream>
#include "Reverser.h"
#include <cmath>

int Reverser::reverseDigit(int value){
   if(value/10 == 0)
   {
      return value;
   }

   if(value < 0)
   {
      return -1;
   }
   //determainate the number of figure
   int num = value - ((value/10)*10);


   int figure_num = 0;
   while(value/pow(10,figure_num)>=1 ){
   figure_num++;
}
   figure_num--;

   int final_num = num * pow(10,figure_num);
   //find the final number
   return final_num + reverseDigit(value/10);
}

std::string Reverser::reverseString(std::string letters){
//equal to an empty
   if(letters == "")
   {
      return "ERROR";
   }
   if(letters.length() <= 1)
   {
      return letters;
   }
   char final_the_num = letters.back();
   //return the number
   letters.pop_back();
   return final_the_num + reverseString(letters);
}
