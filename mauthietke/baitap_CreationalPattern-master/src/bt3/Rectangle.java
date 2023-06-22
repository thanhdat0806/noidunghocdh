/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bt3;

/**
 *
 * @author Asus
 */
public class Rectangle extends Shape
{
    private static Rectangle rectangle;

    @Override
    public String draw() 
    {
        return "Hình chữ nhật";
    }
    
    public Rectangle() 
    {}

    public Rectangle(String brush, String paper, String frame) 
    {
        super(brush, paper, frame);
    }
    
    public static Rectangle createInstance() {
        if (rectangle == null) 
        {
            rectangle = new Rectangle();
        }
        return rectangle;
    }
}