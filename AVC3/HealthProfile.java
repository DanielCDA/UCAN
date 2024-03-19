/**
 * A classe HealthProfile representa o perfil de saúde de uma pessoa.
 * Ele armazena informações como nome, sobrenome, data de nascimento,
 * peso e altura, e fornece métodos para calcular a idade, a frequência
 * cardíaca máxima, a frequência cardíaca alvo e o índice de massa corporal.
 */
public class HealthProfile {
    
    private String nome;         // Nome da pessoa
    private String sobrenome;    // Sobrenome da pessoa
    private int dia;             // Dia de nascimento
    private int mes;             // Mês de nascimento
    private int ano;             // Ano de nascimento
    private float peso;          // Peso da pessoa (em quilogramas)
    private float altura;        // Altura da pessoa (em metros)
   
    /**
     * Construtor para a classe HealthProfile.
     * @param nome O nome da pessoa.
     * @param sobrenome O sobrenome da pessoa.
     * @param dia O dia de nascimento da pessoa.
     * @param mes O mês de nascimento da pessoa.
     * @param ano O ano de nascimento da pessoa.
     * @param peso O peso da pessoa.
     * @param altura A altura da pessoa.
     */
    HealthProfile(String nome, String sobrenome, int dia, int mes, int ano, float peso, float altura) {
        this.nome = nome;
        this.sobrenome = sobrenome;
        this.dia = dia;
        this.mes = mes;
        this.ano = ano;
        this.peso = peso;
        this.altura = altura;
    }
    
    /**
     * Retorna o nome da pessoa.
     * @return O nome da pessoa.
     */
    public String getNome() {
        return this.nome;
    }
    
    /**
     * Retorna o sobrenome da pessoa.
     * @return O sobrenome da pessoa.
     */
    public String getSobrenome() {
        return this.sobrenome;
    }
    
    /**
     * Retorna o dia de nascimento da pessoa.
     * @return O dia de nascimento da pessoa.
     */
    public int getDia() {
        return this.dia;
    }
    
    /**
     * Retorna o mês de nascimento da pessoa.
     * @return O mês de nascimento da pessoa.
     */
    public int getMes() {
        return this.mes;
    }
    
    /**
     * Retorna o ano de nascimento da pessoa.
     * @return O ano de nascimento da pessoa.
     */
    public int getAno() {
        return this.ano;
    }
    
    /**
     * Retorna a altura da pessoa.
     * @return A altura da pessoa.
     */
    public float getAltura() {
        return this.altura;
    }
    
    /**
     * Retorna o peso da pessoa.
     * @return O peso da pessoa.
     */
    public float getPeso() {
        return this.peso;
    }

    /**
     * Calcula e retorna a idade da pessoa com base no ano atual.
     * @param ano O ano atual.
     * @return A idade da pessoa.
     */
    public int Idade(int ano) {
        int idade = ano - this.ano;
        System.out.println("A pessoa tem: " + idade + " anos de idade");
        return idade;
    }
    
    /**
     * Calcula e retorna a frequência cardíaca máxima da pessoa.
     * @param idade A idade da pessoa.
     * @return A frequência cardíaca máxima da pessoa.
     */
    public int frequenciaCardiaca(int idade) {
        int frequenciaCardiaca = 220 - idade;
        System.out.println("A Frequência Cardiaca: " + frequenciaCardiaca);
        return frequenciaCardiaca;
    }
    
    /**
     * Calcula e retorna a frequência cardíaca alvo da pessoa.
     * @param frequenciaCardiaca A frequência cardíaca máxima da pessoa.
     * @return A frequência cardíaca alvo da pessoa.
     */
    public double frequenciaCardiacaAlvo(int frequenciaCardiaca) {
        double frequenciaCardiacaAlvoMin = frequenciaCardiaca * 0.5;
        double frequenciaCardiacaAlvoMax = frequenciaCardiaca * 0.85;
        System.out.println("A Frequência Cardiaca Alvo esta entre: " + frequenciaCardiacaAlvoMin + " e " + frequenciaCardiacaAlvoMax);
        return frequenciaCardiacaAlvoMax;
    }

    /**
     * Calcula e imprime o índice de massa corporal da pessoa.
     */
    public void indiceDeMassaCorporal( float peso, float altura) { 
       float indiceDeMassaCorporal = peso / (altura * altura);
       System.out.println("O indice de Massa Corporal é: " + indiceDeMassaCorporal);
    }
    
}

