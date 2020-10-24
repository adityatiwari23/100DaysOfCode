# 100DaysOfCode
In this repository I would be regularly uploading my progress at 100DaysOfCode with Web Development.
package com.kapish;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here
        int n;
        int number[] = new int[20];
        System.out.println("enter the desired values");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for(int i=0;i<20;i++){
            number[i] = sc.nextInt();
        }
        System.out.println("your desired values are");
        for(int j=0;j<20;j++){
            System.out.println(number[j]);
        }

    }
}
------------------------------------------------------------
3)
package com.kapish;
public class Main {

    public static void main(String[] args) {
        //array
        int number[]={0,1,2,3,4,5,6,7,8,9,10,11};
        //lenght
        int f= number.length;
        int sum= 0;
        for (int i=0; i<f;i++){
            sum=sum+number[f-i-1];

        }
        System.out.println("Sum = "+sum);
        System.out.println("Average = "+(sum/f));



    }
}

4)fibonachi




5)
package com.kapish;
public class Main {

    public static void main(String[] args) {
        //array
        int number[]={0,1,2,3,4,5,6,7,8,9,10,11};
        //lenght
        int f= number.length;
        for (int i=1; i<f;i=i+2){
            System.out.print(number[i]+ " ");
        }



    }
}


6)=====================================================
package com.kapish;


public class Main {

    public static void main(String[] args) {
        //array
        int number[]={0,1,2,3,4,5,6,7,8,9,10,11};
        //lenght
        int f= number.length;
        for (int i=0; i<f;i++){
            System.out.print(number[f-i-1]+ " ");
        }



    }
}


===================




package com.kapish;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        //taking input
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter first number- ");
        int a= sc.nextInt();

        //making array
        int intArray[];
        intArray = new int[a];
        System.out.println(intArray);
    }
}

