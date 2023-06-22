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
public class ConcreteIterator extends Iterator {

    MenuItem[] items;
    int position = 0;

    //Ham tao lay mang cac menu item chung duyet qua
    public ConcreteIterator(MenuItem[] items) {
        this.items = items;
    }
    
    @Override
    public Object First() {
        return 0;
    }

    //Tra ve item tiep theo trong mang va tang posision
    @Override
    public Object Next() {
        MenuItem menuItem = items[position];
        position = position + 1;
        return menuItem;
    }

    @Override
    public boolean isDone() {
        if (position>=items.length || items[position] == null){
        return true;
        }else{
        return false;
        }
    }

    @Override
    public Object CurrentItem() {
        return position;
    }

    
    
}
