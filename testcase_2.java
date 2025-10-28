interface Printable {
    void print();
}

class Parent {
    protected int p;

    public Parent(int p) {
        this.p = p;
    }

    public int getP() {
        return p;
    }
}

class Child extends Parent implements Printable {
    private int c;

    public Child(int p, int c) {
        super(p);
        this.c = c;
    }

    public void print() {
        System.out.println("Child: p=" + p + ", c=" + c);
    }

    public int sum() {
        return p + c;
    }

    public static void main(String[] args) {
        Child ch = new Child(2, 3);
        ch.print();
        System.out.println("sum=" + ch.sum());
    }
}
