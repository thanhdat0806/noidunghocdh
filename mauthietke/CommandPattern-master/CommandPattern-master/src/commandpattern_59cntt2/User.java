/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package commandpattern_59cntt2;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author DangHoaiPhong
 */
public class User {
    List<Command> listCommand = new ArrayList<>();
    Caculator caculator = new Caculator();
    int current = -1;
    public void compute(char operator, float operand){
       Command command = new CalculatorCommand(operator, operand, caculator);
       command.execute();
       addCommand(command);
    }
    public void undo(){
        if(current>=0)
        {
            System.out.print("Undo: ");
            listCommand.get(current).unExecute();
            current--;
        }
        else
            System.out.println("Can not perform undo");
    }
    public void redo(){
        if(current<listCommand.size()-1){
            System.out.print("Redo: ");
            current++;
            listCommand.get(current).execute();
        }
        else
            System.out.println("Can not perform redo");
    }

    private void addCommand(Command command) {
        current++;
        for(int i = current; i<listCommand.size();i++)
            listCommand.remove(i);
        listCommand.add(command);
        current = listCommand.size()-1;
    }
}
