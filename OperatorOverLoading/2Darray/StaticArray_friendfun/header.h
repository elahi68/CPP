class Array;
class Array
{
	int ar[2][2];
	public : Array();
		 Array(const Array&);
		 void display();
		 friend Array operator+(Array&,Array&);
		 friend Array operator-(Array&,Array&);
		 friend Array operator*(Array&,Array&);
		 Array operator=(const Array&);
};
Array :: Array()
{
	cout<<"Constructor invoked! "<<this<<endl;;
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			ar[i][j] = rand()%10;
}
Array :: Array(const Array &obj)
{
	cout<<"copy invoked\n";
	cout<<"copy const parameter: ";
	cout<<&(obj.ar)<<endl;
	cout<<"calling: "<<this<<endl;
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			ar[i][j] =obj.ar[i][j];
}
void Array :: display()
{
	cout<<"(";
	for(int i=0;i<2;i++)
	{
		cout<<"(";
		for(int j=0;j<2;j++)
		{
			cout<<ar[i][j];
			if(j!=1)
				cout<<",";
		}
		cout<<")";
		if(i!=1)
			cout<<",";
	}
	cout<<")";
}
//Array temp;
Array Array :: operator=(const Array &obj)
{
	cout<<"= invoked\n parameter addr: ";
	cout<<&(obj.ar)<<endl;
	cout<<"calling obj addr: "<<this<<endl;
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			ar[i][j] =obj.ar[i][j];	
	return *this;
}
Array operator+ (Array &ob1,Array &ob2)
{
	Array temp;
	cout<<"add invoke\n";
	cout<<"temp: "<<&(temp.ar)<<endl;
	cout<<"parameter: "<<&(ob2.ar)<<endl;
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			temp.ar[i][j] = ob1.ar[i][j] + ob2.ar[i][j];	
	return temp;
}
Array operator- (Array &ob1,Array &ob2)
{
	Array temp;

	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			temp.ar[i][j] = ob1.ar[i][j] - ob2.ar[i][j];

	return temp;
}
Array operator* (Array &ob1,Array &ob2)
{
	Array temp;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<2;k++)
			{
				//i j += ik* ij
				temp.ar[i][j] += ob1.ar[i][k] * ob2.ar[i][j];
			}
		}
	}
}
