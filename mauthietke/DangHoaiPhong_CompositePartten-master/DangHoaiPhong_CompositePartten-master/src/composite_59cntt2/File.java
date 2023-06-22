/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package composite_59cntt2;

/**
 *
 * @author DangHoaiPhong
 */
public class File extends AbstractFile{
    
    public File(String name, String createdDate) {
        super(name, createdDate);
    }

    @Override
    public void add(AbstractFile item) {
        //Khong lam gi
    }

    @Override
    public void remove(AbstractFile item) {
        //Khong lam gi
    }

    @Override
    public String getTreeFolder() {
        return this.prefix + this.name;
    }
}
