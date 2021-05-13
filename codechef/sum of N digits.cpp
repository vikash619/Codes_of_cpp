#include <iostream>
using namespace std;

int main()
{
   int T;             // For how many times to take a user input
   cin>>T;
   
   while(T--)         // suppose user entered = 3 than T = 3  and it will take value for "num" untill "T" become "0"
   {
       int num, fake;
       int total = 0;
       cin>>num;
       
       fake = num;      // storing originam value to a temporary variable
       while(fake != 0)
       {
           int rem = fake%10;
           total = total + rem;
           fake = fake/10;
       }
       cout<<total<<endl;
   }

    return 0;
}
