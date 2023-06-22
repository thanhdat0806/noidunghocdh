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
public class ConcreteAggregate extends Aggregate{

    static final int MAX_ITEMS = 6;
    int numberOfItems = 0;
    MenuItem[] menuItems;
    
    public ConcreteAggregate(){
        menuItems = new MenuItem[MAX_ITEMS];
        
        addItems("A");
        addItems("B");
        addItems("C");
        addItems("D");
    }
    
    public void addItems(String name){
        MenuItem menuItem = new MenuItem(name);
        if (numberOfItems >= MAX_ITEMS){
            System.err.println("Danh sach day roi");
        } else {
            menuItems[numberOfItems] = menuItem;
            numberOfItems = numberOfItems +1;
        }
    }
    
    public MenuItem[] getMenuItems(){
        return menuItems;
    }
    @Override
    public Iterator CreateIteraror() {
        return new ConcreteIterator(menuItems);
    }
    
}
