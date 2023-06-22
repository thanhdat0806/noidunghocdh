/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bt2;

import java.util.ArrayList;

/**
 *
 * @author DELL
 */
public class GioHang {
    IThanhToan hinhThucTT;
    ArrayList<HangHoa> dshh = new ArrayList<>();
    int tienHang = 0;
    public void setHinhThucTT(IThanhToan hinhThucTT)
    {
        this.hinhThucTT = hinhThucTT;
    }
    
    public void themHH(HangHoa hanghoa)
    {
        dshh.add(hanghoa);        
    }
    public int tienHangGoc(){
        for(int i=0;i<dshh.size();i++){
           tienHang += dshh.get(i).getGia();
       }
        return tienHang;
    }
    public double thanhToan()
    {
       return hinhThucTT.thanhToan(tienHang);
    }

    public void display()
    {
        for(int i=0;i<dshh.size();i++)
        {
            dshh.get(i).display();
        }
    }
}
