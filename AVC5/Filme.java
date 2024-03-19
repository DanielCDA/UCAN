/**
 * A classe Filme representa um filme com seu título e duração em minutos.
 */
public class Filme {
    
    private String titulo;               // Título do filme
    private int duracaoEmMinutos;       // Duração do filme em minutos
    
    /**
     * Construtor vazio para a classe Filme.
     */
    Filme() {}
    
    /**
     * Construtor para a classe Filme.
     * @param titulo O título do filme.
     * @param duracaoEmMinutos A duração do filme em minutos.
     */
    Filme(String titulo, int duracaoEmMinutos) {
        this.titulo = titulo;
        this.duracaoEmMinutos = duracaoEmMinutos;
    }
    
    /**
     * Define o título do filme.
     * @param titulo O título do filme.
     */
    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }
    
    /**
     * Define a duração do filme em minutos.
     * @param duracaoEmMinutos A duração do filme em minutos.
     */
    public void setDuracaoEmMinutos(int duracaoEmMinutos) {
        this.duracaoEmMinutos = duracaoEmMinutos;
    }

    /**
     * Retorna o título do filme.
     * @return O título do filme.
     */
    public String getTitulo() {
        return this.titulo;
    }
    
    /**
     * Retorna a duração do filme em minutos.
     * @return A duração do filme em minutos.
     */
    public int getDuracaoEmMinutos() {
        return this.duracaoEmMinutos;
    }

    /**
     * Exibe a duração do filme em horas e minutos.
     * @param minutos A duração do filme em minutos.
     * @param titulo O título do filme.
     */
    public void exibirDuracaoEmHora(int minutos, String titulo) {
        int hora = minutos / 60;
        minutos = minutos %  60;
        System.out.println("O filme " + titulo + " possui " + hora + " horas e "  + minutos + " minutos de duração.");
    }
}
