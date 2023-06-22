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
public class DienThoai_TPK {
    String wifi, congGiaoTiep, pin;

    public DienThoai_TPK(String wifi, String congGiaoTiep, String pin) {
        this.wifi = wifi;
        this.congGiaoTiep = congGiaoTiep;
        this.pin = pin;
    }

    public String getWifi() {
        return wifi;
    }

    public void setWifi(String wifi) {
        this.wifi = wifi;
    }

    public String getCongGiaoTiep() {
        return congGiaoTiep;
    }

    public void setCongGiaoTiep(String congGiaoTiep) {
        this.congGiaoTiep = congGiaoTiep;
    }

    public String getPin() {
        return pin;
    }

    public void setPin(String pin) {
        this.pin = pin;
    }

    @Override
    public String toString() {
        return "Ngoai ra dien thoai con " + wifi + ", " + congGiaoTiep + ", " + pin;
    }
    
    
}
