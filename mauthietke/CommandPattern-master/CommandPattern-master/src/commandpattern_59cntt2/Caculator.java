/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package commandpattern_59cntt2;

/**
 *
 * @author DangHoaiPhong
 */
public class Caculator {
    private float total;
    public String operation(char operator, float operand){
        StringBuilder stringBuilder = new  StringBuilder();
        stringBuilder.append(total)
                .append("")
                .append(operator)
                .append("")
                .append(operand)
                .append(" = ");
        switch(operator)
        {
            case '+': 
                total+=operand; break;
            case '-': 
                total-=operand; break;
            case '*': 
                total*=operand; break;
            case '/': 
                total/=operand; break;
        }
        stringBuilder.append(total)
                .append("\n");
        return stringBuilder.toString();
    }
}
