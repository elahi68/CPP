class Faculty;
student ::student()
{
	cout<<"\nStudent Details Entry\n"<<endl;
	cout<<"Enter Your Roll No: ";
	cin>>roll;
	cout<<"Enter Your name: ";
	cin>>name;
}
void student :: viewStuMarks()
{
	cout<<"Roll: "<<roll<<"\n"<<"Name: "<<name<<endl;
	cout<<"Telugu: "<<marks[0]<<"\t";
	cout<<"English: "<<marks[1]<<"\n";
	cout<<"Physics: "<<marks[2]<<"\t";
	cout<<"Social: "<<marks[3]<<"\n";
	cout<<"Hindi: "<<marks[4]<<"\t";
}

