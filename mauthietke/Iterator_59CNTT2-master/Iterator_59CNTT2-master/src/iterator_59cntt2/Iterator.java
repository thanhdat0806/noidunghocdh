/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package iterator_59cntt2;

/**
 *
 * @author DangHoaiPhong
 */
public abstract class Iterator {
    public abstract Object First();
    public abstract Object Next();
    public abstract boolean isDone();
    public abstract Object CurrentItem();
}
