class student
{
	int roll;
	string name;
	float marks[5];
public:
	student();
	void viewStuMarks();
	friend void faculty :: updateMarks(student &);
	friend void faculty :: viewMarks(student &);
};
