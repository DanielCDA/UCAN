import java.util.Scanner;

// Classe principal que contém o método main
public class Main {
    
    // Método main, ponto de entrada do programa
    public static void main(String[] args) {

        // Criando um objeto Scanner para entrada de dados do usuário
        Scanner input = new Scanner(System.in);


        // Solicitando e definindo o nome do usuário
        System.out.print("Digite o nome: ");
        String nome = input.next();

        // Solicitando e definindo o sobrenome do usuário
        System.out.print("Digite o sobrenome: ");
        String sobrenome =input.next();

        // Solicitando e definindo a data de nascimento do usuário (dia, mês e ano)
        System.out.println("Digite a data de nascimento:");
        System.out.print("Dia: ");
        int dia = input.nextInt();
        System.out.print("Mes: ");
        int mes = input.nextInt();
        System.out.print("Ano: ");
        int ano = input.nextInt();
        
        // Criando um objeto da classe HeartRate para calcular informações relacionadas à frequência cardíaca
        HeartRate cardiacaFrequencia = new HeartRate(nome,sobrenome,dia,mes,ano);

        // Exibindo as informações do usuário inseridas
        System.out.println("Nome: " + cardiacaFrequencia.getNome());
        System.out.println("Sobrenome: " + cardiacaFrequencia.getSobrenome());
        System.out.println("Data de nascimento: " + cardiacaFrequencia.getDia() + "/" + cardiacaFrequencia.getMes() + "/" + cardiacaFrequencia.getAno());
        
        // Calculando a idade do usuário com base no ano de nascimento
        int idade = cardiacaFrequencia.Idade(ano);
        
        // Calculando a frequência cardíaca máxima com base na idade
        int frequencia = cardiacaFrequencia.frequenciaCardiaca(idade);
        
        // Calculando e exibindo a frequência cardíaca alvo do usuário
        cardiacaFrequencia.frequenciaCardiacaAlvo(frequencia);
    }
}
