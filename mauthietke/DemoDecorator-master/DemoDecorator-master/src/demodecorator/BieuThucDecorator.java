/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package demodecorator;

/**
 *
 * @author DangHoaiPhong
 */
public class BieuThucDecorator extends BieuThuc{

    BieuThuc bthuc;

    public BieuThuc getBthuc() {
        return bthuc;
    }

    public void setBthuc(BieuThuc bthuc) {
        this.bthuc = bthuc;
    }
    
    
    @Override
    public float giaTri() {
        return bthuc.giaTri();
    }

    @Override
    public String bieuThuc() {
        return bthuc.bieuThuc();
    }

    public BieuThucDecorator(BieuThuc bthuc) {
        this.bthuc = bthuc;
    }
    
}
