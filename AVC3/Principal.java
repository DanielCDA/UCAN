import java.util.Scanner;

/**
 * Classe principal que solicita informações do usuário e cria um perfil de saúde com base nessas informações.
 */
public class Principal {
    /**
     * Método principal que solicita informações do usuário e cria um perfil de saúde com base nessas informações.
     * @param args Argumentos da linha de comando (não utilizados neste programa)
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // Solicitando e definindo o nome do usuário
        System.out.print("Digite o nome: ");
        String nome = input.next();

        // Solicitando e definindo o sobrenome do usuário
        System.out.print("Digite o sobrenome: ");
        String sobrenome = input.next();

        // Solicitando e definindo a data de nascimento do usuário (dia, mês e ano)
        System.out.println("Digite a data de nascimento:");
        System.out.print("Dia: ");
        int dia = input.nextInt();
        System.out.print("Mes: ");
        int mes = input.nextInt();
        System.out.print("Ano: ");
        int ano = input.nextInt();

        // Solicitando e definindo o peso do usuário
        System.out.print("Peso: ");
        float peso = input.nextFloat();

        // Solicitando e definindo a altura do usuário
        System.out.print("Altura: ");
        float altura = input.nextFloat();

        // Criando um objeto HealthProfile com as informações fornecidas pelo usuário
        HealthProfile perfilSaude = new HealthProfile(nome, sobrenome, dia, mes, ano, peso, altura);

        // Imprimindo as informações do perfil de saúde do usuário
        System.out.println("Nome: " + perfilSaude.getNome());
        System.out.println("Sobrenome: " + perfilSaude.getSobrenome());
        System.out.println("Sua data de nascimento: " + perfilSaude.getDia() + "/" + perfilSaude.getMes() + "/" + perfilSaude.getAno());
        System.out.println("Peso: " + perfilSaude.getPeso());
        System.out.println("Altura: " + perfilSaude.getAltura());

        // Calculando e exibindo a idade do usuário
        int idade = perfilSaude.Idade(ano);
        System.out.println("Idade: " + idade);

        // Calculando e exibindo a frequência cardíaca máxima do usuário
        int frequencia = perfilSaude.frequenciaCardiaca(idade);
        System.out.println("Frequencia cardiaca maxima: " + frequencia + " bpm");

        // Calculando e exibindo a faixa de frequência cardíaca alvo do usuário
        perfilSaude.frequenciaCardiacaAlvo(frequencia);

        // Calculando e exibindo o Indice de Massa Corporal do usuário
         perfilSaude.indiceDeMassaCorporal(peso, altura);;
    }
}

