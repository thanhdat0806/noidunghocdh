/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package composite_59cntt2;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author DangHoaiPhong
 */
public class Folder extends AbstractFile {

    List<AbstractFile> listFile = new ArrayList<>();

    public Folder(String name, String createdDate) {
        super(name, createdDate);
    }

    @Override
    public void add(AbstractFile item) {
        if (!listFile.contains(item)) {
            listFile.add(item);
            item.path = this.path + "\\" + item.path;
            item.prefix = this.prefix + "..";
        }
    }

    @Override
    public void remove(AbstractFile item) {
        if (listFile.contains(item)) {
            listFile.remove(item);
            return;
        }
        listFile.forEach((folder)
                -> {
            folder.remove(item);
        }
        );
    }

    @Override
    public String getTreeFolder() {
        StringBuilder builder = new StringBuilder();
        builder.append(prefix).append(name);
        for(AbstractFile folder:listFile)
        {
        builder.append("\n").append(folder.getTreeFolder());
        }
        return builder.toString();
    }

}
