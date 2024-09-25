class A
{
    int a;
    String B;
    A()
    {
        a=10;
        B="hellow";
        System.out.println(a+" "+B);
    }
    A(A ref)
    {
        a=ref.a;
        B=ref.B;
        System.out.println(B+" "+a);
    }
}
class copy_cons 
{
    public static void main(String[] args)
    {
        A ds=new A();
        A dscopy=new A(ds);
    }
}




