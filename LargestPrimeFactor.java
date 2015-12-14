class LargestPrimeFactor
{
	//This program is written to find out largest prime factor of any given number
	public static void main(String []args)
	{
		long no=Long.parseLong(args[0]);
		long big=0;
		System.out.println("This program is going to calculate Largest prime factor of "+no);
		for(long i=2; i<=(Math.sqrt(no));i++)
		{
			if(no%i==0)
			{
				int flag=0;
				check:
				for(long j=2;j<Math.sqrt(i);j++)
				{
					if(i%j==0)
					{
						flag++;
						break check;
					}
				}
				if(flag==0)
					big=i;
			}

		}
		System.out.println("Largest Prime Factor of Given no is: "+big);
	}
}