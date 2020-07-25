class Matrix
{
	int **ptr;
	int row,col;
	public:
	Matrix(const int=0,const int=0);
	Matrix(Matrix&);
	~Matrix();
	Matrix& operator=(const Matrix&);
	Matrix& operator+(Matrix&);
	Matrix& operator-(Matrix&);
	Matrix& operator* (Matrix& ob2);
	void display();
};
Matrix :: Matrix(const int r,const int c)
{
	row = r; col =c;
	ptr = new int*[row];
	for(int i=0;i<row;i++)
	{
		ptr[i] = new int[col];
		for(int j=0;j<col;j++)
			ptr[i][j] = rand()%5;
	}
}

Matrix :: ~Matrix()
{
	for(int i=0;i<row;i++)
	{
		delete []ptr[i];
		ptr[i] = NULL;
	}
	delete []ptr;
	ptr = NULL;
}
//copy constructor
Matrix :: Matrix(Matrix& ob2)
{
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
Matrix& Matrix :: operator=(const Matrix &ob2)
{	
	if(row != ob2.row)
	{
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
	else
	{
		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
				ptr[i][j] = ob2.ptr[i][j];	
	}
	return *this;
}
Matrix& Matrix :: operator+ (Matrix &ob2)
{
	static Matrix temp(row,col);
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			temp.ptr[i][j] = ptr[i][j] + ob2.ptr[i][j];	
	return temp;
}
Matrix& Matrix :: operator- (Matrix &ob2)
{
	static Matrix temp(row,col);
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			temp.ptr[i][j] = ptr[i][j] - ob2.ptr[i][j];

	return temp;
}
Matrix& Matrix :: operator* (Matrix& ob2)
{
	if(col == ob2.row)
	{
		static Matrix temp(row,ob2.col);
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<row;j++)
			{
				temp.ptr[i][j] = 0;
				for(int k=0;k<col;k++)
				{
					//i j += ik* kj
					temp.ptr[i][j] += ptr[i][k] * ob2.ptr[k][j];
				}
			}
		}
		return temp;
	}
	else
		cout<<"ERROR in Matrix Operation"<<endl;
	exit(0);
	//handle with exception.
}
