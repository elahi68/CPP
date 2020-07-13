//Arithmetic operator -   function - parameter is int op1,Integer for 10 + obj case
Integer operator+(int op1,Integer op2)
{
	Integer temp;
	temp.data = op1+op2.data;
	return temp;
}	
Integer operator-(int op1,Integer op2)
{
	Integer temp;
	temp.data = op1-op2.data;
	return temp;

}
Integer operator*(int op1,Integer op2)
{
	Integer temp;
	temp.data = op1*op2.data;
	return temp;

}
Integer operator/(int op1,Integer op2)
{
	Integer temp;
	temp.data = op1/op2.data;
	return temp;

}
//Relational operator - return type bool -   functions
bool operator<(int op1,Integer op2)
{
	if(op1 < op2.data)
		return true;
	return false;
}   
bool operator<=(int op1,Integer op2)
{
	return (op1 <= op2.data);

}	
bool operator>(int op1,Integer op2)
{
	return (op1 > op2.data);

}	
bool operator>=(int op1,Integer op2)
{
	return (op1 >= op2.data);

}	
bool operator==(int op1,Integer op2)
{
	return (op1 == op2.data);

}	
bool operator!=(int op1,Integer op2)
{
	return (op1 != op2.data);

}
//Logical Operators - return type bool -  function - case (int op1,Integer)
bool operator &&(int op1,Integer op2)
{
	return (op1 || op2.data);

}
bool operator ||(int op1,Integer op2)
{
	return (op1 || op2.data);
}
//Bitwise operators - return type is bool -   function - case (int op1,Integer)
Integer operator &(int op1,Integer op2)
{
	Integer temp;
	temp.data = op1 & op2.data;
	return temp;

}
Integer operator |(int op1,Integer op2)
{
	Integer temp;
	temp.data = op1 | op2.data;
	return temp;
}
ostream& operator << (ostream& os,Integer i)
{
	os<<i.data;
	return os;
}
