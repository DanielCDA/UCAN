/**
 * A classe HeartRate representa informações relacionadas à frequência cardíaca de uma pessoa,
 * incluindo seu nome, sobrenome, data de nascimento e métodos para calcular sua idade e frequência cardíaca.
 */
public class HeartRate {
    private String nome;      // Nome da pessoa
    private String sobrenome; // Sobrenome da pessoa
    private int dia;       // Dia de nascimento da pessoa
    private int mes;       // Mês de nascimento da pessoa
    private int ano;          // Ano de nascimento da pessoa

    /**
     * Define o nome do construtor.
     * @param HeartRate O construtor.
     */
    HeartRate(String nome, String sobrenome, int dia,int mes, int ano)
    {
        this.nome = nome;
        this.sobrenome = sobrenome;
        this.dia = dia;
        this.mes = mes;
        this.ano = ano;
    }
    

    /**
     * Obtém o nome da pessoa.
     * @return O nome da pessoa.
     */
    public String getNome() {
        return this.nome;
    }

    /**
     * Obtém o sobrenome da pessoa.
     * @return O sobrenome da pessoa.
     */
    public String getSobrenome() {
        return this.sobrenome;
    }

    /**
     * Obtém o dia de nascimento da pessoa.
     * @return O dia de nascimento da pessoa.
     */
    public int getDia() {
        return this.dia;
    }

    /**
     * Obtém o mês de nascimento da pessoa.
     * @return O mês de nascimento da pessoa.
     */
    public int getMes() {
        return this.mes;
    }

    /**
     * Obtém o ano de nascimento da pessoa.
     * @return O ano de nascimento da pessoa.
     */
    public int getAno() {
        return this.ano;
    }

    /**
     * Calcula a idade da pessoa com base no ano atual.
     * @param ano O ano de referência para calcular a idade.
     * @return A idade da pessoa.
     */
    public int Idade(int ano) {
        int idade = ano - this.ano;
        System.out.println("A pessoa tem: " + idade + " anos de idade");
        return idade;
    }

    /**
     * Calcula a frequência cardíaca máxima da pessoa com base em sua idade.
     * @param idade A idade da pessoa.
     * @return A frequência cardíaca máxima da pessoa.
     */
    public int frequenciaCardiaca(int idade) {
        int frequenciaCardiaca = 220 - idade;
        System.out.println("A Frequência Cardiaca Maxima eh: " + frequenciaCardiaca);
        return frequenciaCardiaca;
    }

    /**
     * Calcula a frequência cardíaca alvo da pessoa com base em sua frequência cardíaca máxima.
     * @param frequenciaCardiaca A frequência cardíaca máxima da pessoa.
     * @return A frequência cardíaca alvo da pessoa.
     */
    public double frequenciaCardiacaAlvo(int frequenciaCardiaca) {
        double frequenciaCardiacaAlvoMin = frequenciaCardiaca * 0.5;
        double frequenciaCardiacaAlvoMax = frequenciaCardiaca * 0.85;
        System.out.println("A Frequencia Cardiaca Alvo esta entre: " + frequenciaCardiacaAlvoMin + " e " + frequenciaCardiacaAlvoMax);
        return frequenciaCardiacaAlvoMax;
    }
}
