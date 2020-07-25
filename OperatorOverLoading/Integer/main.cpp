/*Written and Compiled 
 *On : 11/07/2020
 * */
#include<iostream>
using namespace std;
class Integer;
#include"header.h"
#include"members.h"
#include"nonMembers.h"
//use your integerr class here
int main()
{
	//use your integer class here 
	// for entering the data you can do by using string class 
	// or with  int(primitive data type)
	//NOTE:cin is not handled in this code.
	//Check all your operators the the 
	//operators which cannot be overloaded
	//This is just a trail 0
	//Thank You!
	Integer i1=30,i2=40;
	i1 = i2 =5;
	cout<<i1<<"\n"<<i2<<"\n";
	i1 = 2+5;i2 = 2 +i1;
	cout<<i1<<"\n"<<i2<<"\n";
	i1 = -i2;
	cout<<i1<<"\n"<<i2<<"\n";
}
