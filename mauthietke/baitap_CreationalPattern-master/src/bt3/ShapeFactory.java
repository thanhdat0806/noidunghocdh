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
public class ShapeFactory 
{
    public Shape createShape(ShapeType type) 
    {
        
        Shape shape;
        switch (type) 
        {
            case Rectangle: return shape = Rectangle.createInstance();
            case Triangle: return shape = Triangle.createInstance();
            case Circle: return shape = Circle.createInstance();
        }
        return null;
    }
}