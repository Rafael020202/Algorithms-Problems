import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main
{

    public static void main(String[] args) throws IOException
    {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        int cont = Integer.parseInt(in.readLine()), i;

        for(i=0; i<cont; i++)
        {
            String txt = in.readLine();

            int i1,i2,t = txt.length();
            char[] vC = new char[t];

            for (i1=0; i1 < t; i1++)
            {
                vC[i1] =  txt.charAt(i1);
                if(Character.isAlphabetic(vC[i1]))
                {
                    vC[i1] += 3;
                }
            }

            char aux;

            for (i1 = 0, i2=(t-1); i1 < i2; i1++, i2--)
            {
                aux = vC[i1];
                vC[i1] = vC[i2];
                vC[i2] = aux;
            }

            for (i1=(t/2); i1 < t; i1++)
            {
                vC[i1] -= 1;
            }
            String str = new String(vC);
            System.out.printf("%s\n", str);
        }
    }
}