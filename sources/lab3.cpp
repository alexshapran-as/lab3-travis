double sum ( double eps )
{
	int k = 0;
    int sign = 1;
    double sum = 0.0; 
    double sum_mod = 0.0;

    	do 
	{
		k++;  
		sum_mod = (double)1 / ( k * k );  
		sum += sign*sum_mod;  
		sign *= -1;  
	}
	while(sum_mod >= eps);

	return sum;
}
