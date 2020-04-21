using System;

class URI {
	static void Main(string[] args) {
		string ln;
		
		while ( (ln = Console.ReadLine()) != null ) {
			string n = "";
			int i;
			
			for ( i=0; i<ln.Length; i++ ) {
				if (ln[i] != ' ' && ln[i] != ',') {
					if ( ln[i] == 'o' || ln[i] == 'O')
						n += '0';
					else if ( ln[i] == 'l' )
						n += '1';
					else
						n += ln[i];
				}
			}
			
			try{
				long v = long.Parse(n);
				
				if ( v > 2147483647 )
					Console.WriteLine("error");
				else
					Console.WriteLine(v);
				
			}catch(Exception e) {
				Console.WriteLine("error");
			}
		}
		
	}
}