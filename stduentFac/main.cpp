#include<iostream>
using namespace std;
#include<unistd.h>
class student;
#include"facultyHea.h"
#include"studentHea.h"
#include"student.cpp"
#include"faculty.cpp"
int main()
{
srand(getpid());
	faculty f1;
	student s1;
	cout<<"Updating Marks"<<endl;
	f1.updateMarks(s1);
	cout<<endl;
	cout<<"Marks Updated"<<endl<<"Viewing Marks"<<endl;
	f1.viewMarks(s1);
	cout<<endl;
	cout<<"Student viewing Marks"<<endl;
	s1.viewStuMarks();	
	cout<<endl;
}
