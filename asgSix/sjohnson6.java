class sjohnson6
{
	public static void main(String[] args)
	{
		int x = 12;
		double y = 3.12;

		int evalOne = (int) ((x+y*x)/(y-x));
		double evalTwo = (-x-y)/(x*y+x);
		double evalThree = (x+y-x)/y;
	
		System.out.printf("(x+y*x)/(y-x) = %d", evalOne);
		System.out.printf("\n(-x-y)/(x*y+x) = %f", evalTwo);
		System.out.printf("\n(x+y-x)/y = %f\n", evalThree);
	}
}
