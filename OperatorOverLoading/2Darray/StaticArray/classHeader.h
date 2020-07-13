class Array
{
	int ar[2][2];
	public:Array();
	       Array(Array&);
	       void display();
	       Array operator+ (Array&);
	       Array operator- (Array&);
	       Array operator* (Array&); 
	       Array& operator=(const Array&);
};
Array :: Array()
{
//	cout<<"Constructor Invoked"<<endl;
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			ar[i][j]=rand()%10;
}
Array :: Array(Array& ob2)
{
//	cout<<"Copy const invoked\n";
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			ar[i][j] = ob2.ar[i][j];	

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
Array& Array :: operator=(const Array &ob2)
{	
//	cout<<"= invoked \n";
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			ar[i][j] = ob2.ar[i][j];	
	return *this;
}
Array Array :: operator+ (Array& ob2)
{
	Array temp;
//	cout<<"+ invoked"<<"\n";
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			temp.ar[i][j] = ar[i][j] + ob2.ar[i][j];	
	return temp;
}
Array Array :: operator- (Array& ob2)
{
	Array temp;
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			temp.ar[i][j] = ar[i][j] - ob2.ar[i][j];

	return temp;
}
Array Array :: operator* (Array& ob2)
{
	Array temp;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			temp.ar[i][j] = 0;
			for(int k=0;k<2;k++)
			{
				//i j += ik* kj
				temp.ar[i][j] += ar[i][k] * ob2.ar[k][j];
			}
		}
	}
	return temp;
}
