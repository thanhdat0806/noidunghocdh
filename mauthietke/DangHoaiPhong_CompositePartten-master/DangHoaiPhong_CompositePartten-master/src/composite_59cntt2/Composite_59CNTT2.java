/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package composite_59cntt2;

/**
 *
 * @author DangHoaiPhong
 */
public class Composite_59CNTT2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        AbstractFile root = new Folder("Toan", "19/5/2020");
        root.add(new Folder("Dai so", "19/5/2020"));
        System.out.println(root.getTreeFolder());
    }
    
}
