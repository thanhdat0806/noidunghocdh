/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package bt1;

/**
 *
 * @author DELL
 */
public class tinhMain {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        context ct =new context();
        ct.setTinhToan(new Cong());
        System.out.println("75 + 12 = "+ct.tinh(75, 12));
        ct.setTinhToan(new Tru());
        System.out.println("54 - 78 = "+ct.tinh(54, 78));
    }
}
