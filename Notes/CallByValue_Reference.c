//Call by Value and Call by Reference
// i is being called as call by value and
// j is being called as call by reference
void check(int , int*);
main()
{
	int i=-5,j=-2;
	check(i,&j);// i and j are actual parameters
	printf("\ni=%d\nj=%d\n&j=%u",i,j,&j);

}
void check(int a,int *b)//a and b are formal parameters
{
	a=a*a;
	*b= *b * *b;
	printf("\na=%d\n*b=%d\nb=%u",a,*b,b);
}
