//Accept an array of strings and display the vowels and consonants occurred in each string.

import java.util.*;
class Vc{
    public static void vowels_con(String s){
        char arr1[]=new char[s.length()];
        char arr2[]=new char[s.length()];
        int j=0,k=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='a'||s.charAt(i)=='e'||s.charAt(i)=='i'||s.charAt(i)=='o'||s.charAt(i)=='u'||s.charAt(i)=='A'||s.charAt(i)=='E'||s.charAt(i)=='I'||s.charAt(i)=='O'||s.charAt(i)=='U'){
                arr1[j]=s.charAt(i);  
                j++;              
            }
            else{
                arr2[k]=s.charAt(i);
                k++;
            }
        }
        for(char i:arr1){
            System.out.print(i+" ");
        }
        System.out.println();
        for(char i:arr2){
            System.out.print(i+" ");
        }
        System.out.println();
    }
    public static void main(String... arg){
        int n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        String[] arr=new String[n+1];
        
        for(int i=0;i<n+1;i++)
        {
            arr[i]=sc.nextLine();
        }
        for(int i=0;i<n+1;i++){
            if(arr[i]!=""){
                vowels_con(arr[i]);
            }
        }
    }
}
