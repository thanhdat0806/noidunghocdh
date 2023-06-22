/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package iterator_59cntt2;


/**
 *
 * @author DangHoaiPhong
 */
public class Client {
    ConcreteAggregate concreteAggregate;

    public Client(ConcreteAggregate concreteAggregate) {
        this.concreteAggregate = concreteAggregate;
    }
    
    public void print(){
        Iterator concreteIterator = concreteAggregate.CreateIteraror();
        System.out.println("Danh sach");
        print(concreteIterator);
    }
    
    private void print(Iterator iterator){
        while(!iterator.isDone()){
            MenuItem menuItem = (MenuItem) iterator.Next();
            System.out.println(menuItem.getName());
        }
    }
}
