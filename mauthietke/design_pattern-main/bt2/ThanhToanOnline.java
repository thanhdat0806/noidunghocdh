/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bt2;

/**
 *
 * @author DELL
 */
public class ThanhToanOnline implements IThanhToan{

    @Override
    public double thanhToan(int tienHang) {
        if(tienHang<1000000) {
            return tienHang - tienHang*5/100;
        }
        else
        return tienHang - tienHang*7/100;
    }
    
}
