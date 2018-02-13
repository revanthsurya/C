package testt;

class Top  {


static void avg() throws ArithmeticException {
throw new ArithmeticException("demo");
}

public static void main(String args[])

{
try {

avg();
}
catch (ArithmeticException e)
{
	System.out.println("caught"+e);}


} }
