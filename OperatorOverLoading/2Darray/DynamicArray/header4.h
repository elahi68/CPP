class Matrix
{
	int **ptr;
	int row,col;
	public:
	Matrix(const int=0,const int=0);
	Matrix(Matrix&);
	~Matrix();
//	void Matrix(const int=0,const int=0);
	Matrix& operator=(Matrix&);
	Matrix& operator+(Matrix&);
	Matrix& operator-(Matrix&);
	Matrix& operator*(Matrix&);
	void display();
	friend bool addCheck(Matrix&,Matrix&);
	friend bool subCheck(Matrix&,Matrix&);
	friend bool mulCheck(Matrix&,Matrix&);
};
Matrix :: Matrix(const int r,const int c)
{
	row =r;col =c;
	if(row)
	{
		ptr = new int*[row];
		for(int i=0;i<row;i++)
		{
			ptr[i] = new int[col];
			for(int j=0;j<col;j++)
				ptr[i][j] = rand()%5;
		}
	}
	else
	{
		row = col =0;
		ptr =NULL;
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
Matrix :: Matrix(Matrix& ob2)
{
	cout<<"Copy invoked\n";
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
/*
void Matrix :: Matrix(const int r,const int c)
{
	row = r; col =c;
	ptr = new int*[row];
	for(int i=0;i<row;i++)
	{
		ptr[i] = new int[col];
		for(int j=0;j<col;j++)
			ptr[i][j] = rand()%5;
	}
}*/
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
Matrix& Matrix :: operator=(Matrix &ob2)
{
	if(row != ob2.col)
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
	static Matrix temp(row,ob2.col);
	temp.display();
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<row;j++)
		{
			temp.ptr[i][j] = 0;
			for(int k=0;k<col;k++)
			{
				temp.ptr[i][j] += ptr[i][k] * ob2.ptr[k][j];
			}
		}
	}
	cout<<"temp * "<<endl;
	temp.display();
	cout<<endl;
	return temp;
}
bool addCheck(Matrix &op1,Matrix &op2)
{
	if(op1.row == op2.row)
		return true;
	return false;
}
bool subCheck(Matrix &op1,Matrix &op2)
{
	if(op1.row == op2.row)
		return true;
	return false;	
}
bool mulCheck(Matrix &op1,Matrix &op2)
{
	if(op1.col == op2.row)
		return true;
	return false;
}
