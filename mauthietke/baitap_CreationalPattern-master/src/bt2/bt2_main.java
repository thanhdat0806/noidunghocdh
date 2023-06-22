/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bt2;

/**
 *
 * @author Asus
 */
public class bt2_main 
{
    public static void main(String[] args) 
    {
        MyStringBuilder str = new MyStringBuilder.Builder().addString("hello world \t").addBool(true).addFloat(5.0F).build();
        System.out.println(str.toString());
        System.out.println(str.getClass());
    }
}
