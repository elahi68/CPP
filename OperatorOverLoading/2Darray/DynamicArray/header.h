class Matrix
{
	int **ptr;
	int row,col;
public:
	Matrix();
	Matrix(Matrix&);
	~Matrix();
	Matrix operator=(const Matrix&);
	Matrix operator+(Matrix&);
	Matrix operator-(Matrix&);
	void display();
};
Matrix :: Matrix()
{
	cout<<"Default constructor invoked\n";
	cout<<"Enter no of rows: ";
	cin>>row;
	cout<<"Enter no of columns: ";
	cin>>col;
	ptr = new int*[row];
	for(int i=0;i<row;i++)
	{
		ptr[i] = new int[col];
		for(int j=0;j<col;j++)
			ptr[i][j] = rand()%30;
	}
}
Matrix :: ~Matrix()
{
	cout<<"Destructor invoked\n";
	for(int i=0;i<row;i++)
	{
		delete []ptr[i];
		ptr[i] = NULL;
	}
	delete []ptr;
	ptr = NULL;
}
Matrix :: Matrix(Matrix& ob2)
{
	cout<<"copy invoked\n";
	row = ob2.row;
	col = ob2.col;
	ptr = new int*[row];
	for(int i=0;i<row;i++)
	{
		ptr[i] = new int[col];
		for(int j=0;j<col;j++)
			ptr[i][j] = ob2.ptr[i][j];
	}
}
void Matrix :: display()
{
	cout<<"Display invoked\n";
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<ptr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
Matrix Matrix :: operator=(const Matrix &ob2)
{	
	cout<<"= invoked\n";
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			ptr[i][j] = ob2.ptr[i][j];	
	return *this;
}
Matrix Matrix :: operator+ (Matrix &ob2)
{
	cout<<"+ is invoked\n";
	Matrix temp;
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			temp.ptr[i][j] = ptr[i][j] + ob2.ptr[i][j];	
	return temp;
}
Matrix Matrix :: operator- (Matrix &ob2)
{
	Matrix temp;
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			temp.ptr[i][j] = ptr[i][j] - ob2.ptr[i][j];

	return temp;
}
