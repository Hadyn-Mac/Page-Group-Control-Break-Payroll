int getFica(float gross, float YTD)
{
	float ficaRate = 0.071;
	float ficaTax = 0.00;
	float ficaLimit = 110100.00;
	
	if(YTD >= ficaLimit)
   	{
   		ficaTax = 0;
   	}
   	else
   	{
   		if((YTD + gross) <= ficaLimit)
   		{
   			ficaTax = gross * ficaRate;
   		}
   		else
   		{
   			ficaTax = (ficaLimit - YTD) * ficaRate;
   		}
   	}
   	
   	return ficaTax;
}
