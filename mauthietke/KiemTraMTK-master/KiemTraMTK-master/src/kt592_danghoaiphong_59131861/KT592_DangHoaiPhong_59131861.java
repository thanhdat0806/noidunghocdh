/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package kt592_danghoaiphong_59131861;

/**
 *
 * @author DangHoaiPhong
 */
public class KT592_DangHoaiPhong_59131861 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        DienThoai.Builder builder = DienThoai.Builder.Intance();
//        DienThoai dienThoai = new DienThoai.Builder()
//                .addTPC(new DienThoai_TPC("Man hinh 14 inch", "32GB", "Intel", "8x"))
//                .addTPK(new DienThoai_TPK("Co wifi", "Co cong giao tiep", "Pin 2000"))
//                .build();
//        System.out.println(dienThoai.toString());
          builder.addTPC(new DienThoai_TPC("Man hinh 14 inch", "32GB", "Intel", "8x"))
                 .addTPK(new DienThoai_TPK("Co wifi", "Co cong giao tiep", "Pin 2000"))
                 .build();
    }
    
}
