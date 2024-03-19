/**
 * A classe TestarLivro é usada para testar a funcionalidade da classe Livro.
 */
public class TestarLivro {

    /**
     * O método main é o ponto de entrada para o programa. Ele cria instâncias da classe Livro
     * e testa seus métodos.
     */
    public static void main(String[] args) {
        // Criação e inicialização de um livro favorito
        Livro livroFavorito = new Livro("Despidos, Vestidos e Revestidos", 226, 0);
        livroFavorito.setTitulo("O Pequeno Principe");
        livroFavorito.setQuantidadePaginas(98);
        System.out.println("O livro " + livroFavorito.getTitulo() + " possui " + livroFavorito.getQuantidadePaginas() + " paginas.");
        livroFavorito.setPaginasLidas(20);
        livroFavorito.verificarProgresso(livroFavorito.getQuantidadePaginas(), livroFavorito.getPaginasLidas());
        livroFavorito.setPaginasLidas(50);
        livroFavorito.verificarProgresso(livroFavorito.getQuantidadePaginas(), livroFavorito.getPaginasLidas());

        // Criação e inicialização de um livro religioso
        Livro livroReligioso = new Livro("O Perfil de um Cristao", 357, 8);
        livroReligioso.setTitulo("Adao");
        livroReligioso.setQuantidadePaginas(98);
        System.out.println("O livro " + livroReligioso.getTitulo() + " possui " + livroReligioso.getQuantidadePaginas() + " paginas.");
        livroReligioso.setPaginasLidas(20);
        livroReligioso.verificarProgresso(livroReligioso.getQuantidadePaginas(), livroReligioso.getPaginasLidas());
       
        // Criação e inicialização de um livro de história
        Livro historia = new Livro();
        historia.setTitulo("A Arte da Guerra");
        historia.setQuantidadePaginas(231);
        System.out.println("O livro " + historia.getTitulo() + " possui " + historia.getQuantidadePaginas() + " paginas.");
        historia.setPaginasLidas(34);
        historia.verificarProgresso(historia.getQuantidadePaginas(), historia.getPaginasLidas());
        
        // Criação e inicialização de um livro de programação
        Livro programacao = new Livro();
        programacao.setTitulo("Clean Code");
        programacao.setQuantidadePaginas(464);
        System.out.println("O livro " + programacao.getTitulo() + " possui " + programacao.getQuantidadePaginas() + " paginas.");
        programacao.setPaginasLidas(150);
        programacao.verificarProgresso(programacao.getQuantidadePaginas(), programacao.getPaginasLidas());
        
        // Criação de instâncias adicionais de livros (sem inicialização de atributos)
        Livro arquitetura = new Livro();
        Livro perfuracao = new Livro();
        Livro baseDeDados = new Livro();
        Livro jornal = new Livro();
        Livro educacaoFisica = new Livro();
        Livro culinaria = new Livro();
    }
}
