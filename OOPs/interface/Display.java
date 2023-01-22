
/**
 * Display
 */
public class Display implements Calculate {

    int x;
    public void cal(int item){
        x = item *item;
    }


    public static void main(String[] args) {
        
       Display arr = new Display();
       arr.x = 0;
       arr.cal(2);
       System.out.println(arr.x);
    }
    
}