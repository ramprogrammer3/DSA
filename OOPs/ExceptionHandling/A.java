public class A {
    
    public static void main(String[] args) {
        
        try{
            int a = 5/0;
        }catch(Exception e){
            System.out.println("Exception caught");
        }
        catch(ArithmeticException e){
            System.out.println("Arithmetic Exception caught");
        }finally{
            System.out.println("finally block");
        }
    }
}
