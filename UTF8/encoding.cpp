#include<stdio.h>
int rangeCheck();
void printBin(size_t);
int encode(size_t,size_t,size_t);
int main()
{
	//	unsigned char p[4]={0};
	size_t q;
	size_t num = 0;
	size_t bytesRequired = 0;

	scanf("%u",&num);
	bytesRequired = rangeCheck(num);
	switch(bitsRequired)
	{
		case 1: q = num;
			printf("%hhu",num);
			break;
		case 2: q=0xc080;
			q = encode(q,11,num);
			break;
		case 3: q=0xE08080;
			q=encode(q,16,num);
			break;
		case 4:q=0xF0808080;
		       q = encode(q,27,num);
		       break;
	}
	printBin(q);
}
int encode(size_t mask,size_t bitval,size_t num)
{
	size_t bit,bit0,q = mask;
	for(bit=0,bit0=0;bit<bitval;bit++,bit0++)
	{
		if((num>>bit)&1)
			q = q^(1<<bit0);
		if(bit==6||bit==13||bit==21)
			bit0 +=2 ;
	}
	return q;
}
int rangeCheck(int data)
{
	if(data > 0xFFFF && data <= 0x10FFFF)
	{
		return 4;
	}
	else if(data > 0x7FF && data <= 0xFFFF)
	{
		return 3;
	}
	else if(data > 0x7F && data <= 0x7FF)
	{
		return 2;
	}
	else 
		return 1;
}
void printBin(unsigned int num)
{
	int bit=0;
	printf("\n");
	for(bit=31;bit>=0;bit--)
	{
		printf("%d",(num>>bit)&1);
		if(bit%8==0)
			printf("\t");
	}
}
