/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package kt592_danghoaiphong_59131861;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author DangHoaiPhong
 */
public class DienThoai {

    DienThoai_TPC tpc;
    List<DienThoai_TPK> listTPK;

    public DienThoai(Builder builder) {
        this.tpc = builder.tpc;
        this.listTPK = builder.listTPK;
    }

    public static class Builder {

        DienThoai_TPC tpc = new DienThoai_TPC();
        List<DienThoai_TPK> listTPK = new ArrayList<>();

        private static Builder intance;

        public static Builder Intance() {
            if (intance == null) {
                intance = new Builder();
            }
            return intance;
        }

        public Builder addTPC(DienThoai_TPC tPC) {
            this.tpc = tPC;
            return this;
        }

        public Builder addTPK(DienThoai_TPK tPK) {
            listTPK.add(tPK);
            return this;
        }

        public DienThoai build() {
            return new DienThoai(this);
        }
    }

    @Override
    public String toString() {
        String str = "";
        str += tpc.toString();
        str += "\n";
        for (DienThoai_TPK tpk : listTPK) {
            str += tpk.toString();
        }
        return str;
    }

}
