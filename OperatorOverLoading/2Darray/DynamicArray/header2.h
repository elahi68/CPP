class Matrix
{
	int **ptr;
	int row,col;
public:
	Matrix(int=0,int=0);
	Matrix(Matrix&);
	~Matrix();
	Matrix& operator=(const Matrix&);
	Matrix operator+(Matrix&);
	Matrix operator-(Matrix&);
	void display();
};
Matrix :: Matrix(int r,int c)
{
	row = r; col =c;
	cout<<"Default invoked"<<endl;	
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
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			ptr[i][j] = ob2.ptr[i][j];	
	return *this;
}
Matrix Matrix :: operator+ (Matrix &ob2)
{
	Matrix temp(row,col);
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			temp.ptr[i][j] = ptr[i][j] + ob2.ptr[i][j];	
	return temp;
}
Matrix Matrix :: operator- (Matrix &ob2)
{
	Matrix temp(row,col);
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			temp.ptr[i][j] = ptr[i][j] - ob2.ptr[i][j];

	return temp;
}
/*
Matrix Matrix :: operator* (Matrix& ob2)
{
//	Matrix temp;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			temp.ptr[i][j] = 0;
			for(int k=0;k<2;k++)
			{
				//i j += ik* kj
				temp.ptr[i][j] += ar[i][k] * ob2.ar[k][j];
			}
		}
	}
	return temp;
}
*/
