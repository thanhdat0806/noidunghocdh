/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package stratery.duck_ex;

/**
 *
 * @author DELL
 */
public abstract class Duck {
    IFlybehavior fly;
    IQuackbehavior quack;

    public void setFly(IFlybehavior fly) {
        this.fly = fly;
    }

    public void setQuack(IQuackbehavior quack) {
        this.quack = quack;
    }
    void performFly(){
        System.out.println("vit bay"+ fly.fly());
    }
    void performQuack(){
        System.out.println("vit keu"+ quack.quack());
    }
    public abstract void display();
}
