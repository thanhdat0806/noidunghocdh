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
public class DienThoai_TPC {
    private String manHinh, rom, cpu, camera;

    public DienThoai_TPC(String manHinh, String rom, String cpu, String camera) {
        this.manHinh = manHinh;
        this.rom = rom;
        this.cpu = cpu;
        this.camera = camera;
    }

    DienThoai_TPC() {
    }

    public String getManHinh() {
        return manHinh;
    }

    public void setManHinh(String manHinh) {
        this.manHinh = manHinh;
    }

    public String getRom() {
        return rom;
    }

    public void setRom(String rom) {
        this.rom = rom;
    }

    public String getCpu() {
        return cpu;
    }

    public void setCpu(String cpu) {
        this.cpu = cpu;
    }

    public String getCamera() {
        return camera;
    }

    public void setCamera(String camera) {
        this.camera = camera;
    }

    @Override
    public String toString() {
        return "Cau hinh cua dien thoai: " + "Man hinh: " + manHinh + ". Rom: " + rom + ". CPU: " + cpu + ". Camera=" + camera;
    }
    
    
}
