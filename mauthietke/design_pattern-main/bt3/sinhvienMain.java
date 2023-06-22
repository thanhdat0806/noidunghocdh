/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package bt3;

import java.text.ParseException;
import java.text.SimpleDateFormat;

/**
 *
 * @author DELL
 */
public class sinhvienMain {

    /**
     * @param args the command line arguments
     * @throws java.text.ParseException
     */
    public static void main(String[] args) throws ParseException {
        // TODO code application logic here
         QLSV qldsSV = new QLSV();
        SinhVien sv1 = new SinhVien("huy",new SimpleDateFormat("dd/MM/yy").parse("12/12/2001"),9);
        SinhVien sv2 = new SinhVien("son",new SimpleDateFormat("dd/MM/yy").parse("11/11/2001"),9);
        SinhVien sv3 = new SinhVien("dta",new SimpleDateFormat("dd/MM/yy").parse("10/10/2001"),9);
        
        qldsSV.themSV(sv1);
        qldsSV.themSV(sv2);
        qldsSV.themSV(sv3);
        
        System.out.print("Danh sach sinh vien duoc khoi tao: ");
        qldsSV.inDS();
        
        ISoSanh ssSinhVienTheoDiem = new SoSanhTheoDiem();
        ISoSanh ssSinhVienTheoTen = new SoSanhTheoTen();
        
        qldsSV.setSoSanh(ssSinhVienTheoDiem);
        qldsSV.sapXep();
        System.out.println("Danh sach sinh vien duoc sap xep theo ten: ");
        qldsSV.inDS();
        
        qldsSV.setSoSanh(ssSinhVienTheoTen);
        qldsSV.sapXep();
        System.out.println("Danh sach sinh vien duoc sap xep theo diem: ");
        qldsSV.inDS();
    }
    
}
