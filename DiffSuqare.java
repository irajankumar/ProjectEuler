class DiffSquare
{
	public static void main(String []args)
	{
		long sumsqr=0;
		long sqrsum=0;
		for(int i=1;i<=100;i++)
		{
			sqrsum+=Math.pow(i,2);
		}
		long total=0;
		for(int i=1;i<=100;i++)
		{
			total=total+i;
		}
		sumsqr=(long)Math.pow(total,2);
		System.out.println("The difference is:"+(sqrsum-sumsqr));
	}
}