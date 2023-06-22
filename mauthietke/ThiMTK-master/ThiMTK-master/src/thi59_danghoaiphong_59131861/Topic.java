/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package thi59_danghoaiphong_59131861;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author DangHoaiPhong
 */
public class Topic {

    String tenTopic;
    List<ThanhVienObserver> observer = new ArrayList<>();

    public Topic(String tenTopic) {
        this.tenTopic = tenTopic;
    }

    public void dangKy(ThanhVienObserver tv) {
        if (!observer.contains(tv)) {
            observer.add(tv);
            tv.thongBao();
        }
    }

    public void capNhat(ThanhVienObserver tv) {

    }

    public void huyDangKy(ThanhVienObserver tv) {
        if (observer.contains(tv)) {
            observer.remove(tv);
            
        }

    }

    public static interface ThanhVienObserver {

        public void thongBao();
    }
}
