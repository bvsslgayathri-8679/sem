class P6b{
    public static void main(String... arg){
        figure3d f1[]=new figure3d[3];
        f1[0]=new cube();
        f1[1]=new sphere();
        f1[2]=new cone();
        for(int i=0;i<3;i++){
            f1[i].area();
        }
    }
}

class figure3d{
    public void area(){
        System.out.println("area of 3d obj ");
    }
}
class cube extends figure3d{
    public void area(){
        System.out.println("area of cube ");
    }
}
class sphere extends figure3d{
    public void area(){
        System.out.println("area of sphere ");
    }
}
class cone extends figure3d{
    public void area(){
        System.out.println("area of cone ");
    }
}