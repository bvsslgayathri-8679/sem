
class Time_conversion{
    public static void main(String args[]){
        int hr=Integer.parseInt(args[0]);
        int min=Integer.parseInt(args[1]);
        int sec=Integer.parseInt(args[2]);
        String ampm=args[3];
        if((ampm.equals("pm")||ampm.equals("PM")) && hr<12)
        {
            hr=hr+12;
        }
        if((ampm.equals("pm")||ampm.equals("PM")) && hr==12)
        {
            hr=0;
             
        }
        /*System.out.printf("time in 24 hrs is %02d: %02d : %02d ",hr,min,sec);
        System.out.println();
        System.out.format("time in 24 hrs is %02d: %02d : %02d ",hr,min,sec);
        System.out.println();*/
        System.out.printf("time in 24 hrs is "+String.format("%02d:%02d:%02d",hr,min,sec));
    }
}