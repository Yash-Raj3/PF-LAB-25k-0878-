#include<stdio.h>
int main(){
    int marks[5][4];
    for(int i=0;i<5;i++){
        printf("=====Enter Student %d Marks=====\n",i+1);
        for(int j=0;j<4;j++){
            printf("Enter Subject %d Marks :",j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    printf("Student\tSub 1\tSub 2\tSub 3\tSub 4\n");
     for(int i=0;i<5;i++){
        printf("%d\t",i+1);
        for(int j=0;j<4;j++){
           printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    float sum;
    float avg;
      for(int i=0;i<5;i++){
        sum =0;
        for(int j=0;j<4;j++){
           sum += marks[i][j]; 
        }
      avg = sum/4;
        printf("Average Of Student %d Is %.2f\n",i+1,avg);
    }
    int count =0;
    
     for(int i=0;i<5;i++){
        
            if(marks[i][0] > 80){
                count++;
            }
        
    }
    printf("%d Students Have Achieved Above 80 Marks In Maths",count);
}