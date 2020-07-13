/*--------------------Constructor Here-------------------------*/
Integer :: Integer (int i)
{
	data = i;
}
Integer :: Integer (string ptr)
{
	data = std::stoi(ptr,nullptr,10);
}

/*------------------Unary Operators---------------*/
//Increment and Decrement - operation on self object
Integer Integer :: operator ++()
{
	++data;
	return *this;
}
//post inc a++;
Integer Integer :: operator ++(int)
{
	Integer temp;
	temp.data = data++;
	return temp;
}
Integer Integer :: operator --()
{
	--data;
	return *this;
}
//post dec a--;
Integer Integer :: operator --(int)
{
	Integer temp;
	temp.data = data--;
	return temp;
}
//Other Operators
Integer Integer :: operator ~()
{
	Integer temp;
	temp.data = ~data;
	return temp;
}	       
/*---------------Binary operators-------------------*/
//ArithMetic Operrators - parameter is integer object
Integer Integer :: operator +(Integer op2)
{
	Integer temp;
	temp.data = data + op2.data;
	return temp;
}
Integer Integer :: operator -(Integer op2)
{

	Integer temp;
	temp.data = data - op2.data;
	return temp;
}
Integer Integer :: operator *(Integer op2)
{

	Integer temp;
	temp.data = data * op2.data;
	return temp;
}
Integer Integer :: operator /(Integer op2)
{
	Integer temp;
	temp.data = data / op2.data;
	return temp;
}
Integer Integer :: operator =(Integer op2)
{
	data = op2.data;
	return *this;
}
//Arithmetic Operators - parameter is int
Integer Integer :: operator +(int op2)
{
	Integer temp;
	temp.data = data + op2;
	return temp;
}
Integer Integer :: operator -(int op2)
{
	Integer temp;
	temp.data = data - op2;
	return temp;
}
Integer Integer :: operator *(int op2)
{
	Integer temp;
	temp.data = data * op2;
	return temp;
}
Integer Integer :: operator /(int op2)
{
	Integer temp;
	temp.data = data / op2;
	return temp;
}
Integer Integer :: operator =(int op2)
{
	data = op2;
	return *this;
}
//Relational Operators - return type bool Integer :: - parameter is Integer Integer :: object
bool Integer :: operator <(Integer op2)
{
	return (data < op2.data);
}
bool Integer :: operator <=(Integer op2)
{
	return (data <= op2.data);
}
bool Integer :: operator >(Integer op2)
{
	return (data > op2.data);
}
bool Integer :: operator >=(Integer op2)
{
	return (data >= op2.data);
}
bool Integer :: operator ==(Integer op2)
{
	return (data == op2.data);
}
bool Integer :: operator !=(Integer op2)
{
	return (data != op2.data);
}

//Relational Operators - return type bool Integer :: - parameter is int
bool Integer :: operator <(int op2)
{
	return (data < op2);
}
bool Integer :: operator <=(int op2)
{
	return (data <= op2);
}
bool Integer :: operator >(int op2)
{
	return (data > op2);
}
bool Integer :: operator >=(int op2)
{
	return (data >= op2);
}
bool Integer :: operator ==(int op2)
{
	return (data == op2);
}
bool Integer :: operator !=(int op2)
{
	return (data != op2);
}

//Logical operators - return type is bool Integer :: - parameter is Integer Integer ::
bool Integer :: operator &&(Integer op2)
{
	return (data && op2.data);
}
bool Integer :: operator ||(Integer op2)
{
	return (data || op2.data);
}
bool Integer :: operator !()
{
	return !(data);
}

//Logical operators - return type is bool Integer :: - parameter is int
bool Integer :: operator &&(int op2)
{
	return (data && op2);
}
bool Integer :: operator ||(int op2)
{
	return (data || op2);
}

//Bitwise operators - return type is bool Integer :: - parameter is Integer Integer ::
Integer Integer :: operator &(Integer op2)
{
	Integer temp;
	temp.data = data & op2.data;
	return temp;
}
Integer Integer :: operator |(Integer op2)
{
	Integer temp;
	temp.data = data | op2.data;
	return temp;
}

//Bitwise operators - return type is bool Integer :: - parameter is int
Integer Integer :: operator &(int op2)
{
	Integer temp;
	temp.data = data & op2;
	return temp;
}
Integer Integer :: operator |(int op2)
{
	Integer temp;
	temp.data = data | op2;
	return temp;
}
