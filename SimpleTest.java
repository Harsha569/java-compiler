public class SimpleTest {
    private int x;
    private int y;

    public SimpleTest(int a, int b) {
        this.x = a;
        this.y = b;
    }

    public int add() {
        return x + y;
    }

    public static void main(String[] args) {
        int a = 10;
        int b = 20;

        if (a < b) {
            System.out.println("a is less");
        }

        while (a < 15) {
            a++;
        }

        for (int i = 0; i < 5; i++) {
            System.out.println("Loop");
        }

        SimpleTest obj = new SimpleTest(5, 10);
        int result = obj.add();
    }
}