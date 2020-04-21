using System;
using System.Collections.Generic;

class URI 
{
	static void Main(string[] args)
	{		
		Dictionary<string, float> map;
		int n;
		int i, j;
		
		map = new Dictionary<string, float>();
		n = int.Parse(Console.ReadLine());
		
		for (i=0; i<n; i++)
		{
			string[] ln;
			string prod;
			float preco;
			int qtdeProd;
			
			qtdeProd = int.Parse(Console.ReadLine());
			
			for (j=0; j<qtdeProd; j++) 
			{
				ln = Console.ReadLine().Split(' ');
				
				prod = ln[0];
				preco = float.Parse(ln[1]);
				
				map[prod] = preco;
			}
			
			qtdeProd = int.Parse(Console.ReadLine());
			
			float tot = 0;
			int qtde;
			
			for (j=0; j<qtdeProd; j++) 
			{
				ln = Console.ReadLine().Split(' ');
				
				prod = ln[0];
				qtde = int.Parse(ln[1]);
				preco = map[prod];
				
				tot += (float) preco*qtde;  
			}
			
			Console.WriteLine($"R$ {tot.ToString("0.00")}");
		}
	
	}
}