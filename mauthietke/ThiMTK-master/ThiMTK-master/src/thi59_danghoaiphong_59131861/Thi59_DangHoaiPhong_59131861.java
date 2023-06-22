/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package thi59_danghoaiphong_59131861;

/**
 *
 * @author DangHoaiPhong
 */
public class Thi59_DangHoaiPhong_59131861 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Topic topic = new Topic("Mau thiet ke");
        ThanhVienA tvA = new ThanhVienA();
        ThanhVienB tvB = new ThanhVienB();
        tvA.dangKy(topic);
        tvB.dangKy(topic);
        tvA.huyDangKy(topic);
    }
    
}
