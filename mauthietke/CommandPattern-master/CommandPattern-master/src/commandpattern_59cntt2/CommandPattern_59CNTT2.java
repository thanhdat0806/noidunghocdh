/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package commandpattern_59cntt2;

/**
 *
 * @author DangHoaiPhong
 */
public class CommandPattern_59CNTT2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        User user = new User();
        user.compute('+', 5);
        user.compute('-', 1);
        user.undo();
    }
    
}
