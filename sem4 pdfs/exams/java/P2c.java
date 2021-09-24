import java.util.*;
class P2c{
    public static void main(String... arg){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        int fr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
            
        }
        
        for(int i=0;i<n;i++)
        {
                int count=1;
                for(int j=i+1;j<n;j++){
                    if(arr[i]==arr[j]){
                        fr[j]=-1;
                        count++;
                    }


                    
                }
                if(fr[i]!=-1){
                    fr[i]=count;
                }
                

            
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(fr[i]>fr[j]){
                    arr[i]=arr[i]+arr[j];
                    arr[j]=arr[i]-arr[j];
                    arr[i]=arr[i]-arr[j];

                    fr[i]=fr[i]+fr[j];
                    fr[j]=fr[i]-fr[j];
                    fr[i]=fr[i]-fr[j];
                }
            }
        }
        for(int i=0;i<n;i++){
            if(fr[i]!=-1)
            System.out.println(fr[i]+" "+arr[i]+" ");
        
        }
       
    }
}