#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

inline double moreRandom(unsigned iterations)
{
   double result = (double)rand() / (double)RAND_MAX;
   
   for(unsigned i = 1; i < iterations; i++)
   {
      result = (((double)rand()) + result) / (double)RAND_MAX;
   }
   
   return result;
}

int main(int argc, char* argv[])
{
   if(argc < 2)
   {
      cout << "Usage is <number of points>";
      exit(0);
   }

   unsigned iterations = strtoul(argv[1], NULL, 0);
   unsigned insideCircleCount = 0;
   
   double p1, p2;

   for(unsigned i = 0; i < iterations; i++)
   {
      p1 = moreRandom(4);
      p2 = moreRandom(4);
      
      if(p1 * p1 + p2 * p2 <= 1)
         insideCircleCount++;
   }

   cout << "PI: " << setprecision (15) << 4.0 * (double)insideCircleCount / (double)iterations << "\n";
   
   return 0;
}
