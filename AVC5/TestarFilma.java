/**
 * A classe TestarFilma é responsável por testar a classe Filme,
 * criando instâncias de filmes e exibindo suas informações, como título
 * e duração em horas e minutos.
 */
public class TestarFilma {
    
    /**
     * O método main é o ponto de entrada para o programa. Ele cria
     * instâncias de filmes, define seus títulos e durações, e exibe
     * suas informações.
     */
    public static void main(String[] args) {
        // Criar e configurar o primeiro filme
        Filme filme1 = new Filme();
        filme1.setTitulo("Vingadores");
        filme1.setDuracaoEmMinutos(142);
        filme1.exibirDuracaoEmHora(filme1.getDuracaoEmMinutos(), filme1.getTitulo());

        // Criar e configurar o segundo filme
        Filme filme2 = new Filme();
        filme2.setTitulo("Hotel Transilvânia");
        filme2.setDuracaoEmMinutos(93);
        filme2.exibirDuracaoEmHora(filme2.getDuracaoEmMinutos(), filme2.getTitulo());

        // Imprimir os títulos dos filmes em cartaz
        System.out.println("Os filmes em cartaz são " + filme1.getTitulo() + " e " + filme2.getTitulo());

        // Criar e configurar o terceiro filme
        Filme filme3 = new Filme();
        filme3.setTitulo("Superação DE Milagre");
        filme3.setDuracaoEmMinutos(110);
        filme3.exibirDuracaoEmHora(filme3.getDuracaoEmMinutos(), filme3.getTitulo());

        // Criar e configurar o quarto filme
        Filme filme4 = new Filme();
        filme4.setTitulo("Pantera Negra");
        filme4.setDuracaoEmMinutos(120);
        filme4.exibirDuracaoEmHora(filme4.getDuracaoEmMinutos(), filme4.getTitulo());

        // Criar e configurar o quinto filme
        Filme filme5 = new Filme();
        filme5.setTitulo("Pantera Cor de Rosa");
        filme5.setDuracaoEmMinutos(93);
        filme5.exibirDuracaoEmHora(filme5.getDuracaoEmMinutos(), filme5.getTitulo());
    }
}
