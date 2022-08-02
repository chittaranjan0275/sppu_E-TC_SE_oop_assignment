#include <iostream>
using namespace std;

class check_count
 {
   public:
     int count;
     check_count()
     {
       count = 0;
     };
     void operator ++() { ++count; }
 };
int main()
 {
   check_count x;
   cout << "x =" << x.count<<"\n";
   ++x;
   cout<<"\nAfter increment/decrement\n";
   cout<<"x ="<<x.count<<"\n";
   return 0;
}
