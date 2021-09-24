class P3ac{
    public static int fibb(int n){
        if(n==0)
        return 0;
        else if(n==1)
        return 1;
        else
        return fibb(n-1)+fibb(n-2);
    }
    public static void main(String... arg){
        int n=Integer.parseInt(arg[0]);
        for(int i=0;i<n;i++){
            int r=fibb(i);
            System.out.println(r);
        }
    }
}