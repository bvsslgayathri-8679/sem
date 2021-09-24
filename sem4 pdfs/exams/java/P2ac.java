class P2as{
    public static void main(String... arg){
        int hr=Integer.parseInt(arg[0]);
        int min=Integer.parseInt(arg[1]);
        int sec=Integer.parseInt(arg[2]);
        String time=arg[3].toLowerCase();
        if(time.equals("pm") && hr<12){
            hr+=12;
        }
        else if(time.equals("pm") && hr==12){
            hr=0;
        }
        
        System.out.printf("time is "+String.format("%02d:%02d:%02d",hr,min,sec));
    }
}