/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package thi59_danghoaiphong_59131861;

/**
 *
 * @author DangHoaiPhong
 */
public class ThanhVienA implements Topic.ThanhVienObserver{

    boolean dangKy = false;
    boolean capNhat = false;
    
    public void dangKy(Topic topic)
    {
        topic.dangKy(this);
    }
    public void huyDangKy(Topic topic)
    {
        topic.huyDangKy(this);
        dangKy = false;
    }
    
    @Override
    public void thongBao() {
        if(dangKy || capNhat){
      
            System.out.println("Thành viên A chưa đăng ký topic");
        }
        else{
            System.out.println("Thành viên A đã đăng ký topic");
           
        }
    }
    
}
