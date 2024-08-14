#include <iostream>

using namespace std;

#include "ccc_time.h"
//
// $ g++ ccc_time.cpp time1.cpp -o time1
//
int main()
{  
   Time wake_up = Time(9, 0, 0);
   wake_up.add_seconds(1000); 
      /* a thousand seconds later */
   cout << wake_up.get_hours() 
      << ":" << wake_up.get_minutes()
      << ":" << wake_up.get_seconds() << "\n";

   return 0;
}
