#include<iostream>
using namespace std;

int main()
{
 
 int a = 25;
 int b = 25;
 int p;
 int temp;
 int rem;
 int gcd;
 int lcm;
 
 if(a == b)
 {
   gcd = a;
   lcm = a;
 }
 p = a * b;
 
 do
 {
 
   if( a < b )
   {
     temp = a;
     a = b;
     b = temp;
   }
 
   rem = a % b;
 
   if(rem == 0)
   {
     gcd = b;
     // LCM is smallest number that divides both 
     // 15 = 5*3
     // 25 = 5*5
     // GCD(HCF)= common multiplication = 5
     // LCM = union of all factor = 5*3*5
     lcm = p / gcd;
     
   }
   else
   {
     a = b;
     b = rem;
   }
   
 }while(rem!=0);
 
 cout<<"GCD : "<<gcd<<endl;
 cout<<"LCM : "<<lcm<<endl;
 
 return 0;

}
