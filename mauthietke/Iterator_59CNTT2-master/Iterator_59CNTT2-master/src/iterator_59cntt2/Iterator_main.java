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
public class Iterator_main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        ConcreteAggregate concreteAggregate = new ConcreteAggregate();
        
        Client client = new Client(concreteAggregate);
        
        client.print();
    }
    
}
