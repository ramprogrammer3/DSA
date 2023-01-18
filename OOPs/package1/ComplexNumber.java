
public class ComplexNumber {

    int realPart = 0;
    int imaginaryPart = 0;


    public ComplexNumber(int realPart, int imaginaryPart){
        this.realPart = realPart;
        this.imaginaryPart = imaginaryPart;
    }

    public ComplexNumber(int realPart){
        this.realPart = realPart;
        this.imaginaryPart = 0;
    }

    public ComplexNumber(){
        this.realPart = 0;
        this.imaginaryPart = 0;
    }

    public void setReal(int realPart){
        this.realPart = realPart;
    }

    public void setImaginary (int imaginaryPart){
        this.imaginaryPart = imaginaryPart;
    }

    public void print(){
        System.out.println(realPart + " + " + imaginaryPart + "i");
    }
    

    public static void main(String[] args) {

        ComplexNumber c1 = new ComplexNumber(2,3);
        c1.print();
        c1.setReal(4);
        c1.print();
        c1.setImaginary(10);
        c1.print();

        ComplexNumber c2 = new ComplexNumber();
        c2.print();
    }
}
