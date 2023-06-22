/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bt2;

/**
 *
 * @author DELL
 */
public class ThanhToanCOD implements IThanhToan{

    @Override
    public double thanhToan(int tienHang) {
      if(tienHang>2000000) return tienHang - tienHang*2/100;
            return tienHang;  
    }
    
}
