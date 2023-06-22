/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bt2;

/**
 *
 * @author Asus
 */
public class MyStringBuilder 
{
    String str;
    
    public static class Builder 
    {
        
        String Str = "";

        public Builder addFloat(float f) 
        {
            this.Str = this.Str.concat(Float.toString(f));
            return this;
        }
        
        public Builder(String myStr) 
        {
            this.Str = Str;
        }
        
        public Builder addBool(boolean b) 
        {
            this.Str = this.Str.concat(Boolean.toString(b));
            return this;
        }
        
        public Builder() 
        {}
                
        public Builder addString(String s) 
        {
            this.Str = this.Str.concat(s);
            return this;
        }
        public MyStringBuilder build() 
        {
            return new MyStringBuilder(this);
        }
    }
    
    protected MyStringBuilder (Builder builder) 
    {
        this.str = builder.Str;
    }
    
    @Override
    public String toString() 
    {
        return "Chuỗi của bạn: " + str;
    }
}
