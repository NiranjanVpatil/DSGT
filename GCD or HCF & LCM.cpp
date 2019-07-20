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
//


// C++ program to find GCD of two numbers 
#include <iostream> 
using namespace std; 
// Recursive function to return gcd of a and b 
int gcd(int a, int b) 
{ 
	// Everything divides 0 
	if (a == 0) 
	return b; 
	if (b == 0) 
	return a; 

	// base case 
	if (a == b) 
		return a; 

	// a is greater 
	if (a > b) 
		return gcd(a-b, b); 
	return gcd(a, b-a); 
} 

// Driver program to test above function 
int main() 
{ 
	int a = 98, b = 56; 
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b); 
	return 0; 
} 
