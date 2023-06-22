/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package stratery.duck_ex;

/**
 *
 * @author DELL
 */
public class DuckExMain {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Duck duck = new Vitxiem();
        IFlybehavior flybehavior=new Flynoway();
        IQuackbehavior quackbehavior=new Squeak();
        duck.setFly(flybehavior);
        duck.setQuack(quackbehavior);
        duck.display();
    }
    
}
