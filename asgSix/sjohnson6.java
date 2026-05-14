// Stnley johnson
//

import java.util.function.BiConsumer;
class sjohnson6
{
	public static void main(String[] args)
	{
		int int1 = 12;
		int int2 = 13;

            	double dbl1 = 12.38;
            	double dbl2 = 13.92;

            	System.out.print("X = 12, Y = 13\n");
            	calcStuff(int1, int2);

            	System.out.print("\n");
            	System.out.print("X = 3.12, Y = 3.13\n");
            	calcStuff(dbl1, dbl2);
	}

	public static <T> void  calcStuff(T O, T K){
    		BiConsumer<Integer, Integer> intInput = (x,  y) ->{
            		int evalOne = ((x+y*x)/(y-x));
            		int evalTwo = (-x-y)/(x*y+x);
            		int evalThree = (x+y-x)/y;

            		System.out.printf("(x+y*x)/(y-x) = %d", evalOne);
            		System.out.printf("\n(-x-y)/(x*y+x) = %d", evalTwo);
            		System.out.printf("\n(x+y-x)/y = %d\n", evalThree);
    		};

    		BiConsumer<Double, Double> dblInput = (x,  y) ->{
            		double evalOne = ((x+y*x)/(y-x));
            		double evalTwo = (-x-y)/(x*y+x);
            		double evalThree = (x+y-x)/y;

            		System.out.printf("(x+y*x)/(y-x) = %.7f", evalOne);
            		System.out.printf("\n(-x-y)/(x*y+x) = %.7f", evalTwo);
            		System.out.printf("\n(x+y-x)/y = %.7f\n", evalThree);
    		};

    		if (O instanceof Integer && K instanceof Integer) {
    			intInput.accept((Integer) O,(Integer) K);
    		} else { dblInput.accept((Double) O,(Double) K);}
	}
}
