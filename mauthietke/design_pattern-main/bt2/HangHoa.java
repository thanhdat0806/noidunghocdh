/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bt2;

/**
 *
 * @author DELL
 */
public class HangHoa {
    private String tenHH;
    private int gia;
    private String moTa;
    public HangHoa(String tenHH, int gia, String moTa) 
    {
        this.tenHH = tenHH;
        this.gia = gia;
        this.moTa = moTa;
    }

    public HangHoa() 
    {}
    public String getTenHH() 
    {
        return tenHH;
    }
    public void setTenHH(String tenHH) 
    {
        this.tenHH = tenHH;
    }
    public int getGia() 
    {
        return gia;
    }
    public void setGia(int gia) 
    {
        this.gia = gia;
    }
    public String getMoTa() 
    {
        return moTa;
    }
    public void setMoTa(String moTa) 
    {
        this.moTa = moTa;
    }
    public void display()
    {
        System.out.println("Ten hang hoa: "+tenHH);
        System.out.println("Gia hang hoa: "+gia); 
        System.out.println("Mo ta hang hoa: "+moTa); 
    }
}
