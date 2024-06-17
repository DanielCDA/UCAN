import java.awt.*;
import java.awt.event.*;

import javax.swing.*;

public class Interfaces extends JFrame
{
    private PainelCentro pCentro;
    /* Construtor da class */
    public Interfaces()
    {
        // Titulo da janela
        super("Usando Jfarm");
        
        getContentPane().add( pCentro = new PainelCentro(), BorderLayout.CENTER);
        getContentPane().add(new  ButtonsPanel(), BorderLayout.SOUTH);

        //dimensao da janela
        setSize(360, 200);
        setLocationRelativeTo(null);
        setVisible(true);
    }

    /*class interna chama-se painel personalisado
     * porque descende de JPanel
     */
    public class PainelCentro extends JPanel
    {
        //Declaracao de variaveis
        private JComboBox provinceBox;
        private String proviceNome[] = {"Luanda","Cabinda"};
        private JTextField feildNome, fieldTelefone;
        private JLabel label[];
        private String labelNome[]= {"Nome","Telefone","Naturalidade", "Sexo"};
        private RadioButtonsPanel sexoPainel;
        //declaracao de constante
        private final int LINHA = labelNome.length, COLUNAS = 2;
        private final int NOME = 0, TELEFONE = NOME + 1,NATRALIDADE = TELEFONE + 1, SEXO =  NATRALIDADE + 1;

        // Construtor da class paielcetral
        public  PainelCentro()
        {
            //Gerenciador de layout
            setLayout(new GridLayout(LINHA, COLUNAS, 5, 1));
            
            label = new JLabel[labelNome.length];

            //instacianos e adicionanos logo ao painel
            for( int i = 0; i < labelNome.length; ++i)
            {
                //instanciamos e adicionamos os objectos no painel
                add( label[i] = new JLabel ( labelNome[i]));
                switch (i) 
                {
                    case NOME:
                        add( feildNome = new JTextField(30));
                        break;
                    case TELEFONE:
                        add( fieldTelefone = new JTextField(30));
                        break;
                    case NATRALIDADE:
                        add( provinceBox = new JComboBox(proviceNome));
                        break;
                    case SEXO:
                        add( sexoPainel = new RadioButtonsPanel() );
                        break;
                }
            }
        }
        public String toString()
        {
            String str = "Dados Iseridos \n\n";

            for ( int i = 0; i < labelNome.length; ++i)
            {
                str += labelNome[i] + " : ";

                switch (i) 
                {
                    case NOME:
                        str += feildNome.getText() + "\n";       
                        break;
                    case TELEFONE:
                        str += fieldTelefone.getText() + "\n";
                        break;
                    case NATRALIDADE:
                        str += provinceBox.getSelectedItem() + "\n";
                        break;
                    case SEXO:
                        str += sexoPainel.toString();
                        break;
                }
            }
            return str;
        }
    }

    

    //painel  personalisado
    private class  RadioButtonsPanel extends JPanel
    {
        private JRadioButton masculinoBt, femeninoBt;
        private  ButtonGroup sexoGroup;

        //construtor da claas radiobuttospaiel
        public RadioButtonsPanel()
        {
            setLayout ( new GridLayout(1,2));
            add( masculinoBt = new JRadioButton("Masculio", true) );
            add( femeninoBt = new JRadioButton("Femenino", false));

            sexoGroup = new ButtonGroup();

            sexoGroup.add(masculinoBt);
            sexoGroup.add(femeninoBt);
        }    

        public String  toString()
        {
            if(masculinoBt.isSelected())
                return "Maculino";
            return "Femenino";
        }
    }

    private class  ButtonsPanel extends JPanel
    {
        private  JButton saveBt, cancelarBt;
        private ManipuladorEventos manipulador;

        public ButtonsPanel()
        {
            //definir o gerenciador de layout
            setLayout( new FlowLayout());

            manipulador= new ManipuladorEventos();

            add( saveBt = new JButton("Salvar"));
            add( cancelarBt = new JButton("Cancelar"));
            
            //registar os dois botoes ao manipulador de eventos
            saveBt.addActionListener(manipulador);
            cancelarBt.addActionListener(manipulador);
        }
       
        private class ManipuladorEventos implements ActionListener
        {
            public void actionPerformed( ActionEvent event)
            {
                // se o bota clicado for salvar
                if( event.getSource() == saveBt)
                    JOptionPane.showConfirmDialog(null, pCentro.toString());
                else
                    dispose();

            }
        }
    }// Fim da class RadiobuttonsPanel

    public static void main(String args[])
    {
        new Interfaces();
    }
}
