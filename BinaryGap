int solution(int N) {
	// write your code in C99 (gcc 6.2.0)
	int counter = 0;
	int countermax = 0;
	int flag = 0;

	while (N)
	{
		if ((N & 0x01) == 0)
		{
			if (flag == 1)
			{
				counter++;
			}			
		}
		else
		{	
			flag = 1;
			if (counter>countermax)
			{
				countermax = counter;
			}
			counter = 0;
		}
		N >>= 1;
	}
	return countermax;
}
