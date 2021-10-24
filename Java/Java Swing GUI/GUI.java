import javax.swing.*;
import java.awt.*;
import java.io.*;
import java.util.*;
import java.lang.*;

public class GUI
{
    public static void main(String[] args)
    {
        JFrame f= new JFrame("Application"); //Adding Frame
        f.setSize(600,500);
        f.setLayout(new FlowLayout());
        
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JButton fileChooser = new JButton(" CHOOSE FILE "); //Adding CHOOSE FILE button
		fileChooser.setFont(new Font("Verdana", Font.BOLD, 14));
        f.add(fileChooser);

        JTextArea textEnter =new JTextArea(5,30);  //Adding textarea
        textEnter.setFont(new Font("Verdana", Font.PLAIN, 18));
        f.add(textEnter);

        JButton b1 = new JButton("Count vowels");  //Adding count vowels button
        b1.setFont(new Font("Verdana", Font.BOLD, 18));
        f.add(b1);
        JButton b2 = new JButton("Count consonants");  //Adding count consonants button
        b2.setFont(new Font("Verdana", Font.BOLD, 18));
        f.add(b2);
        JButton b3 = new JButton("Count punctuation"); //Adding count punctuation button
        b3.setFont(new Font("Verdana", Font.BOLD, 18));
        f.add(b3);
        JButton b4 = new JButton("CAPITALIZE");      //Adding CAPITALIZE button
        b4.setFont(new Font("Verdana", Font.BOLD, 18));
       // b4.setBounds(100,250,200,30);
        f.add(b4);
        JLabel answer =new JLabel(); // Adding answer Label
        answer.setFont(new Font("Verdana", Font.PLAIN, 18));
        f.add(answer);
        JCheckBox check =new JCheckBox("choose to change colour"); //Adding checkbox for colour change
        check.setFont(new Font("Verdana", Font.BOLD, 18));
        f.add(check);

   //Action listener for choose file button
      fileChooser.addActionListener(a-> {
			textEnter.setText("");
			JFileChooser choosefile = new JFileChooser();
			int ghi = choosefile.showSaveDialog(null);
			if(ghi == JFileChooser.APPROVE_OPTION)
			{
				try
				{
					Scanner sc = new Scanner(choosefile.getSelectedFile());
					while(sc.hasNextLine())
					{
						textEnter.append(sc.nextLine());
					}
				}
				catch(FileNotFoundException error)
				{
					error.printStackTrace();
				}
			}
			
		});

    //Action listener for count vowel button
       b1.addActionListener(a->{
           int count=0;
           String str=textEnter.getText().toLowerCase();
           for(int i=0;i<str.length();i++)
           {
              if(str.charAt(i)=='a' || str.charAt(i)=='e' || str.charAt(i)=='i' || str.charAt(i)=='o' || str.charAt(i)=='u')
               count++;
           }
           answer.setText("Total vowels in the Entered Text : "+count);
       });

    //Action listener for count consonants button
      b2.addActionListener(a->{
           int count=0;
           String str=textEnter.getText().toLowerCase();
           for(int i=0;i<str.length();i++)
           {
               if(str.charAt(i)>='b' && str.charAt(i)<='z' && str.charAt(i)!='e' && str.charAt(i)!='i' && str.charAt(i)!='o' && str.charAt(i)!='u')
               count++;
           }
           answer.setText("Total consonants in the Entered Text : "+count);
       });

    //Action listener for count punctuation button
        b3.addActionListener(a->{
           int count=0;
           String str=textEnter.getText().toLowerCase();
           for(int i=0;i<str.length();i++)
           {
              if((str.charAt(i)>='!' && str.charAt(i)<='/') || (str.charAt(i)>=':' && str.charAt(i)<='@'))
               count++;
           }
           answer.setText("Total punctuation in the Entered Text : "+count);
       });

    //Action listener for CAPITALIZE button
        b4.addActionListener(a->{
           String str=textEnter.getText().toUpperCase();
           answer.setText("Capitalized Form : "+str);
       });

    //Item listener for check box
       check.addItemListener(a-> {
			if(a.getStateChange()==1)
			{
				f.getContentPane().setBackground(Color.RED);
				answer.setForeground(Color.BLUE);
			}
			else
			{
				f.getContentPane().setBackground(Color.YELLOW);
				answer.setForeground(Color.BLUE);
			}
		});
        f.setVisible(true);
    }
}