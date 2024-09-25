class instance_staticblock{
    instance_staticblock()
    {
        System.out.println("constructor called");
    }
    static 
    {
        System.out.println("static called");
    }
    {
        System.out.println("instance called");
    }
    public static void main(String[] args) {
        // instance_staticblock.show();
        instance_staticblock r=new instance_staticblock();
        // r.showr();
    }
}

