/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package bt2;

/**
 *
 * @author DELL
 */
public class hanghoaMain {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        GioHang giohang1 = new GioHang();
        HangHoa hh1 = new HangHoa("hh1",10000,"hh1");
        HangHoa hh2 = new HangHoa("hh2",20000,"hh2");          
        HangHoa hh3 = new HangHoa("hh3",30000,"hh3");
        
        GioHang giohang2 = new GioHang();  
        HangHoa hh4 = new HangHoa("hh4",40000,"hh4");
        HangHoa hh5 = new HangHoa("hh5",50000,"hh5");   
        HangHoa hh6 = new HangHoa("hh6",60000,"hh6"); 
        
        giohang1.setHinhThucTT(new ThanhToanOnline());
        giohang2.setHinhThucTT(new ThanhToanCOD());  
        
        giohang1.themHH(hh1);
        giohang1.themHH(hh2);
        giohang1.themHH(hh3);        
        giohang2.themHH(hh4);
        giohang2.themHH(hh5);
        giohang2.themHH(hh6);
        System.out.println("Thong tin cua gio hang 1: ");
        System.out.println("Danh sach hang hoa trong gio hang 1: ");
        giohang1.display();
        System.out.println("Tong tien hang: "+giohang1.tienHangGoc());
        System.out.println("Tong so tien khach phai tra: "+giohang1.thanhToan());      
        System.out.println("Thong tin cua gio hang 2: ");
        System.out.println("Danh sach hang hoa trong gio hang 2: ");
        giohang2.display();
        System.out.println("Tong tien hang hoa: "+giohang2.tienHangGoc());
        System.out.println("Tong so tien khach phai tra: "+giohang2.thanhToan());
    }
    
}
