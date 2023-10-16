#include "Truckloads.h"

int Truckloads::TrueNumTrucks(int numCrates,int loadSize){

   if(numCrates < 0 || loadSize <= 0){return -1;}

   if(loadSize >= numCrates)
   {
      return 1;
   }

   int the_mid_num = numCrates / 2;
   int the_half = numCrates - the_mid_num;
   return numTrucks(the_mid_num,loadSize) + numTrucks(the_half,loadSize);
}

int Truckloads::numTrucks(int numCrates,int loadSize){
   if(numCrates>=2 && numCrates<=10000 && loadSize>=1 && loadSize<=numCrates-1){
   return numTrucks(numCrates,loadSize);
   }
   return -1;
}