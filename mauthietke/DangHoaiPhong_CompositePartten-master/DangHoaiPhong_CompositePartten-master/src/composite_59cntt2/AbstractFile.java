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
public abstract class AbstractFile {
    String name, createdDate, path;
    String prefix = "";//Gian dong treefolder

    public AbstractFile(String name, String createdDate) {
        this.name = name;
        this.createdDate = createdDate;
        this.path = name;
    }
    
    public abstract void add(AbstractFile item);
    public abstract void remove(AbstractFile item);
    public abstract String getTreeFolder();
    
    public String getName() {
        return name;
    }

    public String getCreatedDate() {
        return createdDate;
    }

    public String getPath() {
        return path;
    }
    
}
