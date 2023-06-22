/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package demodecorator;

/**
 *
 * @author DangHoaiPhong
 */
public class DemoDecorator {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        BieuThuc bieuthuc = new BieuThucDonGian(8);
        bieuthuc = new Cong(9, bieuthuc);
        bieuthuc = new Tru(9, bieuthuc);
        bieuthuc = new Nhan(4, bieuthuc);
        bieuthuc = new Chia(9, bieuthuc);
        System.out.println(bieuthuc.giaTri());
        System.out.println(bieuthuc.bieuThuc());
    }
    
}
