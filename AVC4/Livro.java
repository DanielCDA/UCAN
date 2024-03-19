/**
 * A classe Livro representa um livro com título, quantidade de páginas e número de páginas lidas.
 */
public class Livro {
  private String titulo;           // O título do livro
  private int quantidadePaginas;   // O número total de páginas do livro
  private int paginasLidas;        // O número de páginas já lidas do livro
  
  /**
   * Construtor padrão da classe Livro.
   * Inicializa um livro sem título e com zero páginas.
   */
  Livro() {}
  
  /**
   * Construtor da classe Livro.
   * 
   * @param titulo O título do livro.
   * @param quantidadePaginas A quantidade total de páginas do livro.
   * @param paginasLidas O número de páginas já lidas do livro.
   */
  Livro(String titulo, int quantidadePaginas, int paginasLidas) {
      this.titulo = titulo;
      this.quantidadePaginas = quantidadePaginas;
      this.paginasLidas = paginasLidas;
  }
  
  /**
   * Define o título do livro.
   * 
   * @param titulo O título do livro.
   */
  public void setTitulo(String titulo) {
      this.titulo = titulo;
  }
  
  /**
   * Define a quantidade total de páginas do livro.
   * 
   * @param qtdPaginas A quantidade total de páginas do livro.
   */
  public void setQuantidadePaginas(int qtdPaginas) {
      this.quantidadePaginas = qtdPaginas; 
  }
  
  /**
   * Define o número de páginas já lidas do livro.
   * 
   * @param paginasLidas O número de páginas já lidas do livro.
   */
  public void setPaginasLidas(int paginasLidas) {
      this.paginasLidas = paginasLidas;
  }

  /**
   * Obtém o título do livro.
   * 
   * @return O título do livro.
   */
  public String getTitulo() {
      return this.titulo;
  }
  
  /**
   * Obtém a quantidade total de páginas do livro.
   * 
   * @return A quantidade total de páginas do livro.
   */
  public int getQuantidadePaginas() {
      return this.quantidadePaginas;
  }
  
  /**
   * Obtém o número de páginas já lidas do livro.
   * 
   * @return O número de páginas já lidas do livro.
   */
  public int getPaginasLidas() {
      return this.paginasLidas;
  }

  /**
   * Verifica o progresso de leitura do livro e imprime a porcentagem de conclusão.
   * 
   * @param qtdPaginas A quantidade total de páginas do livro.
   * @param paginasLidas O número de páginas já lidas do livro.
   */
  public void verificarProgresso(int qtdPaginas, int paginasLidas) {
      int porcentagem = paginasLidas * 100 / qtdPaginas;
      System.out.println("Você ja leu " + porcentagem + "% do livro.");
  }    
}
