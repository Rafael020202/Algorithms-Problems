using System;

class URI {
	static void Main(string[] args){
		string ln;
		int i, n;
		
		n = 1;
		
		while( (ln = Console.ReadLine()) != null ) {
			string[] vls = Console.ReadLine().Split(' ');
			
			int totM = 0, totF = 0;
			int qtde = 0;
			
			for ( i=0; i<vls.Length; i++ ) {
				if(vls[i] == ln) {
					qtde++;
					
					if(vls[i+1] == "M")
						totM++;
					else
						totF++;
				}
			}
			
			if(n > 1)
				Console.WriteLine();
			Console.WriteLine($"Caso {n}:");
			Console.WriteLine($"Pares Iguais: {qtde}");
			Console.WriteLine($"F: {totF}");
			Console.WriteLine($"M: {totM}");
			
			n++;
		}
	}
}