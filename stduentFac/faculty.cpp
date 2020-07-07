faculty :: faculty()
{
	cout<<"\nFaculty Details\n"<<endl;
	cout<<"Please Enter Your ID: ";
	cin>>empid;
	cout<<"please Enter Your Name: ";
	cin>>name;
	cout<<"Enter your subject: ";
	cin>>subject;
}
void faculty :: updateMarks(student &s)
{
	cout<<"Update Marks for Roll no: "<<s.roll;
	s.marks[0]=rand()%100;
	s.marks[1]=rand()%100;
	s.marks[2]=rand()%100;;
	s.marks[3]=rand()%100;;
	s.marks[4]=rand()%100;
}
void faculty ::viewMarks(student &s)
{
	cout<<"Roll: "<<s.roll<<"\n"<<"Name: "<<s.name<<endl;
	cout<<"Telugu: "<<s.marks[0]<<"\t";
	cout<<"English: "<<s.marks[1]<<"\n";
	cout<<"Physics: "<<s.marks[2]<<"\t";
	cout<<"Social: "<<s.marks[3]<<"\n";
	cout<<"Hindi: "<<s.marks[4]<<"\t";
}
