class Fibrec{
    protected static int fibb(int a){
        if(a==1||a==0)
        return 1;
        else
        return fibb(a-1)+fibb(a-2);
    }
    public static void main(String args[])
    {
        System.out.println("0 is the 1st fibb series");
        int a=Integer.parseInt(args[0]);
        for(int i=0;i<a-1;i++){
        System.out.println(fibb(i)+" is "+(i+1)+" th term fibb series");
        }
    }
}