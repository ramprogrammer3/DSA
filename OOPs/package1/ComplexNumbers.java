
/**
 * ComplexNumbers
 */
public class ComplexNumbers {

    private int realPart = 0;
    private int imaginaryPart = 0;

    public ComplexNumbers(int realPart, int imaginaryPart){
        this.realPart = realPart;
        this.imaginaryPart = imaginaryPart;
    }

    public ComplexNumbers(int realPart){
        this.realPart = realPart;
        this.imaginaryPart = 0;
    }

    public ComplexNumbers(){
        this.realPart = 0;
        this.imaginaryPart = 0;
    }

    public void plus(ComplexNumbers c2){
        this.realPart = this.realPart + c2.realPart;
        this.imaginaryPart = this.imaginaryPart + c2.imaginaryPart;
    }

    public void multiply(ComplexNumbers c2){
        int temp = this.realPart;
        this.realPart = (this.realPart * c2.realPart) - (this.imaginaryPart * c2.imaginaryPart);
        this.imaginaryPart = (temp * c2.imaginaryPart ) + (this.imaginaryPart * c2.realPart);
    }

    public void print(){
        System.out.println(realPart + " + " + "i" + imaginaryPart);
    }


    public static void main(String[] args) {
        
        ComplexNumbers c1 = new ComplexNumbers(2, 3);
        c1.print();
        ComplexNumbers c2 = new ComplexNumbers(-1,3);
        // c1.plus(c2);
        // c2.print();
        // c1.print();
        c2.print();
        c1.multiply(c2);
        c1.print();
        


    }
}