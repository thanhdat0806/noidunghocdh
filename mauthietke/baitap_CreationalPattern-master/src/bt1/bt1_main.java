/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bt1;

import java.text.ParseException;
import java.text.SimpleDateFormat;

/**
 *
 * @author Asus
 */
public class bt1_main 
{
    public static void main(String[] args) throws ParseException 
    {
        HoaDonHeader HDH = new HoaDonHeader
        ("HD001", new SimpleDateFormat("dd/mm/yyyy").parse("13/05/2020"),"Hoàng Tuấn Kiên");
        CTHD CTHD1 = new CTHD("Keyboard",2,1000000,0.2);
        CTHD CTHD2 = new CTHD("Headphone",2,2500000,0.3);
        CTHD CTHD3 = new CTHD("Laptop",1,15000000,0.5);
        CTHD CTHD4 = new CTHD("USB",7,999000,0.5);
        
        HoaDon HD = new HoaDon.Builder()
            .addHoaDonHeader(HDH)
            .addCTHD(CTHD1)
            .addCTHD(CTHD2)
            .addCTHD(CTHD3)
            .addCTHD(CTHD4)
            .build();
        System.out.println(HD.toString());
    }
    
}
