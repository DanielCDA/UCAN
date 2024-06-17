/* Exemplo para observação do funcionamento do programa com o construtor
 * toString
*/


import javax.swing.JOptionPane;

public class ToString
{
    private String nome, morada;

    public Interfaces ( String novoNome, String novaMorada)
    {
        setNome(novoNome);
        setMorada(novaMorada);
    }
    public void setNome(String novoNome)
    {
        nome = novoNome; 
    }
     public void setMorada( String novaMorada)
     {
        morada = novaMorada;
     }
    public String toString()
    {
        String resultado = "Os dados sao:\n";
        resultado += "Nome: " +nome+ "\n";
        resultado += "Morada: " +morada+ "\n";

        return resultado;
    }

    public static void main(String[] args)
    {
        Interfaces pessoa = new Interfaces("Daniel", "Bita");
        
        JOptionPane.showMessageDialog(null, pessoa.toString());
      }
}
