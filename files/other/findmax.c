	double find_max(double num1, double num2) 
	{
	if (num2>num1)
	{
			return num2;
	}
	else
	{
		return num1;
	}
	}

	int main()
	{
		double a = 13.1, b = 17.1;
		double c;
		c = find_max(13.3, 17.1);

		printf("a=%f, b=%f, max(a,b)=%f",a,b,c);
		return 0;
	}
