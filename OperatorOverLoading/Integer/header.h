class Integer
{
	int data;
	public:
		Integer()
		{
			data =0;
		}
		Integer(int);//Constructor
	       Integer(string);//Constructor

	       /*------------------Unary Operators---------------*/

	       //Increment and Decrement - operation on self object
	       Integer operator ++();
	       Integer operator ++(int);//post inc

	       Integer operator --();
	       Integer operator --(int);//post dec

	       //Other Operators
	       Integer operator ~();	       
	       friend ostream& operator<<(ostream&,const Integer);

	       /*---------------Binary operators-------------------*/

	       //ArithMetic Operrators - parameter is integer object
	       Integer operator +(Integer);
	       Integer operator -(Integer);
	       Integer operator *(Integer);
	       Integer operator /(Integer);
	       Integer operator =(Integer);
	       //Arithmetic Operators - parameter is int
	       Integer operator +(int);
	       Integer operator -(int);
	       Integer operator *(int);
	       Integer operator /(int);
	       Integer operator =(int);
	       //Arithmetic operator - friend function - parameter is int,Integer for 10 + obj case
	       friend Integer operator+(int,Integer);   
	       friend Integer operator-(int,Integer);   
	       friend Integer operator*(int,Integer);   
	       friend Integer operator/(int,Integer);   

	       //Relational Operators - return type bool - parameter is Integer object
	       bool operator <(Integer);//less than
	       bool operator <=(Integer);//less than equals
	       bool operator >(Integer);//greater than
	       bool operator >=(Integer);//greather than equals
	       bool operator ==(Integer);//is equal
	       bool operator !=(Integer);//not equal

	       //Relational Operators - return type bool - parameter is int
	       bool operator <(int);//less than
	       bool operator <=(int);//less than equals
	       bool operator >(int);//greater than
	       bool operator >=(int);//greather than equal
	       bool operator ==(int);//is equal
	       bool operator !=(int);//not equal

	       //Relational operator - return type bool - friend functions
	       friend bool operator<(int,Integer);   
	       friend bool operator<=(int,Integer);   
	       friend bool operator>(int,Integer);   
	       friend bool operator>=(int,Integer);   
	       friend bool operator==(int,Integer);   
	       friend bool operator!=(int,Integer);   

	       //Logical operators - return type is bool - parameter is Integer
	       bool operator &&(Integer);
	       bool operator ||(Integer);
	       bool operator !();

	       //Logical operators - return type is bool - parameter is int
	       bool operator &&(int);
	       bool operator ||(int);

	       //Logical Operators - return type bool -friend function - case (int,Integer)
	       friend bool operator &&(int,Integer);
	       friend bool operator ||(int,Integer);

	       //Bitwise operators - return type is bool - parameter is Integer
	       Integer operator &(Integer);
	       Integer operator |(Integer);

	       //Bitwise operators - return type is bool - parameter is int
	       Integer operator &(int);
	       Integer operator |(int);

	       //Bitwise operators - return type is bool - friend function - case (int,Integer)
	       friend Integer operator &(int,Integer);
	       friend Integer operator |(int,Integer);

};
