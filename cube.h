int cubemake(int a, char sym, char symbol[a][a])
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; i < a; j++)
    	{
			symbol[i][j] = sym;
    	}
	}
  	cubeprint(a, sym, symbol);
}
int cubeprint(int a, char sym, char symbol[a][a])
{
	for (int i = 0; i < a; i++)
	{
    	for (int j = 0; i < a; j++)
		{
    	  printf("%c", symbol[i][j]);
    	}
	}
}
